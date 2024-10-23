 #include "rclcpp/rclcpp.hpp"
#include <fishbot_interfaces/msg/motorcontorl.h>
class GETSPEED_NODE : public rclcpp::Node {
public:
  // 构造函数,有一个参数为节点名称
  GETSPEED_NODE (std::string name) : Node(name) {
    RCLCPP_INFO(this->get_logger(), "节点已启动：%s.", name.c_str());
    command_subscribe_ = this->create_subscription<fishbot_interfaces::msg::Motorcontorl>("car_speed", 10, std::bind(&TopicSubscribe01::command_callback, this, std::placeholders::_1));  
  }

private:
    rclcpp::Subscription<fishbot_interfaces::msg::Motorcontorl>::SharedPtr command_subscribe_;
    void command_callback(const fishbot_interfaces::msg::Motorcontorl::SharedPtr msg)
    {
    
        RCLCPP_INFO(this->get_logger(), "收到[%f]指令",msg->speed1);
    }
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<GETSPEED_NODE>("example_interfaces_control_01");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}