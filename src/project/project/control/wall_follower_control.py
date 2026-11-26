import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from project_msgs.msg import Error


class PIDController:
    def __init__(self, kp: float, ki: float, kd: float, min_out: float, max_out: float):
        self.kp = kp
        self.ki = ki
        self.kd = kd
        self.min_out = min_out
        self.max_out = max_out
        self.integral = 0.0
        self.prev_error = None

    def reset(self):
        self.integral = 0.0
        self.prev_error = None

    def compute(self, error: float, dt: float) -> float:
        if dt <= 0.0:
            return 0.0

        # Termo proporcional
        p_term = self.kp * error

        # Termo integral com anti-windup simples por saturação
        self.integral += error * dt
        max_i = abs(self.max_out) if self.max_out != 0.0 else 1.0
        self.integral = max(-max_i, min(max_i, self.integral))
        i_term = self.ki * self.integral

        # Termo derivativo
        if self.prev_error is None:
            d_term = 0.0
        else:
            d_term = self.kd * ((error - self.prev_error) / dt)

        self.prev_error = error

        output = p_term + i_term + d_term
        return max(self.min_out, min(self.max_out, output))


class WallFollowerPIDNode(Node):
    def __init__(self):
        super().__init__('wall_follower_pid')

        # Tópicos configuráveis
        self.declare_parameter('error_topic', '/error')
        
        self.declare_parameter('base_linear_speed', 0.08)
        self.declare_parameter('near_zero_tol', 0.03)

        # Ganhos PID linear (controla distância até a parede via error_linear)
        self.declare_parameter('lin_kp', 2.0)
        self.declare_parameter('lin_ki', 0.05)
        self.declare_parameter('lin_kd', 0.08)
        self.declare_parameter('lin_min', -0.05)
        self.declare_parameter('lin_max', 0.10)

        # Ganhos PID angular (mantém orientação paralela à parede)
        self.declare_parameter('ang_kp', 2.0)
        self.declare_parameter('ang_ki', 0.0)
        self.declare_parameter('ang_kd', 0.2)
        self.declare_parameter('ang_min', -1.5)
        self.declare_parameter('ang_max', 1.5)

        error_topic = str(self.get_parameter('error_topic').value)

        self.lin_pid = PIDController(
            kp=float(self.get_parameter('lin_kp').value),
            ki=float(self.get_parameter('lin_ki').value),
            kd=float(self.get_parameter('lin_kd').value),
            min_out=float(self.get_parameter('lin_min').value),
            max_out=float(self.get_parameter('lin_max').value),
        )

        self.ang_pid = PIDController(
            kp=float(self.get_parameter('ang_kp').value),
            ki=float(self.get_parameter('ang_ki').value),
            kd=float(self.get_parameter('ang_kd').value),
            min_out=float(self.get_parameter('ang_min').value),
            max_out=float(self.get_parameter('ang_max').value),
        )

        self.last_time = self.get_clock().now()
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.error_sub = self.create_subscription(
            Error,
            error_topic,
            self.error_callback,
            10,
        )

    def error_callback(self, msg: Error):
        now = self.get_clock().now()
        dt = (now - self.last_time).nanoseconds * 1e-9
        self.last_time = now
        if dt <= 0.0:
            dt = 0.01

        cmd = Twist()
        if msg.error_linear != -1.0:
            err_lin = float(msg.error_linear)
            base_speed = float(self.get_parameter('base_linear_speed').value)
            tol = float(self.get_parameter('near_zero_tol').value)
            lin_min = float(self.get_parameter('lin_min').value)
            lin_max = float(self.get_parameter('lin_max').value)

            pid_lin = self.lin_pid.compute(err_lin, dt)

            if tol > 0.0 and abs(err_lin) < tol:
                alpha = 1.0 - (abs(err_lin) / tol)
                lin_vel = (1.0 - alpha) * pid_lin + alpha * base_speed
            else:
                lin_vel = pid_lin

            cmd.linear.x = max(lin_min, min(lin_max, float(lin_vel)))


            ang_err = math.atan2(
                float(msg.error_angular_sen),
                float(msg.error_angular_cos),
                )


            cmd.angular.z = float(self.ang_pid.compute(ang_err, dt))
        else:
            self.lin_pid.reset()
            self.ang_pid.reset()
            cmd.linear.x = 0.0
            cmd.angular.z = -0.3

        self.cmd_pub.publish(cmd)


     
def main(args=None):
    rclpy.init(args=args)
    node = WallFollowerPIDNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()