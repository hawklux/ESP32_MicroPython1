# 서비스 서버: TurtleSrvc1.py의 내용을 수정하여 서비스 서버 구현
import rclpy
from rclpy.node import Node
from msg_pkg1.srv import TurtleSrvc1

class MultiSpawning(Node):
    def __init__(self):
        super().__init__('multispawn_node1')
        self.servicing = self.create_service(TurtleSrvc1, 'spawn_srvc_msg1', self.spawn_srvc_callback)
        self.get_logger().info('서비스 서버가 시작되었습니다.')

    def spawn_srvc_callback(self, request, response):
        print('Request: ', request)

        response.x = [1., 2., 3.]
        response.y = [10., 20.]
        response.theta = [100., 200., 300.]

        return response

    # def spawn_srvc_callback(self, request, response):
    #     response.success = True
    #     response.message = f'거북이 {request.name}이(가) ({request.x}, {request.y})에 생성되었습니다.'
    #     self.get_logger().info(response.message)
    #     return response

def main(args=None):
    rclpy.init(args=args)

    multiSpawnNode = MultiSpawning()
    rclpy.spin(multiSpawnNode)

    multiSpawnNode.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

# $ ros2 run pubsub_pkg1 turtle_srvc1
# $ ros2 service list
# $ ros2 service call /spawn_topic msg_pkg1/srv/TurtleSrvc1 '{x: 1.0, y: 2.0, theta: 3.0}'
