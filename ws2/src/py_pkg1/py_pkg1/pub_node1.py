# https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html

# package.xml에 추가할 dependencies
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

# Node 상속하는 클래스 생성
class PublishingNode1(Node):
    def __init__(self):
        #1. 부모 생성자에게 자식의 노드명을 보냄
        super().__init__('pub_node1') 
        #2. 스트링 타입의 메시지를 topic1 토픽에 실어서 발행하겠다고 선언함
        self.puber = self.create_publisher(String, 'topic1', 10)#Queue size 10
        timer_period = 2 # seconds
        #3. 2초마다 콜백 호출
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    #4. (콜백: 실제 작업자) 메시지 생성, 콘솔 로거에 퍼블리싱
    def timer_callback(self):
        msg = String()  # 스트링 객체
        msg.data = 'Hello hawx! %d' % self.i  # 메시지+카운터
        self.puber.publish(msg)
        self.get_logger().info('[from Puber] "%s"' % msg.data) # [from Puber] Hello Hawx! 1
        self.i += 1

def main(args=None):
    #1. rclpy 라이브러리 초기화
    rclpy.init(args=args)
    #2. 노드 생성
    pubing1 = PublishingNode1()
    #3. 2초에 1번씩 퍼블리싱(=콜백 호출)
    rclpy.spin(pubing1)

    # destroy_node 명시 (자동으로 되기는 하지만...)
    pubing1.destroy_node()
    rclpy.shutdown()

if __name__=="__main__":
    main()
