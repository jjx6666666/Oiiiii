// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/StandbyMode.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__STANDBY_MODE__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__STANDBY_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/standby_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_StandbyMode_Request_standby_mode
{
public:
  Init_StandbyMode_Request_standby_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::StandbyMode_Request standby_mode(::lslidar_msgs::srv::StandbyMode_Request::_standby_mode_type arg)
  {
    msg_.standby_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::StandbyMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::StandbyMode_Request>()
{
  return lslidar_msgs::srv::builder::Init_StandbyMode_Request_standby_mode();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_StandbyMode_Response_result
{
public:
  Init_StandbyMode_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::StandbyMode_Response result(::lslidar_msgs::srv::StandbyMode_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::StandbyMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::StandbyMode_Response>()
{
  return lslidar_msgs::srv::builder::Init_StandbyMode_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__STANDBY_MODE__BUILDER_HPP_
