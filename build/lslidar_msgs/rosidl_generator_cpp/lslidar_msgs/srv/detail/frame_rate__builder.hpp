// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/FrameRate.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/frame_rate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_FrameRate_Request_frame_rate
{
public:
  Init_FrameRate_Request_frame_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::FrameRate_Request frame_rate(::lslidar_msgs::srv::FrameRate_Request::_frame_rate_type arg)
  {
    msg_.frame_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::FrameRate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::FrameRate_Request>()
{
  return lslidar_msgs::srv::builder::Init_FrameRate_Request_frame_rate();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_FrameRate_Response_result
{
public:
  Init_FrameRate_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::FrameRate_Response result(::lslidar_msgs::srv::FrameRate_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::FrameRate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::FrameRate_Response>()
{
  return lslidar_msgs::srv::builder::Init_FrameRate_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__BUILDER_HPP_
