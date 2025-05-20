import sys
from example_interfaces.srv import AddTwoInts
import rclpy
from rclpy.node import Node

class ClientingNodeAsync(Node):
    def __init__(self):
        super().__init__('clier_node1')
        # 타입(AddTwoInts)과 서비스명(srvc1)이 서버와 동일해야 소통이 됨.
        self.clier = self.create_client(AddTwoInts, 'srvc1')
        # 타입과 서비스명이 동일한 서비스가 있는지 1초마다 검사
        while not self.clier.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('서비스 대기 중...')
        # 서비스가 있다면 Request 객체 생성
        self.req = AddTwoInts.Request()

    def send_request(self, a, b):
        self.req.a = a
        self.req.b = b

        return self.clier.call_async(self.req)
        # 비동기로 요청함. 즉, 요청하고 다른 일을 하다가 답 오면 받아 처리함.
        # 동기: 답 올 때까지 아무 것도 안 하고 대기. 
    
def main():
    rclpy.init() 
    # 토픽과 달리 서비스는 초기화 때는 init()에 인자가 없음. rclpy.init(args=args) 
    # 추후 서비스 요청할 때 터미널에서 보낼 것이므로.
    # ros2 service call /srvc1 example_interfaces/srv/AddTwoInts "{a: 3, b: 5}”

    cliing = ClientingNodeAsync()
    future = cliing.send_request(int(sys.argv[1]), int(sys.argv[2]))
    rclpy.spin_until_future_complete(cliing, future)

    if future.done():
        response = future.result()
        cliing.get_logger().info(
            f'결과값: {int(sys.argv[1])} + {int(sys.argv[2])} = {response.sum}'
        )
    else:
        cliing.get_logger().error("서비스 응답을 받을 수 없음.")

    
    cliing.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
