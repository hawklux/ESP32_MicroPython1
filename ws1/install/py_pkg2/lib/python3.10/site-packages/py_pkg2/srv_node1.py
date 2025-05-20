from example_interfaces.srv import AddTwoInts
import rclpy
from rclpy.node import Node

# Node 상속
class ServicingNode(Node):
    def __init__(self):
        # 부모 노드에 생성한 노드명만 주면 나머지는 다 알아서 준비해줌.
        # ros2 node list하면 이 이름이 나타남.
        super().__init__('srvr_node1')
        # AddTwoInts 타입의 srvc1 서비스 메시지를 전달하여 srvr 객체 생성
        # 그 과정에서 srvc_callback도 실행
        self.srvr = self.create_service(AddTwoInts, 'srvc1', self.srvc_callback)
    
    # request, response 객체를 전달받아 response 객체를 리턴함
    # response는 sum, a, b를 멤버로 가진 객체()
    def srvc_callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info(f'[from Cli] a: {request.a}, b: {request.b}')    
        return response

def main():
    rclpy.init()

    serving = ServicingNode()
    rclpy.spin(serving)  # 메시지 오기만을 기다리고 또 기다림...

    rclpy.shutdown()

if __name__ == '__main__':
    main()
    