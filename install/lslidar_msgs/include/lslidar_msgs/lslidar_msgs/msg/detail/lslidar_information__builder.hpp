// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:msg/LslidarInformation.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__BUILDER_HPP_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/msg/detail/lslidar_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace msg
{

namespace builder
{

class Init_LslidarInformation_fpga_board_3_program
{
public:
  explicit Init_LslidarInformation_fpga_board_3_program(::lslidar_msgs::msg::LslidarInformation & msg)
  : msg_(msg)
  {}
  ::lslidar_msgs::msg::LslidarInformation fpga_board_3_program(::lslidar_msgs::msg::LslidarInformation::_fpga_board_3_program_type arg)
  {
    msg_.fpga_board_3_program = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

class Init_LslidarInformation_fpga_board_2_program
{
public:
  explicit Init_LslidarInformation_fpga_board_2_program(::lslidar_msgs::msg::LslidarInformation & msg)
  : msg_(msg)
  {}
  Init_LslidarInformation_fpga_board_3_program fpga_board_2_program(::lslidar_msgs::msg::LslidarInformation::_fpga_board_2_program_type arg)
  {
    msg_.fpga_board_2_program = std::move(arg);
    return Init_LslidarInformation_fpga_board_3_program(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

class Init_LslidarInformation_lidar_serial_number
{
public:
  explicit Init_LslidarInformation_lidar_serial_number(::lslidar_msgs::msg::LslidarInformation & msg)
  : msg_(msg)
  {}
  Init_LslidarInformation_fpga_board_2_program lidar_serial_number(::lslidar_msgs::msg::LslidarInformation::_lidar_serial_number_type arg)
  {
    msg_.lidar_serial_number = std::move(arg);
    return Init_LslidarInformation_fpga_board_2_program(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

class Init_LslidarInformation_difop_port
{
public:
  explicit Init_LslidarInformation_difop_port(::lslidar_msgs::msg::LslidarInformation & msg)
  : msg_(msg)
  {}
  Init_LslidarInformation_lidar_serial_number difop_port(::lslidar_msgs::msg::LslidarInformation::_difop_port_type arg)
  {
    msg_.difop_port = std::move(arg);
    return Init_LslidarInformation_lidar_serial_number(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

class Init_LslidarInformation_msop_port
{
public:
  explicit Init_LslidarInformation_msop_port(::lslidar_msgs::msg::LslidarInformation & msg)
  : msg_(msg)
  {}
  Init_LslidarInformation_difop_port msop_port(::lslidar_msgs::msg::LslidarInformation::_msop_port_type arg)
  {
    msg_.msop_port = std::move(arg);
    return Init_LslidarInformation_difop_port(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

class Init_LslidarInformation_lidar_mac_address
{
public:
  explicit Init_LslidarInformation_lidar_mac_address(::lslidar_msgs::msg::LslidarInformation & msg)
  : msg_(msg)
  {}
  Init_LslidarInformation_msop_port lidar_mac_address(::lslidar_msgs::msg::LslidarInformation::_lidar_mac_address_type arg)
  {
    msg_.lidar_mac_address = std::move(arg);
    return Init_LslidarInformation_msop_port(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

class Init_LslidarInformation_destination_ip
{
public:
  explicit Init_LslidarInformation_destination_ip(::lslidar_msgs::msg::LslidarInformation & msg)
  : msg_(msg)
  {}
  Init_LslidarInformation_lidar_mac_address destination_ip(::lslidar_msgs::msg::LslidarInformation::_destination_ip_type arg)
  {
    msg_.destination_ip = std::move(arg);
    return Init_LslidarInformation_lidar_mac_address(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

class Init_LslidarInformation_lidar_ip
{
public:
  Init_LslidarInformation_lidar_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LslidarInformation_destination_ip lidar_ip(::lslidar_msgs::msg::LslidarInformation::_lidar_ip_type arg)
  {
    msg_.lidar_ip = std::move(arg);
    return Init_LslidarInformation_destination_ip(msg_);
  }

private:
  ::lslidar_msgs::msg::LslidarInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::msg::LslidarInformation>()
{
  return lslidar_msgs::msg::builder::Init_LslidarInformation_lidar_ip();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__BUILDER_HPP_
