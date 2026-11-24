import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point

POSITION_TOPIC = '/object_position'

PARAM_INFO = {
    'distance_target': (0.14, 'Target distance to the object (m), in laser reference', 0.0, 0.3),
    'angle_target':    (0.0,  'Target angle to the object (rad), in laser reference', -3.14, 3.14),
}


class Trajectory(Node):

    def __init__(self):
        super().__init__('trajectory')
        self.publisher_ = self.create_publisher(Point, 'error', 10)
        self.position_sub = self.create_subscription(
            Point,
            POSITION_TOPIC,
            self.position_callback,
            10
        )

        self.declare_parameter('distance_target', PARAM_INFO['distance_target'][0])
        self.declare_parameter('angle_target', PARAM_INFO['angle_target'][0])

    def position_callback(self, msg: Point):
        out_msg = Point()

        # Verifica a convenção x = -1.0 enviada pelo ObjectLocalization
        if msg.x < 0.0:
            out_msg.x = -1.0  # Nenhum objeto detectado
            out_msg.y = 0.0
            out_msg.z = 0.0
            self.publisher_.publish(out_msg)
            self.get_logger().info('Nenhum objeto detectado -> Error: -1.0')
            return

        distance_target = self.get_parameter('distance_target').value
        angle_target = self.get_parameter('angle_target').value

        # Erro = valor atual - valor desejado
        # Se distance > 0.14m -> erro positivo (precisa avançar)
        # Se angle > 0.0rad    -> erro positivo (objeto à esquerda, precisa girar à esquerda)
        error_distance = msg.x - distance_target
        error_angle = msg.y - angle_target

        out_msg.x = float(error_distance)
        out_msg.y = float(error_angle)
        out_msg.z = 0.0

        self.publisher_.publish(out_msg)
        self.get_logger().info(
            f'Erro publicado -> Distância: {error_distance:.3f} m | Ângulo: {error_angle:.3f} rad'
        )


def main(args=None):
    rclpy.init(args=args)
    node = Trajectory()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()