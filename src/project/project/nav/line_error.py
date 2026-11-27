import rclpy
from rclpy.node import Node
from project_msgs.msg import LineSensors, LineError   # INPUT: LineSensors | OUTPUT: LineError

SENSORS_TOPIC = '/line_sensors'
ERROR_TOPIC = '/line_error'
LINE_REFERENCE = 0.0    # desired position of the line: 0.0 = centered
LOG_PERIOD = 0.5        # seconds between the explanatory messages in the terminal (0.0 = every message)


class LineErrorNode(Node):

    def __init__(self):
        super().__init__('line_error')

        self.publisher_ = self.create_publisher(LineError, ERROR_TOPIC, 10)
        self.sensors_sub = self.create_subscription(
            LineSensors, SENSORS_TOPIC, self.sensors_callback, 10)

        self.get_logger().info(
            f'line_error started | receives the line position on {SENSORS_TOPIC} | '
            f'publishes error = position - {LINE_REFERENCE} on {ERROR_TOPIC}')

    def sensors_callback(self, msg: LineSensors):
        """Runs every time a new sensor reading arrives: computes and publishes the error"""
        out_msg = LineError()
        out_msg.header = msg.header

        # Error = real value - desired value
        # positive = line on the left | negative = line on the right | 0 = centered
        out_msg.error = float(msg.line_position) - LINE_REFERENCE
        out_msg.line_detected = msg.line_detected

        self.publisher_.publish(out_msg)

        # Explanatory message in the terminal
        self.get_logger().info(
            f'RECEIVED line_position={msg.line_position:+.2f} line_detected={msg.line_detected} | '
            f'error = {msg.line_position:+.2f} - {LINE_REFERENCE:.2f} = {out_msg.error:+.2f} | '
            f'PUBLISHED {ERROR_TOPIC}: error={out_msg.error:+.2f} line_detected={out_msg.line_detected}',
            throttle_duration_sec=LOG_PERIOD)


def main(args=None):
    rclpy.init(args=args)
    node = LineErrorNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
