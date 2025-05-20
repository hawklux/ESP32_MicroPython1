# 터틀심으로부터 발행되는 pose 토픽을 구독하는 노드
import rclpy as rp
from rclpy.node import Node
from turtlesim.msg import Pose

class TurtlesimSubscriber(Node):
    def __init__(self):
        super().__init__('sub_node1')
        self.subing = self.create_subscription(
            Pose,
            'turtle1/pose', # 터틀심이 발행하는 토픽명
            self.pose_callback,
            10
        )
        self.get_logger().info('Subscribing to turtle1/pose')
    
    def pose_callback(self, msg):
        print('[Turtle1] ', 'x: ', msg.x, 'y: ', msg.y)
        # self.get_logger().info(
        #     'Turtle1 is at x=%f, y=%f' % (msg.x, msg,y)
        # )

def main():
    rp.init()
    
    subber = TurtlesimSubscriber()
    rp.spin(subber)
    # self.subing.subscribe()를 주기적으로 실행 
    # 즉, self.pose_callback(msg)를 주기적으로 실행

    subber.destroy_node()
    rp.shutdown()

if __name__ == '__main__':
    main()
