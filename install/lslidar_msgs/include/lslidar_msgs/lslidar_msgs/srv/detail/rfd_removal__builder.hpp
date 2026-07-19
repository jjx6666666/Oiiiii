// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/RfdRemoval.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__RFD_REMOVAL__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__RFD_REMOVAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/rfd_removal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_RfdRemoval_Request_rfd_removal
{
public:
  Init_RfdRemoval_Request_rfd_removal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::RfdRemoval_Request rfd_removal(::lslidar_msgs::srv::RfdRemoval_Request::_rfd_removal_type arg)
  {
    msg_.rfd_removal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::RfdRemoval_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::RfdRemoval_Request>()
{
  return lslidar_msgs::srv::builder::Init_RfdRemoval_Request_rfd_removal();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_RfdRemoval_Response_result
{
public:
  Init_RfdRemoval_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::RfdRemoval_Response result(::lslidar_msgs::srv::RfdRemoval_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::RfdRemoval_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::RfdRemoval_Response>()
{
  return lslidar_msgs::srv::builder::Init_RfdRemoval_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__RFD_REMOVAL__BUILDER_HPP_
