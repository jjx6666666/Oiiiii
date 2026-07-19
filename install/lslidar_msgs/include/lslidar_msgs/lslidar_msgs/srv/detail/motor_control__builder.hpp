// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__MOTOR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/motor_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorControl_Request_motor_control
{
public:
  Init_MotorControl_Request_motor_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::MotorControl_Request motor_control(::lslidar_msgs::srv::MotorControl_Request::_motor_control_type arg)
  {
    msg_.motor_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::MotorControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::MotorControl_Request>()
{
  return lslidar_msgs::srv::builder::Init_MotorControl_Request_motor_control();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_MotorControl_Response_result
{
public:
  Init_MotorControl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::MotorControl_Response result(::lslidar_msgs::srv::MotorControl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::MotorControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::MotorControl_Response>()
{
  return lslidar_msgs::srv::builder::Init_MotorControl_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
