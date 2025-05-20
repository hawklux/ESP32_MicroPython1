# 터틀심의 포즈 메시지 받아와서 출력하기
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose

class CmdAndPose(Node):
    def __init__(self):
        super().__init__('turtle_msg1')
        self.subscriber = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.listener_callback,
            10
        )
    
    def listener_callback(self, msg):
        self.get_logger().info(f'Turtle1: x={msg.x}, y={msg.y}, theta={msg.theta}')
    
def main(args=None):
    rclpy.init(args=args)

    turtle1_node = CmdAndPose()
    rclpy.spin(turtle1_node)

    turtle1_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
