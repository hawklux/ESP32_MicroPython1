# https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html

# package.xml에 추가할 의존성 패키지
# - publisher 노드와 동일하다면 따로 추가할 것이 없음.
# - setup.cfg 파일도 따로 수정할 것이 없음.
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

# Node를 상속하는 클래스 생성
class SubscribingNode1(Node):
    def __init__(self):
        #1. 부모 생성자에게 자식의 노드명을 보냄
        super().__init__('sub_node1')
        #2. 스트링 타입의 메시지를 topic1 토픽에 실어서 구독하겠다고 선언함
        self.suber = self.create_subscription(
            String,
            'topic1',
            self.listener_callback, # 구독 콜백 호출(타이머 불필요)
            10)  # Queue size 10
        self.subscriptions #self.subscriptions: "Unused variable" 경고 예방
    
    #3. (콜백: 살제 작업자) 콘솔 로거에 받은 메시지 출력
    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data) # I heard: [from Puber] Hello Hawx! 1

def main(args=None):
    #1. rclpy 라이브러리 초기화
    rclpy.init(args=args)
    #2. 노드 객체 생성
    subing1 = SubscribingNode1()
    #3. 콜백 호출(구독): 구독신청 해두면 퍼블리싱할 때마다 자동으로 들어옴.
    rclpy.spin(subing1)  # 상시대기 = 타이머 불필요: msg가 들어올 때만 실행됨

    # destroy_node 명시(자동으로 되기는 하지만...)
    subing1.destroy_node()
    rclpy.shutdown()

if __name__=="__main__":
    main()