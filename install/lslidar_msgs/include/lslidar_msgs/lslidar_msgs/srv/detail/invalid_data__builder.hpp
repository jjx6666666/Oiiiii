// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/InvalidData.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__INVALID_DATA__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__INVALID_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/invalid_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_InvalidData_Request_invalid_data
{
public:
  Init_InvalidData_Request_invalid_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::InvalidData_Request invalid_data(::lslidar_msgs::srv::InvalidData_Request::_invalid_data_type arg)
  {
    msg_.invalid_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::InvalidData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::InvalidData_Request>()
{
  return lslidar_msgs::srv::builder::Init_InvalidData_Request_invalid_data();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_InvalidData_Response_result
{
public:
  Init_InvalidData_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::InvalidData_Response result(::lslidar_msgs::srv::InvalidData_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::InvalidData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::InvalidData_Response>()
{
  return lslidar_msgs::srv::builder::Init_InvalidData_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__INVALID_DATA__BUILDER_HPP_
