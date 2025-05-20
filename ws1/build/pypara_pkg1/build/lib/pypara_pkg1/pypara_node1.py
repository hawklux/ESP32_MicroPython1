import rclpy
import rclpy.node

class ParaSetter(rclpy.node.Node):
    def __init__(self):
        super().__init__('para_node1')
        self.declare_parameter('my_para', 'world')
        self.timer = self.create_timer(1, self.timer_callback)

    def timer_callback(self):
        my_p = self.get_parameter('my_para').get_parameter_value().string_value

        self.get_logger().info("Hi %s!" % my_p)

        my_new_p = rclpy.parameter.Parameter(
            'my_para',
            rclpy.Parameter.Type.STRING,
            'world'
        )
        all_new_p = [my_new_p]
        self.set_parameters(all_new_p)

def main():
    rclpy.init()
    node1 = ParaSetter()
    rclpy.spin(node1)

if __name__=='__main__':
    main()
