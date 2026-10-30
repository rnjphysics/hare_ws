#include <rclcpp/rclcpp.hpp>

#include "hare_msgs/msg/motor_command_array.hpp"
#include "hare_msgs/msg/motor_state.hpp"

#include "hare_can/vesc_can.hpp"

#include <thread>

class CANInterfaceNode : public rclcpp::Node
{

public:

    CANInterfaceNode()
        : Node("can_interface_node")
    {

        declare_parameter("can_interface", "can0");

        std::string iface =
            get_parameter("can_interface").as_string();

        vesc = std::make_unique<VescCAN>(iface);

        cmd_sub =
            create_subscription<hare_msgs::msg::MotorCommandArray>(
                "/motor_commands",
                10,
                std::bind(
                    &CANInterfaceNode::commandCallback,
                    this,
                    std::placeholders::_1));

        state_pub =
            create_publisher<hare_msgs::msg::MotorState>(
                "/motor_states",
                50);

        rx_thread =
            std::thread(
                &CANInterfaceNode::receiveLoop,
                this);

        RCLCPP_INFO(get_logger(), "CAN interface started");
    }

private:

    std::unique_ptr<VescCAN> vesc;

    rclcpp::Subscription<hare_msgs::msg::MotorCommandArray>::SharedPtr cmd_sub;

    rclcpp::Publisher<hare_msgs::msg::MotorState>::SharedPtr state_pub;

    std::thread rx_thread;

    void commandCallback(
    const hare_msgs::msg::MotorCommandArray::SharedPtr msg)
{
    for (const auto &m : msg->motors)
    {
        bool ok = vesc->sendRPM(m.rpm, m.id);

        RCLCPP_INFO(this->get_logger(),
            "Send RPM %d to motor %d -> %s",
            m.rpm,
            m.id,
            ok ? "OK" : "FAIL");
    }
}
    void receiveLoop()
    {

        struct can_frame frame;

        while(rclcpp::ok())
        {

            if(!vesc->receiveFrame(frame))
                continue;

            uint32_t cid = frame.can_id & CAN_EFF_MASK;
            uint8_t id = cid & 0xFF;

            VescStatus1 s1;
            if(VescCAN::parseStatus1(frame, s1))
            {

                hare_msgs::msg::MotorState msg;

                msg.id = id;
                msg.erpm = s1.erpm;
                msg.current = s1.current;
                msg.duty = s1.duty;

                state_pub->publish(msg);
            }

            VescStatus2 s2;
            if(VescCAN::parseStatus2(frame, s2))
            {

                hare_msgs::msg::MotorState msg;

                msg.id = id;
                msg.amp_hours = s2.amp_hours;
                msg.amp_hours_charged = s2.amp_hours_charged;

                state_pub->publish(msg);
            }

            VescStatus3 s3;
            if(VescCAN::parseStatus3(frame, s3))
            {

                hare_msgs::msg::MotorState msg;

                msg.id = id;
                msg.watt_hours = s3.watt_hours;
                msg.watt_hours_charged = s3.watt_hours_charged;

                state_pub->publish(msg);
            }

            VescStatus4 s4;
            if(VescCAN::parseStatus4(frame, s4))
            {

                hare_msgs::msg::MotorState msg;

                msg.id = id;
                msg.temp_fet = s4.temp_fet;
                msg.temp_motor = s4.temp_motor;
                msg.input_current = s4.current_in;

                state_pub->publish(msg);
            }

            VescStatus5 s5;
            if(VescCAN::parseStatus5(frame, s5))
            {

                hare_msgs::msg::MotorState msg;

                msg.id = id;
                msg.voltage = s5.input_voltage;
                msg.tachometer = s5.tachometer;

                state_pub->publish(msg);
            }
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CANInterfaceNode>());
    rclcpp::shutdown();
    return 0;
}
