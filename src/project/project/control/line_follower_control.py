import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import FloatingPointRange, ParameterDescriptor
from geometry_msgs.msg import Twist          # OUTPUT message: velocity command
from project_msgs.msg import LineError       # INPUT message: error and line_detected

ERROR_TOPIC = '/line_error'
CMD_VEL_TOPIC = '/cmd_vel'
CONTROL_PERIOD = 0.1    # fallback dt (s) and period of the watchdog check (s)
MESSAGE_TIMEOUT = 1.0   # stops the robot if no error message arrives for this long (s)
I_LIMIT = 1.0           # limit of the integral term (anti-windup)
LOG_PERIOD = 0.5        # seconds between the explanatory messages in the terminal (0.0 = every message)

# Parameters that can be changed while the robot is running
# name: (default value, description, lowest value, highest value)
# Refuses any value outside the limits
PARAM_INFO = {
    'kp':                (0.8, 'Proportional gain (rad/s of turn per unit of error)', 0.0, 5.0),
    'ki':                (0.0, 'Integral gain (0.0 = no integral term)', 0.0, 1.0),
    'kd':                (0.0, 'Derivative gain (0.0 = no derivative term)', 0.0, 2.0),
    'forward_speed':     (0.3, 'Linear speed with the line centered (m/s)', 0.0, 0.5),
    'turn_linear_speed': (0.5, 'Linear speed when the error is maximum (m/s)', 0.0, 0.5),
}


