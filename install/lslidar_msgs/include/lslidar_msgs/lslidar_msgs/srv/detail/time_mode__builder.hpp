// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/TimeMode.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/time_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_TimeMode_Request_ntp_ip
{
public:
  explicit Init_TimeMode_Request_ntp_ip(::lslidar_msgs::srv::TimeMode_Request & msg)
  : msg_(msg)
  {}
  ::lslidar_msgs::srv::TimeMode_Request ntp_ip(::lslidar_msgs::srv::TimeMode_Request::_ntp_ip_type arg)
  {
    msg_.ntp_ip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::TimeMode_Request msg_;
};

class Init_TimeMode_Request_time_mode
{
public:
  Init_TimeMode_Request_time_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeMode_Request_ntp_ip time_mode(::lslidar_msgs::srv::TimeMode_Request::_time_mode_type arg)
  {
    msg_.time_mode = std::move(arg);
    return Init_TimeMode_Request_ntp_ip(msg_);
  }

private:
  ::lslidar_msgs::srv::TimeMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::TimeMode_Request>()
{
  return lslidar_msgs::srv::builder::Init_TimeMode_Request_time_mode();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_TimeMode_Response_result
{
public:
  Init_TimeMode_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::TimeMode_Response result(::lslidar_msgs::srv::TimeMode_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::TimeMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::TimeMode_Response>()
{
  return lslidar_msgs::srv::builder::Init_TimeMode_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__BUILDER_HPP_
