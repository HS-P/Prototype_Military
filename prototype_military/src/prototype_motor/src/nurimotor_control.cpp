#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include <boost/asio.hpp>
#include <boost/asio/serial_port.hpp>
#include <cmath>

#define WHEEL_RADIUS        0.230
#define WHEEL_SEPARATION    0.434
#define RADIAN              3.14159
#define MAX_RPM             190         // 19RPM is Maximum
#define LINEAR_MAX          MAX_RPM * 10 * 2 * RADIAN * WHEEL_RADIUS / 600
#define ANGULAR_MAX         2 * LINEAR_MAX / WHEEL_SEPARATION

class MotorControlNode : public rclcpp::Node
{
public:
    MotorControlNode() : Node("Nurimotor"),
                         io_(),
                         serial_port_(io_, "/dev/ttyACM0"),
                         odom_pos_x(0.0),
                         odom_pos_y(0.0),
                         odom_ori_z(0.0)
    {
        velocity_subscription_ = this->create_subscription<geometry_msgs::msg::Twist>(
            "nuri_vel", 10, std::bind(&MotorControlNode::velocity_callback, this, std::placeholders::_1));

        odom_publisher_ = this->create_publisher<nav_msgs::msg::Odometry>("odom", 10);
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);

        serial_port_.set_option(boost::asio::serial_port_base::baud_rate(115200));

        RCLCPP_INFO(this->get_logger(), "Motor Control Node started");
    }

private:
    void velocity_callback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        float linear_velocity = msg->linear.x;
        float angular_velocity = msg->angular.z;

        // 바퀴 속도 계산 (왼쪽 및 오른쪽)
        int w_r = ((linear_velocity / WHEEL_RADIUS) + (WHEEL_SEPARATION * angular_velocity) / (2 * WHEEL_RADIUS)) * 600 / (2 * M_PI);
        int w_l = ((linear_velocity / WHEEL_RADIUS) - (WHEEL_SEPARATION * angular_velocity) / (2 * WHEEL_RADIUS)) * 600 / (2 * M_PI);

        // RPM 제한
        w_l = std::clamp(w_l, -MAX_RPM, MAX_RPM);
        w_r = std::clamp(w_r, -MAX_RPM, MAX_RPM);
        linear_velocity = std::clamp(linear_velocity, static_cast<float>(-LINEAR_MAX), static_cast<float>(LINEAR_MAX));
        angular_velocity = std::clamp(angular_velocity, static_cast<float>(-ANGULAR_MAX), static_cast<float>(ANGULAR_MAX));
        
        if (w_l >= 0) {
            motor_cw(0x00, static_cast<uint8_t>(abs(w_l)));
        } else {
            motor_ccw(0x00, static_cast<uint8_t>(abs(w_l)));
        }

        if (w_r >= 0) {
            motor_ccw(0x01, static_cast<uint8_t>(abs(w_r)));
        } else {
            motor_cw(0x01, static_cast<uint8_t>(abs(w_r)));
        }


        // Odometry 계산
        auto current_time = this->get_clock()->now();
        double dt = (current_time.seconds() - last_time.seconds());
        double delta_x = (linear_velocity * std::cos(odom_ori_z) - 0.0 * std::sin(odom_ori_z)) * dt;
        double delta_y = (linear_velocity * std::sin(odom_ori_z) + 0.0 * std::cos(odom_ori_z)) * dt;
        double delta_theta = angular_velocity * dt;

        odom_pos_x += delta_x;
        odom_pos_y += delta_y;
        odom_ori_z += delta_theta;

        // Odometry 메시지 생성 및 퍼블리시
        auto odom_msg = nav_msgs::msg::Odometry();
        odom_msg.header.stamp = current_time;
        odom_msg.header.frame_id = "odom";
        odom_msg.child_frame_id = "base_footprint";

        odom_msg.pose.pose.position.x = odom_pos_x;
        odom_msg.pose.pose.position.y = odom_pos_y;
        odom_msg.pose.pose.position.z = 0.0;

        tf2::Quaternion q;
        q.setRPY(0, 0, odom_ori_z);
        odom_msg.pose.pose.orientation.x = q.x();
        odom_msg.pose.pose.orientation.y = q.y();
        odom_msg.pose.pose.orientation.z = q.z();
        odom_msg.pose.pose.orientation.w = q.w();

        odom_msg.twist.twist.linear.x = linear_velocity;
        odom_msg.twist.twist.angular.z = angular_velocity;

        odom_publisher_->publish(odom_msg);

        // TF 변환 생성 및 퍼블리시
        geometry_msgs::msg::TransformStamped odom_tf;
        odom_tf.header.stamp = current_time;
        odom_tf.header.frame_id = "odom";
        odom_tf.child_frame_id = "base_footprint";

        odom_tf.transform.translation.x = odom_pos_x;
        odom_tf.transform.translation.y = odom_pos_y;
        odom_tf.transform.translation.z = 0.0;
        odom_tf.transform.rotation.x = q.x();
        odom_tf.transform.rotation.y = q.y();
        odom_tf.transform.rotation.z = q.z();
        odom_tf.transform.rotation.w = q.w();

        tf_broadcaster_->sendTransform(odom_tf);

        last_time = current_time;
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
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_publisher_;
    std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
    boost::asio::io_service io_;
    boost::asio::serial_port serial_port_;

    double odom_pos_x, odom_pos_y, odom_ori_z;
    rclcpp::Time last_time = this->get_clock()->now();
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MotorControlNode>());
    rclcpp::shutdown();
    return 0;
}
