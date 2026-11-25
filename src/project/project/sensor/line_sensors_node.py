"""
NODE: line_sensors

WHAT IT IMPORTS (receives)
  Topic  : /aseba/events/ground_reflected
  Type   : asebaros_msgs/msg/Event
  Format : data = [left, right, ...]
           raw infrared reflection of the ground sensors, from 0 to 1023 (lower value = darker surface)
  Use    : data[0] (left sensor) and data[1] (right sensor) are converted to a darkness level.
           Any other item of the list is ignored.

WHAT IT EXPORTS (publishes)
  Topic  : /line_sensors
  Type   : project_msgs/msg/LineSensors
  Format : header         -> time of the reading
           left_darkness  -> 0.0 (floor) ... 1.0 (line)
           right_darkness -> 0.0 (floor) ... 1.0 (line)
           line_position  -> left_darkness - right_darkness (positive = line on the left,
                             negative = line on the right, 0 = centered)
           line_detected  -> True if at least one sensor sees the line

PARAMETERS (can be changed while the robot is running)
  ros2 param set /line_sensors line_value 250.0     raw reading over the line
  ros2 param set /line_sensors floor_value 950.0    raw reading over the floor
  ros2 param set /line_sensors lost_level 0.3       darkness below which the line counts as lost
"""

import rclpy
from rclpy.node import Node

# FloatingPointRange / ParameterDescriptor: describe a parameter and its limits
# SetParametersResult: the answer ("accepted" or "rejected") of the parameter callback
from rcl_interfaces.msg import FloatingPointRange, ParameterDescriptor, SetParametersResult
from asebaros_msgs.msg import Event          # INPUT message: raw readings of the Thymio sensors
from project_msgs.msg import LineSensors     # OUTPUT message: darkness, line position and detection

GROUND_TOPIC = '/aseba/events/ground_reflected'
SENSORS_TOPIC = '/line_sensors'
LOG_PERIOD = 0.5    # seconds between the explanatory messages in the terminal (0.0 = every message)

# Parameters that can be changed while the robot is running
# name: (default value, description, lowest value, highest value)
# Refuses any value outside the limits
PARAM_INFO = {
    'line_value':  (250.0, 'Raw sensor reading over the line', 0.0, 1023.0),
    'floor_value': (950.0, 'Raw sensor reading over the floor', 0.0, 1023.0),
    'lost_level':  (0.3,   'Darkness (0 to 1) below which the line is considered lost', 0.0, 1.0),
}


class LineSensorsNode(Node):

    def __init__(self):
        super().__init__('line_sensors')

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

        # Called every time someone runs: ros2 param set /line_sensors <name> <value>
        self.add_on_set_parameters_callback(self.parameters_callback)

        self.publisher_ = self.create_publisher(LineSensors, SENSORS_TOPIC, 10)
        self.ground_sub = self.create_subscription(Event, GROUND_TOPIC, self.ground_callback, 10)

        self.get_logger().info(
            f'line_sensors started | receives raw ground readings on {GROUND_TOPIC} | '
            f'publishes darkness and line position on {SENSORS_TOPIC}')

    def param(self, name):
        """Returns the current value of a parameter (always up to date)"""
        # Reading the parameter every time is what makes changes take effect immediately
        return self.get_parameter(name).value

    def parameters_callback(self, changes):
        # Uses the new value if it is being changed now, otherwise the current one
        values = {c.name: c.value for c in changes}
        line = values.get('line_value', self.param('line_value'))
        floor = values.get('floor_value', self.param('floor_value'))

        # Equal values would make the normalization divide by zero
        if line == floor:
            reason = 'line_value and floor_value cannot be equal'
            self.get_logger().warn(f'Parameter rejected: {reason}')
            return SetParametersResult(successful=False, reason=reason)

        return SetParametersResult(successful=True)

    def calculate_darkness(self, raw, line, floor):
        """Converts a raw reading to 0.0 (floor) ... 1.0 (line)"""
        # Linear scale: raw == floor gives 0.0, raw == line gives 1.0
        # It also works when the line is lighter than the floor (line > floor)
        value = (floor - raw) / (floor - line)
        # Keeps the result between 0.0 and 1.0 (readings outside the range are clipped)
        return max(0.0, min(1.0, value))

    def ground_callback(self, msg: Event):
        """Runs every time a new reading arrives (about 10 times per second)"""
        # data[0] = left sensor, data[1] = right sensor
        if len(msg.data) < 2:
            return
        left_raw = float(msg.data[0])
        right_raw = float(msg.data[1])

        # Reads the calibration parameters (they can change while the robot runs)
        line_val = self.param('line_value')
        floor_val = self.param('floor_value')

        # Converts each raw reading to 0.0 (floor) ... 1.0 (line)
        left_dark = self.calculate_darkness(left_raw, line_val, floor_val)
        right_dark = self.calculate_darkness(right_raw, line_val, floor_val)

        out_msg = LineSensors()
        out_msg.header.stamp = self.get_clock().now().to_msg()
        out_msg.header.frame_id = 'base_link'
        out_msg.left_darkness = float(left_dark)
        out_msg.right_darkness = float(right_dark)
        # Position of the line: positive = line on the left | negative = line on the right | 0 = centered
        out_msg.line_position = float(left_dark - right_dark)
        # At least one sensor sees the line
        out_msg.line_detected = bool(max(left_dark, right_dark) >= self.param('lost_level'))

        self.publisher_.publish(out_msg)

        # Explanatory message in the terminal
        if not out_msg.line_detected:
            meaning = 'no sensor sees the line'
        elif out_msg.line_position > 0.1:
            meaning = 'line is on the LEFT'
        elif out_msg.line_position < -0.1:
            meaning = 'line is on the RIGHT'
        else:
            meaning = 'line is CENTERED'
        self.get_logger().info(
            f'RECEIVED raw left={left_raw:.0f} right={right_raw:.0f} (0..1023, lower = darker) | '
            f'darkness left={left_dark:.2f} right={right_dark:.2f} (0 = floor, 1 = line) | '
            f'PUBLISHED {SENSORS_TOPIC}: line_position={out_msg.line_position:+.2f} '
            f'line_detected={out_msg.line_detected} -> {meaning}',
            throttle_duration_sec=LOG_PERIOD)


def main(args=None):
    rclpy.init(args=args)
    node = LineSensorsNode()
    try:
        rclpy.spin(node)        # Keeps the node running until Ctrl+C
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
