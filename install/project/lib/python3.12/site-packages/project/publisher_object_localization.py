import rclpy
import math
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Point  # <-- Importa Point

SCAN_TOPIC = '/proximity/laser'
TIMER_PERIOD = 0.5  # seconds

PARAM_INFO = {
    'saturation_intensity': (4600.0, 'Intensity from which the sensor is considered saturated', 0.0, 5000.0),
}

class ObjectSensor:

    def __init__(self):
        self.object_distance = None
        self.object_angle = None

    def update(self, scan: LaserScan, saturation_intensity: float):
        weighted_x_sum = 0.0
        weighted_y_sum = 0.0
        total_intensity = 0.0

        for index, (distance, intensity) in enumerate(zip(scan.ranges, scan.intensities)):
            if intensity == 0:
                continue
            if intensity >= saturation_intensity:
                distance = scan.range_min
            sensor_angle = scan.angle_min + index * scan.angle_increment
            weighted_x_sum += intensity * distance * math.cos(sensor_angle)
            weighted_y_sum += intensity * distance * math.sin(sensor_angle)
            total_intensity += intensity

        if total_intensity == 0:
            self.object_distance = None
            self.object_angle = None
        else:
            object_x = weighted_x_sum / total_intensity
            object_y = weighted_y_sum / total_intensity
            self.object_distance = math.hypot(object_x, object_y)
            self.object_angle = math.atan2(object_y, object_x)


class ObjectLocalization(Node):

    def __init__(self):
        super().__init__('object_localization')
        # Publica no tópico 'object_position' usando geometry_msgs/Point
        self.publisher_ = self.create_publisher(Point, 'object_position', 10)
        self.timer = self.create_timer(TIMER_PERIOD, self.timer_callback)
        self.scan_sub = self.create_subscription(LaserScan, SCAN_TOPIC, self.scan_callback, 10)

        default_sat = PARAM_INFO['saturation_intensity'][0]
        self.declare_parameter('saturation_intensity', default_sat)

        self.sensor = ObjectSensor()

    def scan_callback(self, msg: LaserScan):
        sat_intensity = self.get_parameter('saturation_intensity').value
        self.sensor.update(msg, sat_intensity)

    def timer_callback(self):
        msg = Point()

        if self.sensor.object_distance is None or self.sensor.object_angle is None:
            msg.x = -1.0  # Convenção: -1.0 indica nenhum objeto detectado
            msg.y = 0.0
            msg.z = 0.0
        else:
            msg.x = float(self.sensor.object_distance)  # Distância em metros
            msg.y = float(self.sensor.object_angle)     # Ângulo em radianos
            msg.z = 0.0

        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing -> Distance (x): {msg.x:.3f} m | Angle (y): {msg.y:.3f} rad')


def main(args=None):
    rclpy.init(args=args)
    node = ObjectLocalization()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()