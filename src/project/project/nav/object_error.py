import math
import rclpy
from rclpy.node import Node
from project_msgs.msg import LocalizationObject, Error

POSITION_TOPIC = '/object_position'

PARAM_INFO = {
    'distance_target': (0.12, 'Target distance to the object (m), in laser reference', 0.0, 0.3),
    'angle_target':    (0.0,  'Target angle to the object (rad), in laser reference', -3.14, 3.14),
}


class Trajectory(Node):

    def __init__(self):
        super().__init__('trajectory')
        self.publisher_ = self.create_publisher(Error, 'error', 10)
        self.position_sub = self.create_subscription(
            LocalizationObject,
            POSITION_TOPIC,
            self.position_callback,
            10
        )

        self.declare_parameter('distance_target', PARAM_INFO['distance_target'][0])
        self.declare_parameter('angle_target', PARAM_INFO['angle_target'][0])

    def position_callback(self, msg: LocalizationObject):
        out_msg = Error()
        out_msg.header.stamp = self.get_clock().now().to_msg()
        out_msg.header.frame_id = msg.header.frame_id

        # Verifica a convenção distance_linear < 0.0 (-1.0) enviada pelo ObjectLocalization
        if msg.distance_linear < 0.0:
            out_msg.error_linear = -1.0
            out_msg.error_angular_sen = 0.0
            out_msg.error_angular_cos = 0.0
            out_msg.error_angular = 0.0
            self.publisher_.publish(out_msg)
            return

        distance_target = float(self.get_parameter('distance_target').value)
        angle_target = float(self.get_parameter('angle_target').value)

        # Erro = valor atual - valor desejado
        error_linear = float(msg.distance_linear) - distance_target
         
        cos_target = math.cos(angle_target)
        sen_target = math.sin(angle_target)

        cos_error = float(msg.cos_angular) * cos_target + float(msg.sen_angular) * sen_target
        sen_error = float(msg.sen_angular) * cos_target - float(msg.cos_angular) * sen_target

        out_msg.error_linear = error_linear
        out_msg.error_angular_sen = sen_error
        out_msg.error_angular_cos = cos_error
        out_msg.error_angular = math.atan2(sen_error, cos_error)

        self.publisher_.publish(out_msg)



def main(args=None):
    rclpy.init(args=args)
    node = Trajectory()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()