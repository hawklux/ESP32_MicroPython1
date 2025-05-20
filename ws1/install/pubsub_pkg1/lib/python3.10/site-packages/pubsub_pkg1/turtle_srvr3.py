# 좌표를 n 등분한 위치에 거북이를 multi_spawn하는 서비스 서버
# 서비스 요청 시, n개의 x, y, theta 좌표를 반환함.
from msg_pkg1.srv import TurtleSrvc1
from turtlesim.srv import TeleportAbsolute
from turtlesim.srv import Spawn

import rclpy
import time
import numpy as np
from rclpy.node import Node

class MultiSpawn3(Node):
    def __init__(self):
        super().__init__('multi_spawn3_node')

        # 서비스 생성
        self.serving = self.create_service(TurtleSrvc1, 'spawn_srvc_msg3', self.spawn_srvc_callback)
        self.get_logger().info('서비스 서버가 시작됨')

        # 터틀심으로부터 TeleportAbsolute 타입의 turtle1/teleport_absolute 서비스를 요청하는 클라이언트 생성
        self.cli_teleport = self.create_client(TeleportAbsolute, 'turtle1/teleport_absolute')
        self.cli_spawn = self.create_client(Spawn, 'spawn')
        self.req_teleport = TeleportAbsolute.Request()
        self.req_spawn = Spawn.Request()
        self.center_x = 5.54
        self.center_y = 5.54
        self.radius = 3.0 
        # self.angle = 0.0
        # self.n = 0
        
        # while not self.cli_spawn.wait_for_service(timeout_sec=2.0):
        #     self.get_logger().info('터틀심을 실행하세요...')

    # 원형 n 등분 좌표 리턴 함수
    def get_circle_positions(self, n, radius):
        theta_gap = 2 * np.pi / n
        thetas = [theta_gap * i for i in range(n)]
        x = [radius * np.cos(th) for th in thetas]
        y = [radius * np.sin(th) for th in thetas]

        return x, y, thetas
        # ([1.0, -0.4, -0.5], [0.0, 0.8, -0.8], [0.0, 2.0, 4.1])
    
    # 서비스 콜백 함수
    def spawn_srvc_callback(self, request, response):
        print('Request: ', request)
        # 거북이 좌표 생성
        x, y, thetas = self.get_circle_positions(request.num, self.radius)
        
        # 거북이 생성 요청
        for i in range(request.num):
            self.req_spawn.x = self.center_x + x[i]
            self.req_spawn.y = self.center_y + y[i]
            self.req_spawn.theta = thetas[i]
            
            self.cli_spawn.call_async(self.req_spawn)
            time.sleep(0.1)

        response.x = x
        response.y = y
        response.theta = thetas

        return response

def main(args=None):
        rclpy.init(args=args)

        # 'multi_spawn3_node'라는 노드를 생성
        multi_spawn3_node = MultiSpawn3()
        rclpy.spin(multi_spawn3_node)
        # 노드 종료
        multi_spawn3_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
        main()

