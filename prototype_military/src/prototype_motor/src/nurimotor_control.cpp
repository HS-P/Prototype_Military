#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include <boost/asio.hpp>
#include <boost/asio/serial_port.hpp>

#define WHEEL_RADIUS        0.230
#define WHEEL_SEPARATION    0.434
#define RADIAN              3.14159
#define MAX_RPM             190         // 19RPM is Maximum

class MotorControlNode : public rclcpp::Node
{
public:
    MotorControlNode() : Node("Nurimotor"),
                         io_(),
                         serial_port_(io_, "/dev/ttyACM0")
    {
        velocity_subscription_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "nuri_vel", 10, std::bind(&MotorControlNode::velocity_callback, this, std::placeholders::_1));

        serial_port_.set_option(boost::asio::serial_port_base::baud_rate(115200));
    }

private:
    void velocity_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        float linear_velocity = msg->linear.x;
        float angular_velocity = msg->angular.z;

        // 바퀴 속도 계산 (왼쪽 및 오른쪽)
        int w_r = ((linear_velocity / WHEEL_RADIUS) + (WHEEL_SEPARATION * angular_velocity) / (2 * WHEEL_RADIUS)) * 60 / (2 * M_PI);
        int w_l = ((linear_velocity / WHEEL_RADIUS) - (WHEEL_SEPARATION * angular_velocity) / (2 * WHEEL_RADIUS)) * 60 / (2 * M_PI);

        // RPM 제한
        w_l = std::clamp(w_l, -MAX_RPM, MAX_RPM);
        w_r = std::clamp(w_r, -MAX_RPM, MAX_RPM);
        
        if (linear_velocity >= 0){
            motor_cw(0x00, static_cast<uint8_t>(abs(w_l)));
            motor_ccw(0x01, static_cast<uint8_t>(abs(w_r)));
        } else{
            motor_cw(0x00, static_cast<uint8_t>(abs(w_l)));
            motor_ccw(0x01, static_cast<uint8_t>(abs(w_r)));
        }

    }

    void motor_cw(uint8_t id, uint8_t speed)
    {
        uint8_t header1 = 0xFF;
        uint8_t header2 = 0xFE;
        uint8_t data_size = 0x06;
        uint8_t mode_byte = 0x03;
        uint8_t direction_byte = 0x01;
        uint8_t checksum = ~(id + data_size + mode_byte + direction_byte + speed + 1) & 0xFF;
        uint8_t packet[] = {header1, header2, id, data_size, checksum, mode_byte, direction_byte, 0x00, speed, 1};

        boost::asio::write(serial_port_, boost::asio::buffer(packet, sizeof(packet)));
    }

    void motor_ccw(uint8_t id, uint8_t speed)
    {
        uint8_t header1 = 0xFF;
        uint8_t header2 = 0xFE;
        uint8_t data_size = 0x06;
        uint8_t mode_byte = 0x03;
        uint8_t direction_byte = 0x00;
        uint8_t checksum = ~(id + data_size + mode_byte + direction_byte + speed + 1) & 0xFF;
        uint8_t packet[] = {header1, header2, id, data_size, checksum, mode_byte, direction_byte, 0x00, speed, 1};

        boost::asio::write(serial_port_, boost::asio::buffer(packet, sizeof(packet)));
    }

    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr velocity_subscription_;
    boost::asio::io_service io_;
    boost::asio::serial_port serial_port_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    return 0;
}
