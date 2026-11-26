import math
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Pose2D


def quaternion_to_yaw(qx: float, qy: float, qz: float, qw: float) -> float:
    siny_cosp = 2.0 * (qw * qz + qx * qy)
    cosy_cosp = 1.0 - 2.0 * (qy * qy + qz * qz)
    return math.atan2(siny_cosp, cosy_cosp)


class SensorNode(Node):
    def __init__(self):
        super().__init__('sensor_node')
        self.sub_odom = self.create_subscription(Odometry, '/odom', self.odom_callback, 10)
        self.pub_pose = self.create_publisher(Pose2D, '/robot_pose2d', 10)

    def odom_callback(self, msg: Odometry):
        q = msg.pose.pose.orientation
        yaw = quaternion_to_yaw(q.x, q.y, q.z, q.w)

        pose_msg = Pose2D()
        pose_msg.x = float(msg.pose.pose.position.x)
        pose_msg.y = float(msg.pose.pose.position.y)
        pose_msg.theta = float(yaw)
        self.pub_pose.publish(pose_msg)


def main(args=None):
    rclpy.init(args=args)
    node = SensorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()