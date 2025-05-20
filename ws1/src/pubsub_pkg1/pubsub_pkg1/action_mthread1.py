# 멀티 쓰레드1: 퍼블리셔와 서브스크라이버를 멀티스레드로 실행
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from pubsub_pkg1.pub_node1 import TurtlesimPublisher
from pubsub_pkg1.sub_node1 import TurtlesimSubscriber

def main(args=None):
    rclpy.init(args=args)

    # 퍼블리셔와 서브스크라이버 노드 생성
    pub_node = TurtlesimPublisher()
    sub_node = TurtlesimSubscriber()

    # 멀티스레드 실행기 생성
    executor = MultiThreadedExecutor()

    # 실행기에 노드 추가
    executor.add_node(pub_node)
    executor.add_node(sub_node)
    try:
        # 멀티스레드로 노드 실행
        executor.spin()
    finally:
        # 종료 시 노드 삭제
        executor.shutdown()
        pub_node.destroy_node()
        sub_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()


# Compare this snippet from src/pubsub_pkg1/pubsub_pkg1/sub_node1.py:
