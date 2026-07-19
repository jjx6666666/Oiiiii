// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/IpAndPort.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__IP_AND_PORT__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__IP_AND_PORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/ip_and_port__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_IpAndPort_Request_dev_port
{
public:
  explicit Init_IpAndPort_Request_dev_port(::lslidar_msgs::srv::IpAndPort_Request & msg)
  : msg_(msg)
  {}
  ::lslidar_msgs::srv::IpAndPort_Request dev_port(::lslidar_msgs::srv::IpAndPort_Request::_dev_port_type arg)
  {
    msg_.dev_port = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::IpAndPort_Request msg_;
};

class Init_IpAndPort_Request_data_port
{
public:
  explicit Init_IpAndPort_Request_data_port(::lslidar_msgs::srv::IpAndPort_Request & msg)
  : msg_(msg)
  {}
  Init_IpAndPort_Request_dev_port data_port(::lslidar_msgs::srv::IpAndPort_Request::_data_port_type arg)
  {
    msg_.data_port = std::move(arg);
    return Init_IpAndPort_Request_dev_port(msg_);
  }

private:
  ::lslidar_msgs::srv::IpAndPort_Request msg_;
};

class Init_IpAndPort_Request_destination_ip
{
public:
  explicit Init_IpAndPort_Request_destination_ip(::lslidar_msgs::srv::IpAndPort_Request & msg)
  : msg_(msg)
  {}
  Init_IpAndPort_Request_data_port destination_ip(::lslidar_msgs::srv::IpAndPort_Request::_destination_ip_type arg)
  {
    msg_.destination_ip = std::move(arg);
    return Init_IpAndPort_Request_data_port(msg_);
  }

private:
  ::lslidar_msgs::srv::IpAndPort_Request msg_;
};

class Init_IpAndPort_Request_lidar_ip
{
public:
  Init_IpAndPort_Request_lidar_ip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IpAndPort_Request_destination_ip lidar_ip(::lslidar_msgs::srv::IpAndPort_Request::_lidar_ip_type arg)
  {
    msg_.lidar_ip = std::move(arg);
    return Init_IpAndPort_Request_destination_ip(msg_);
  }

private:
  ::lslidar_msgs::srv::IpAndPort_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::IpAndPort_Request>()
{
  return lslidar_msgs::srv::builder::Init_IpAndPort_Request_lidar_ip();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_IpAndPort_Response_result
{
public:
  Init_IpAndPort_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::IpAndPort_Response result(::lslidar_msgs::srv::IpAndPort_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::IpAndPort_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::IpAndPort_Response>()
{
  return lslidar_msgs::srv::builder::Init_IpAndPort_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__IP_AND_PORT__BUILDER_HPP_
