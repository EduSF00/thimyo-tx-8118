import rclpy
import math
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from std_msgs.msg import String

SCAN_TOPIC = '/proximity/laser'
TIMER_PERIOD = 0.5  # seconds

# name: (default value, description, lowest value, highest value)
PARAM_INFO = {
    'saturation_intensity': (4600.0, 'Intensity from which the sensor is considered saturated', 0.0, 5000.0),
}

#class sensor who calculates the distance and angle using the LaserScan
class ObjectSensor:

    def __init__(self):
        self.object_distance = None    # None = nothing detected
        self.object_angle = None       # positivo = object to the left; negative = object to the right

    def update(self, scan: LaserScan, saturation_intensity: float):
        """Recalcula a distância e o ângulo do objeto a partir de um novo LaserScan."""
        weighted_x_sum = 0.0
        weighted_y_sum = 0.0
        total_intensity = 0.0

        #scans the distance and intensity values ​​from the LaserScan of the 5 sensors
        for index, (distance, intensity) in enumerate(zip(scan.ranges, scan.intensities)):
            if intensity == 0:                        #no object detected by the sensor
                continue
            if intensity >= saturation_intensity:     #object stuck to the sensor
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
            self.object_distance = math.hypot(object_x, object_y) #Pythagorean theorem formula for calculating distance
            self.object_angle = math.atan2(object_y, object_x) #formula for calculating the angle of the object relative to the robot



class ObjectLocalization(Node):

    def __init__(self):
        super().__init__('object_localization')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.timer = self.create_timer(TIMER_PERIOD, self.timer_callback)
        self.scan_sub = self.create_subscription(LaserScan, SCAN_TOPIC, self.scan_callback, 10)
        self.i = 0

        self.sensor = ObjectSensor()

    def scan_callback(self, msg: LaserScan):
        # This updates the distance and angle of the object based on the latest LaserScan reading
        self.sensor.update(msg, self.param('saturation_intensity'))

    def timer_callback(self):
        msg = String()
        msg.data = 'Distance: %d, Angle: %d' % self.sensor.object_distance, self.sensor.object_angle
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = ObjectLocalization()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
