import math
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from geometry_msgs.msg import Pose2D
from std_msgs.msg import Float64MultiArray


def normalize_angle(angle: float) -> float:
    return math.atan2(math.sin(angle), math.cos(angle))


class TrajectoryNode(Node):
    def __init__(self):
        super().__init__('trajectory_node')

        self.declare_parameter('cx', float('nan'))
        self.declare_parameter('cy', float('nan'))
        self.declare_parameter('R', 0.30)
        self.declare_parameter('sense', 1.0)
        self.declare_parameter('v', 0.08)
        self.declare_parameter('k', 2.0)
        self.declare_parameter('delta_deg', 25.0)

        self.cx = self.get_parameter('cx').value
        self.cy = self.get_parameter('cy').value
        self.R = float(self.get_parameter('R').value)
        self.sense = 1.0 if float(self.get_parameter('sense').value) >= 0.0 else -1.0
        self.v = float(self.get_parameter('v').value)
        self.k = float(self.get_parameter('k').value)
        self.delta = math.radians(float(self.get_parameter('delta_deg').value))

        self.add_on_set_parameters_callback(self.on_param_change)

        self.prev_phi = None
        self.accum_phi = 0.0
        self.laps = 0

        self.sub_pose = self.create_subscription(Pose2D, '/robot_pose2d', self.pose_callback, 10)
        self.pub_target = self.create_publisher(Pose2D, '/target_point', 10)
        self.pub_state = self.create_publisher(Float64MultiArray, '/circle_state', 10)

    def on_param_change(self, params):
        for p in params:
            if p.name == 'cx':
                self.cx = float(p.value)
            elif p.name == 'cy':
                self.cy = float(p.value)
            elif p.name == 'R':
                self.R = max(0.05, float(p.value))
            elif p.name == 'sense':
                self.sense = 1.0 if float(p.value) >= 0.0 else -1.0
            elif p.name == 'v':
                self.v = float(p.value)
            elif p.name == 'k':
                self.k = float(p.value)
            elif p.name == 'delta_deg':
                self.delta = math.radians(float(p.value))
        return SetParametersResult(successful=True)

    def _init_center_if_needed(self, x: float, y: float, yaw: float):
        # Centro a R à esquerda (sense > 0) ou à direita (sense < 0) da pose inicial
        if math.isnan(self.cx) or math.isnan(self.cy):
            normal_angle = yaw + (math.pi / 2.0) * self.sense
            self.cx = x + self.R * math.cos(normal_angle)
            self.cy = y + self.R * math.sin(normal_angle)
            self.get_logger().info(f'Centro inicial definido automaticamente em ({self.cx:.3f}, {self.cy:.3f})')

    def pose_callback(self, msg: Pose2D):
        self._init_center_if_needed(msg.x, msg.y, msg.theta)

        dx = msg.x - self.cx
        dy = msg.y - self.cy
        dist_center = math.hypot(dx, dy)

        # Evita singularidade 0/0 caso o robô esteja exatamente no centro
        if dist_center < 1e-4:
            self.get_logger().warn('Robô próximo do centro do círculo; phi indefinido.')
            phi = 0.0
        else:
            phi = math.atan2(dy, dx)

        # Contagem de voltas acumulando variação contínua de phi
        if self.prev_phi is not None:
            d_phi = normalize_angle(phi - self.prev_phi)
            self.accum_phi += d_phi
            if abs(self.accum_phi) >= 2.0 * math.pi:
                self.laps += 1
                self.accum_phi -= math.copysign(2.0 * math.pi, self.accum_phi)
                self.get_logger().info(f'Volta concluída! Total de voltas: {self.laps}')
        self.prev_phi = phi

        phi_target = phi + self.sense * self.delta

        target_msg = Pose2D()
        target_msg.x = float(self.cx + self.R * math.cos(phi_target))
        target_msg.y = float(self.cy + self.R * math.sin(phi_target))
        target_msg.theta = float(phi_target)
        self.pub_target.publish(target_msg)

        state_msg = Float64MultiArray()
        state_msg.data = [float(phi), float(self.laps), float(self.v), float(self.k), float(self.sense)]
        self.pub_state.publish(state_msg)


def main(args=None):
    rclpy.init(args=args)
    node = TrajectoryNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()