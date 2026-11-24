import math
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from project_msgs.msg import LocalizationObject

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
        # Publica no tópico 'object_position' usando project_msgs/LocalizationObject
        self.publisher_ = self.create_publisher(LocalizationObject, 'object_position', 10)
        self.timer = self.create_timer(TIMER_PERIOD, self.timer_callback)
        self.scan_sub = self.create_subscription(LaserScan, SCAN_TOPIC, self.scan_callback, 10)

        default_sat = PARAM_INFO['saturation_intensity'][0]
        self.declare_parameter('saturation_intensity', default_sat)

        self.sensor = ObjectSensor()

    def scan_callback(self, msg: LaserScan):
        sat_intensity = self.get_parameter('saturation_intensity').value
        self.sensor.update(msg, sat_intensity)

    def timer_callback(self):
        msg = LocalizationObject()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'base_link'

        if self.sensor.object_distance is None or self.sensor.object_angle is None:
            msg.distance_linear = -1.0
            msg.distance_angular = 0.0
            msg.sen_angular = 0.0
            msg.cos_angular = 0.0
        else:
            angle = float(self.sensor.object_angle)
            msg.distance_linear = float(self.sensor.object_distance)
            msg.distance_angular = angle
            msg.sen_angular = math.sin(angle)
            msg.cos_angular = math.cos(angle)

        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = ObjectLocalization()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()