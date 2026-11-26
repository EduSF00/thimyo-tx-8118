import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from project_msgs.msg import Error
from rcl_interfaces.msg import FloatingPointRange, ParameterDescriptor

ERROR_TOPIC = '/error'
CMD_VEL_TOPIC = 'cmd_vel'
NO_OBJECT = -1.0        # convention of the trajectory node: error_linear = -1.0 -> nothing detected
CONTROL_PERIOD = 0.1    # fallback dt (s) and period of the watchdog check (s)
MESSAGE_TIMEOUT = 1.0   # stops the robot if no error message arrives for this long (s)

# name: (default value, description, lowest value, highest value)
PARAM_INFO = {
    'linear_speed_max': (1.0, 'Maximum linear speed, forward or backward (m/s)', 0.0, 1.0),
    'K_prop':           (5.0, 'Proportional gain of the linear velocity', 0.0, 20.0),
    'K_deriv':          (0.3, 'Derivative gain of the linear velocity', 0.0, 2.0),
    'K_angle':          (1.0, 'Gain of the angular velocity', 0.0, 5.0),
    'K_prop_angular':   (3.0, 'Extra proportional gain of the angular velocity', 0.0, 10.0),
}


class Control(Node):
    """Controller block: reads the error (distance, angle) and publishes the velocity command.

    Input  (/error, project_msgs/Error):   error_linear (m) | error_angular (rad) | sin and cos of the angle error
    Output (cmd_vel, geometry_msgs/Twist): linear.x (PD on the distance) and angular.z (P on the angle)
    """

    def __init__(self):
        super().__init__('control')

        # declare parameters with description and limits (PARAM_INFO table)
        for name, (default, description, low, high) in PARAM_INFO.items():
            self.declare_parameter(
                name,
                default,
                ParameterDescriptor(
                    description=description,
                    floating_point_range=[FloatingPointRange(from_value=low, to_value=high, step=0.0)]
                )
            )

        # to use in derivative control
        self.last_control_time = self.get_clock().now()
        self.previous_error = None

        # moment of the last error message (used by the watchdog)
        self.last_message_time = self.get_clock().now()

        self.cmd_pub = self.create_publisher(Twist, CMD_VEL_TOPIC, 10)
        self.error_sub = self.create_subscription(Error, ERROR_TOPIC, self.error_callback, 10)

        # watchdog: stops the robot if the error messages stop arriving
        self.timer = self.create_timer(CONTROL_PERIOD, self.watchdog)

    def param(self, name):
        """Returns the current value of a parameter (always updated)."""
        return self.get_parameter(name).value

    def error_callback(self, msg: Error):
        """Runs every time a new error arrives: computes and publishes the command."""
        now = self.get_clock().now()
        self.last_message_time = now

        cmd = Twist()
        if msg.error_linear <= NO_OBJECT:
            self.previous_error = None    # avoids a spike in the derivative when the object reappears
        else:
            cmd.linear.x = self.control_prop_deriv(msg.error_linear, now)
            # error_angular = atan2(sin, cos) of the angle error, already between -pi and pi
            cmd.angular.z = self.param('K_angle') * msg.error_angular * self.param('K_prop_angular')
        self.cmd_pub.publish(cmd)

    def control_prop_deriv(self, error, now):
        """PD control of the distance: error = real distance - target distance."""

        # Difference in time for derivative control
        dt = (now - self.last_control_time).nanoseconds / 1e9 #dt -> delta time in seconds
        self.last_control_time = now

        if dt <= 0.0: #avoid division by zero or negative time intervals
            dt = CONTROL_PERIOD

        if self.previous_error is None:
            derivative = 0.0 #avoid division by zero on the first iteration

        else:
            derivative = (error - self.previous_error) / dt
        self.previous_error = error

        linear_vel = self.param('K_prop') * error + self.param('K_deriv') * derivative

        # saturation: limits between maximum reverse and maximum forward speed
        return max(-self.param('linear_speed_max'), min(self.param('linear_speed_max'), linear_vel))

    def watchdog(self):
        """The driver keeps the last velocity, so stop the robot if the error stops arriving."""
        elapsed = (self.get_clock().now() - self.last_message_time).nanoseconds / 1e9
        if elapsed > MESSAGE_TIMEOUT:
            self.previous_error = None
            self.cmd_pub.publish(Twist())


def main(args=None):
    rclpy.init(args=args)
    node = Control()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.cmd_pub.publish(Twist())    # stops the robot when the node is closed
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()