class LineControlNode(Node):

    def __init__(self):
        super().__init__('line_control')

        # Declares the parameters with description and limits
        # One loop declares all of them, using the PARAM_INFO table
        for name, (default, description, low, high) in PARAM_INFO.items():
            self.declare_parameter(
                name,
                default,
                ParameterDescriptor(
                    description=description,
                    floating_point_range=[FloatingPointRange(from_value=low, to_value=high, step=0.0)]
                )
            )

        # Publishes to the robot velocity topic
        self.cmd_vel_pub = self.create_publisher(Twist, CMD_VEL_TOPIC, 10)

        # Subscription to the error computed by the error node
        self.error_sub = self.create_subscription(LineError, ERROR_TOPIC, self.error_callback, 10)

        # Stores the last direction in function of line detection
        # 1 = line was last seen on the left | -1 = on the right | 0 = unknown
        self.last_direction = 0

        # Errors smaller than this are ignored when remembering the last direction
        self.direction_deadband = 0.1

        # Moment when the line was lost (None while the line is visible)
        self.line_lost_time = None

        # Time going straight after losing the line, before starting to search (s)
        self.search_delay = 0.5

        # Rotation speed while searching for the line (rad/s)
        self.search_speed = 0.8

        # State of the PID
        self.integral = 0.0
        self.previous_error = None
        self.last_control_time = self.get_clock().now()

        # Moment of the last error message (used by the watchdog)
        self.last_message_time = self.get_clock().now()

        # Watchdog: stops the robot if the error messages stop arriving
        self.timer = self.create_timer(CONTROL_PERIOD, self.watchdog)

        self.get_logger().info(
            f'line_control started | receives error and line_detected on {ERROR_TOPIC} | '
            f'publishes linear.x and angular.z on {CMD_VEL_TOPIC}')

    def param(self, name):
        """Returns the current value of a parameter (always up to date)"""
        # Reading the parameter every time is what makes changes take effect immediately
        return self.get_parameter(name).value

    def error_callback(self, msg: LineError):
        """Runs every time a new error arrives: computes and publishes the command"""
        now = self.get_clock().now()
        self.last_message_time = now

        # At least one sensor sees the line -> PID control
        if msg.line_detected:
            cmd = self.follow_line(msg.error, now)
        # No sensor sees the line -> search
        else:
            self.reset_pid()
            cmd = self.search_line()

        # Publishes the command
        self.cmd_vel_pub.publish(cmd)

    def reset_pid(self):
        """Forgets the accumulated error (used when the line is lost)"""
        self.integral = 0.0
        self.previous_error = None

    def pid(self, error, now):
        """PID of the angular velocity. Returns (output, p_term, i_term, d_term)"""
        # Difference in time, in seconds
        dt = (now - self.last_control_time).nanoseconds / 1e9
        self.last_control_time = now

        # First sample after a reset (or invalid dt): uses the nominal period
        if self.previous_error is None or dt <= 0.0:
            dt = CONTROL_PERIOD

        # Integral term, with a limit so it cannot grow without bound
        self.integral = max(-I_LIMIT, min(I_LIMIT, self.integral + error * dt))

        if self.previous_error is None:
            derivative = 0.0    # avoids a spike on the first sample
        else:
            derivative = (error - self.previous_error) / dt
        self.previous_error = error

        p_term = self.param('kp') * error
        i_term = self.param('ki') * self.integral
        d_term = self.param('kd') * derivative
        return p_term + i_term + d_term, p_term, i_term, d_term

    def follow_line(self, error, now):
        """PID control: the bigger the error, the stronger the turn"""
        cmd = Twist()

        # The line is visible, so the "line lost" timer is reset
        self.line_lost_time = None
        # Remembers on which side the line is (ignores very small errors)
        if abs(error) > self.direction_deadband:
            self.last_direction = 1 if error > 0 else -1

        forward = self.param('forward_speed')
        turn = self.param('turn_linear_speed')

        # PID: turn speed from the error (with ki = kd = 0 this is only the P term)
        cmd.angular.z, p_term, i_term, d_term = self.pid(error, now)
        # The bigger the error, the slower the robot (forward_speed -> turn_linear_speed)
        cmd.linear.x = forward - (forward - turn) * abs(error)

        # Explanatory message in the terminal
        if cmd.angular.z > 0.01:
            turning = 'turning LEFT'
        elif cmd.angular.z < -0.01:
            turning = 'turning RIGHT'
        else:
            turning = 'going STRAIGHT'
        self.get_logger().info(
            f'RECEIVED error={error:+.2f} line_detected=True | '
            f'PID: P={p_term:+.3f} I={i_term:+.3f} D={d_term:+.3f} -> angular.z={cmd.angular.z:+.3f} rad/s | '
            f'linear.x={cmd.linear.x:.3f} m/s | PUBLISHED {CMD_VEL_TOPIC}: {turning}',
            throttle_duration_sec=LOG_PERIOD)

        return cmd

    def search_line(self):
        """No sensor over the line: keeps moving forward for a while, then searches"""
        cmd = Twist()

        # First moment when the line is lost: starts the timer
        if self.line_lost_time is None:
            self.line_lost_time = self.get_clock().now()

        # How long the line has been lost (s)
        elapsed_time = (self.get_clock().now() - self.line_lost_time).nanoseconds / 1e9

        # Not enough time has passed: continue moving forward
        if elapsed_time < self.search_delay:
            cmd.linear.x = self.param('forward_speed')
            self.get_logger().info(
                f'RECEIVED line_detected=False | line lost for {elapsed_time:.2f} s '
                f'(less than {self.search_delay} s) | PUBLISHED {CMD_VEL_TOPIC}: '
                f'going straight at linear.x={cmd.linear.x:.3f} m/s',
                throttle_duration_sec=LOG_PERIOD)
        # Enough time has passed: rotate towards the side where the line was last seen
        # (last_direction is 0 if unknown, so the robot stays stopped)
        else:
            cmd.angular.z = self.search_speed * self.last_direction
            side = {1: 'LEFT', -1: 'RIGHT', 0: 'unknown (staying stopped)'}[self.last_direction]
            self.get_logger().info(
                f'RECEIVED line_detected=False | line lost for {elapsed_time:.2f} s | '
                f'PUBLISHED {CMD_VEL_TOPIC}: searching, angular.z={cmd.angular.z:+.3f} rad/s | '
                f'line was last seen on the {side}',
                throttle_duration_sec=LOG_PERIOD)

        return cmd

    def watchdog(self):
        """The driver keeps the last velocity, so stop the robot if the error stops arriving"""
        elapsed = (self.get_clock().now() - self.last_message_time).nanoseconds / 1e9
        if elapsed > MESSAGE_TIMEOUT:
            self.reset_pid()
            self.cmd_vel_pub.publish(Twist())
            self.get_logger().warn(
                f'No message on {ERROR_TOPIC} for {elapsed:.1f} s | '
                f'PUBLISHED {CMD_VEL_TOPIC}: zero velocity (robot stopped)',
                throttle_duration_sec=LOG_PERIOD)


def main(args=None):
    rclpy.init(args=args)
    node = LineControlNode()
    try:
        rclpy.spin(node)        # Keeps the node running until Ctrl+C
    except KeyboardInterrupt:
        pass
    finally:
        node.cmd_vel_pub.publish(Twist())    # stops the robot when the node is closed
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()