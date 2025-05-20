# Client 추가: teleport_absolute으로 특정 위치로 turtle1 이동
from msg_pkg1.srv import TurtleSrvc1
from turtlesim.srv import TeleportAbsolute
# from turtlesim.srv import Spawn
import rclpy
from rclpy.node import Node
# from rclpy.qos import QoSProfile

# [코트 설명]
# 하나의 노드 안에 서버와 클라를 모두 구현
# 노드 이름: multi_spawning2
# 서비스(서버): TurtleSrvc1 타입의 'spawn_srvc_msg2'
# 클라1(cli): turtlesim_node에 TeleportAbsolute 타입의 'turtle1/teleport_absolute' 서비스를 요청하여 거북이를 움직임.
# 클라2(사용자): 터미널에서 ros2 service call /spawn_srvc_msg2 msg_pkg1/srv/TurtleSrvc1 '{num: 1}'과 같이 서버(/spawn_srvc_msg2)에 요청을 보내서 서버가 콜백을 실행하게 함.
# 서버: 콜백에서 cli의 call_async()를 호출하여 turtlesim_node에 요청을 보냄.
# turtlesim_node를 실행한 상태에서 서비스 요청을 보내면 거북이가 이동함.

class MultiSpawning2(Node):
    def __init__(self):
        super().__init__('multi_spawning2')

        # multi_spawning2 노드 안에서 TurtleSrvc1 타입의 'spawn_srvc_msg2'라는 서비스(서버)를 제공하기 위해 요청을 기다림
        self.server = self.create_service(TurtleSrvc1, 'spawn_srvc_msg2', self.spawn_srvc_callback)
        self.get_logger().info('서비스 서버가 시작되었습니다.')

        # TeleportAbsolute 타입의 turtle1/teleport_absolute 서비스를 요청하는 클라이언트 생성
        self.cli = self.create_client(TeleportAbsolute, 'turtle1/teleport_absolute')
        self.req_teleport = TeleportAbsolute.Request()

        # turtle1/teleport_apsolute라는 서비스를 기다림. 
        # turtlesim_node를 실행한 상태면 while에서 빠져나옴.
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('서비스 대기 중...')

    # def spawn_srvc_callback(self, request, response):
    #     print('Request: ', request)

    #     self.req_teleport.x = 1.0

    #     self.cli.call_async(self.req_teleport)

    #     return response


    def spawn_srvc_callback(self, request, response):
        print('Request: ', request)

        if request.num == 1:
            self.req_teleport.x = 1.0
            self.req_teleport.y = 2.0
            self.req_teleport.theta = 0.0
        elif request.num == 2:
            self.req_teleport.x = 5.0
            self.req_teleport.y = 5.0
            self.req_teleport.theta = 1.57  # 90도
        else:
            self.req_teleport.x = 8.0
            self.req_teleport.y = 3.0
            self.req_teleport.theta = 3.14  # 180도

        self.cli.call_async(self.req_teleport)

        response.x = [self.req_teleport.x]
        response.y = [self.req_teleport.y]
        response.theta = [self.req_teleport.theta]

        return response

  

def main(args=None):
    rclpy.init(args=args)

    # 'multi_spawning2'라는 노드를 생성
    multiSpawnNode = MultiSpawning2()
    rclpy.spin(multiSpawnNode)

    multiSpawnNode.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

# $ ros2 run pubsub_pkg1 turtle_srvr2
# $ ros2 service list -t
# $ ros2 service call /spawn_srvc_msg2 msg_pkg1/srv/TurtleSrvc1 '{num: 1}'
# $ ros2 service call /turtle1/teleport_absolute turtlesim/TeleportAbsolute '{x: 5.0, y: 5.0, theta: 0.0}'
