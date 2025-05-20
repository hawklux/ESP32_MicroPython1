import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class ServoPublisher(Node):
    def __init__(self):
        super().__init__('servo_pub1')
        self.publisher = self.create_publisher(Int32, 'angle_topic1', 10)
        self.angles = [0, 45, 90, 135, 180]
        self.index = 0
        self.timer = self.create_timer(2.0, self.timer_callback)
        self.get_logger().info("퍼블리셔 시작됨")

    def timer_callback(self):
        msg = Int32()
        msg.data = self.angles[self.index]
        self.publisher.publish(msg)
        self.get_logger().info(f"각도 발행: {msg.data}도")
        self.index = (self.index + 1) % len(self.angles)

def main(args=None):
    rclpy.init(args=args)
    node = ServoPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
        node.get_logger().info("퍼블리셔 종료됨")
