# 피드백 받아보기
# action server
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import time

from msg_pkg1.action import Action1

class ActionServer2(Node):
    def __init__(self):
        super().__init__('action_server2_node')

        # 액션 서버 생성
        self.action_server = ActionServer(
            self,
            Action1,
            'action2_srvr',
            self.execute_callback
        )

    # 액션 서버 콜백 함수 (goal 완료했다고 치고 구성만 해봄)
    def execute_callback(self, goal_handle):
        self.get_logger().info("액션 서버 콜백 함수 실행")

        # 피드백 메시지 생성 후 퍼블리시
        feedback_msg = Action1.Feedback()
        for i in range(0, 10):
            feedback_msg.remained_dist = float(i)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1.0)

        goal_handle.succeed()  # 액션 목표값 처리 완료했다고 침
        result = Action1.Result()
        
        # self.get_logger().info(f"액션 목표값: {goal_handle.request.goal}")
        # self.get_logger().info(f"결과: {result.result}")

        return result
    
def main(args=None):
    rclpy.init(args=args)

    action_server = ActionServer2()
    rclpy.spin(action_server)

    # 액션 서버 종료
    action_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
