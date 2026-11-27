import math
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from geometry_msgs.msg import Vector3, Twist
from std_msgs.msg import Float64MultiArray


class ControlNode(Node):
    def __init__(self):
        super().__init__('control_node')
        self.declare_parameter('max_omega', 2.5)
        self.max_omega = float(self.get_parameter('max_omega').value)
        self.add_on_set_parameters_callback(self.on_param_change)

        self.v = 0.08
        self.k = 1.0
        self.R = 0.30
        self.delta = math.radians(45.0)
        self.sense = 1.0
        self.have_state = False

        self.sub_error = self.create_subscription(Vector3, '/tracking_error', self.error_callback, 10)
        self.sub_state = self.create_subscription(Float64MultiArray, '/circle_state', self.state_callback, 10)
        self.pub_cmd = self.create_publisher(Twist, '/cmd_vel', 10)

    def on_param_change(self, params):
        for p in params:
            if p.name == 'max_omega':
                self.max_omega = abs(float(p.value))
        return SetParametersResult(successful=True)

    def state_callback(self, msg: Float64MultiArray):
        # [phi, voltas, v, k, sense, R, delta]
        if len(msg.data) >= 7:
            self.v = float(msg.data[2])
            self.k = float(msg.data[3])
            self.sense = float(msg.data[4])
            self.R = max(0.05, float(msg.data[5]))
            self.delta = float(msg.data[6])
            self.have_state = True

    def error_callback(self, msg: Vector3):
        if not self.have_state:
            return
        alpha_e = float(msg.y)

        # Sobre o círculo, o alvo (delta à frente) fica a alpha_ref = sense*delta/2
        # da direção do robô (ângulo tangente-corda). Só o DESVIO disso é erro.
        alpha_ref = self.sense * self.delta / 2.0
        alpha_dev = math.atan2(math.sin(alpha_e - alpha_ref), math.cos(alpha_e - alpha_ref))

        # Feedforward: curvatura do círculo (omega = v/R) + correção proporcional ao desvio.
        # Sem o feedforward, k alto era necessário só para manter a curva => oscilação.
        omega = self.sense * self.v / self.R + self.k * alpha_dev
        omega = max(-self.max_omega, min(self.max_omega, omega))

        cmd = Twist()
        cmd.linear.x = float(self.v)
        cmd.angular.z = float(omega)
        self.pub_cmd.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = ControlNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()