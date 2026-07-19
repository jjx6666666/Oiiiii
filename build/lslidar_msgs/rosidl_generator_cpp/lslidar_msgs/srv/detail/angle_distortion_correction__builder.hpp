// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lslidar_msgs:srv/AngleDistortionCorrection.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__ANGLE_DISTORTION_CORRECTION__BUILDER_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__ANGLE_DISTORTION_CORRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lslidar_msgs/srv/detail/angle_distortion_correction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_AngleDistortionCorrection_Request_angle_distortion_correction
{
public:
  Init_AngleDistortionCorrection_Request_angle_distortion_correction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::AngleDistortionCorrection_Request angle_distortion_correction(::lslidar_msgs::srv::AngleDistortionCorrection_Request::_angle_distortion_correction_type arg)
  {
    msg_.angle_distortion_correction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::AngleDistortionCorrection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::AngleDistortionCorrection_Request>()
{
  return lslidar_msgs::srv::builder::Init_AngleDistortionCorrection_Request_angle_distortion_correction();
}

}  // namespace lslidar_msgs


namespace lslidar_msgs
{

namespace srv
{

namespace builder
{

class Init_AngleDistortionCorrection_Response_result
{
public:
  Init_AngleDistortionCorrection_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lslidar_msgs::srv::AngleDistortionCorrection_Response result(::lslidar_msgs::srv::AngleDistortionCorrection_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lslidar_msgs::srv::AngleDistortionCorrection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lslidar_msgs::srv::AngleDistortionCorrection_Response>()
{
  return lslidar_msgs::srv::builder::Init_AngleDistortionCorrection_Response_result();
}

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__ANGLE_DISTORTION_CORRECTION__BUILDER_HPP_
