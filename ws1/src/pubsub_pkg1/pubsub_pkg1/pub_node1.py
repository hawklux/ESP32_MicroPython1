# 터틀 원 그리기 (turtlesim에게 cmd_vel 메시지 발행)
import rclpy as rp
from rclpy.node import Node
from geometry_msgs.msg import Twist # cmd_vel 메시지 type

class TurtlesimPublisher(Node):
    def __init__(self):
        super().__init__('pub_node1')
        self.pubing = self.create_publisher(
            Twist,
            'turtle1/cmd_vel',  # 터틀심이 구독하는 토픽명
            10
        )
        timer_period = 1 # 0.001 ~ 1sec 사이의 값
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.get_logger().info('퍼블리싱: turtle1/cmd_vel')
    
    def timer_callback(self):
        msg = Twist()   # 토픽 메시지 객체 생성
        msg.linear.x = 2.0
        msg.angular.z = 2.0

        self.pubing.publish(msg)  # 퍼블리싱
        self.get_logger().info(f'퍼블리싱: linear={msg.linear.x}, angular={msg.angular.z}')

def main():
    rp.init()

    pubber = TurtlesimPublisher()
    rp.spin(pubber)  # self.pubing.publish(msg)를 주기적으로 실행

    pubber.destroy_node()
    rp.shutdown()

if __name__ == '__main__':
    main()