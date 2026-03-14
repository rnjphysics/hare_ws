#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "hare_msgs/msg/motor_command_array.hpp"
#include "hare_msgs/msg/motor_command.hpp"

#include <vector>
#include <cmath>

class LocomotionNode : public rclcpp::Node
{

public:

    LocomotionNode() : Node("locomotion_node")
    {

        declare_parameter<double>("wheel_radius", 0.0); 
        declare_parameter<double>("track_width", 0.0); 
        declare_parameter<double>("gear_ratio", 1.0);
        declare_parameter<std::vector<int64_t>>("left_motor_ids"); 
        declare_parameter<std::vector<int64_t>>("right_motor_ids");

        wheel_radius_ = get_parameter("wheel_radius").as_double();
        track_width_ = get_parameter("track_width").as_double();
        gear_ratio_ = get_parameter("gear_ratio").as_double();

        left_motor_ids_ = get_parameter("left_motor_ids").as_integer_array();
        right_motor_ids_ = get_parameter("right_motor_ids").as_integer_array();

        cmd_sub_ = create_subscription<geometry_msgs::msg::Twist>(
            "/cmd_vel",
            10,
            std::bind(&LocomotionNode::cmdCallback, this, std::placeholders::_1)
        );

        motor_pub_ = create_publisher<hare_msgs::msg::MotorCommandArray>(
            "/motor_commands",
            10
        );

        RCLCPP_INFO(get_logger(), "Locomotion node started");
    }

private:

    double wheel_radius_;
    double track_width_;
    double gear_ratio_;

    std::vector<int64_t> left_motor_ids_;
    std::vector<int64_t> right_motor_ids_;

    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_sub_;
    rclcpp::Publisher<hare_msgs::msg::MotorCommandArray>::SharedPtr motor_pub_;

    void cmdCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {

        double v = msg->linear.x;
        double w = msg->angular.z;

        double v_left = v - (w * track_width_ / 2.0);
        double v_right = v + (w * track_width_ / 2.0);

        double rpm_left = velocityToRPM(v_left);
        double rpm_right = velocityToRPM(v_right);

        hare_msgs::msg::MotorCommandArray cmd_msg;

        for(auto id : left_motor_ids_)
        {
            hare_msgs::msg::MotorCommand m;
            m.id = id;
            m.rpm = static_cast<int>(rpm_left);
            cmd_msg.motors.push_back(m);
        }

        for(auto id : right_motor_ids_)
        {
            hare_msgs::msg::MotorCommand m;
            m.id = id;
            m.rpm = static_cast<int>(rpm_right);
            cmd_msg.motors.push_back(m);
        }

        motor_pub_->publish(cmd_msg);
    }

    double velocityToRPM(double velocity)
    {

        double wheel_rpm =
            velocity /
            (2.0 * M_PI * wheel_radius_) *
            60.0;

        return wheel_rpm * gear_ratio_;
    }
};

int main(int argc, char **argv)
{

    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<LocomotionNode>());

    rclcpp::shutdown();

    return 0;
}
