import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose2D, Vector3


class ErrorNode(Node):
    def __init__(self):
        super().__init__('error_node')
        self.current_pose = None
        self.target_point = None

        self.sub_pose = self.create_subscription(Pose2D, '/robot_pose2d', self.pose_callback, 10)
        self.sub_target = self.create_subscription(Pose2D, '/target_point', self.target_callback, 10)
        self.pub_error = self.create_publisher(Vector3, '/tracking_error', 10)

    def pose_callback(self, msg: Pose2D):
        self.current_pose = msg
        self._compute_and_publish()

    def target_callback(self, msg: Pose2D):
        self.target_point = msg
        self._compute_and_publish()

    def _compute_and_publish(self):
        if self.current_pose is None or self.target_point is None:
            return

        ex = self.target_point.x - self.current_pose.x
        ey = self.target_point.y - self.current_pose.y
        dist_error = math.hypot(ex, ey)

        bearing_to_target = math.atan2(ey, ex)
        angle_diff = bearing_to_target - self.current_pose.theta

        # Normalização via atan2(sin, cos) evita o unwinding effect
        cos_err = math.cos(angle_diff)
        sin_err = math.sin(angle_diff)
        alpha_e = math.atan2(sin_err, cos_err)

        err_msg = Vector3()
        err_msg.x = float(dist_error)
        err_msg.y = float(alpha_e)
        err_msg.z = float(bearing_to_target)
        self.pub_error.publish(err_msg)


def main(args=None):
    rclpy.init(args=args)
    node = ErrorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()