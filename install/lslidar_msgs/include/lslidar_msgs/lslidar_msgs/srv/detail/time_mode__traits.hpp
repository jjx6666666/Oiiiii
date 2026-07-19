// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:srv/TimeMode.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__TRAITS_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_msgs/srv/detail/time_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lslidar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TimeMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_mode
  {
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << ", ";
  }

  // member: ntp_ip
  {
    out << "ntp_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ntp_ip, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << "\n";
  }

  // member: ntp_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ntp_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.ntp_ip, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeMode_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lslidar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_msgs::srv::TimeMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_msgs::srv::TimeMode_Request & msg)
{
  return lslidar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_msgs::srv::TimeMode_Request>()
{
  return "lslidar_msgs::srv::TimeMode_Request";
}

template<>
inline const char * name<lslidar_msgs::srv::TimeMode_Request>()
{
  return "lslidar_msgs/srv/TimeMode_Request";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::TimeMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::TimeMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lslidar_msgs::srv::TimeMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lslidar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TimeMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TimeMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TimeMode_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lslidar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_msgs::srv::TimeMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_msgs::srv::TimeMode_Response & msg)
{
  return lslidar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_msgs::srv::TimeMode_Response>()
{
  return "lslidar_msgs::srv::TimeMode_Response";
}

template<>
inline const char * name<lslidar_msgs::srv::TimeMode_Response>()
{
  return "lslidar_msgs/srv/TimeMode_Response";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::TimeMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::TimeMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::TimeMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::TimeMode>()
{
  return "lslidar_msgs::srv::TimeMode";
}

template<>
inline const char * name<lslidar_msgs::srv::TimeMode>()
{
  return "lslidar_msgs/srv/TimeMode";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::TimeMode>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_msgs::srv::TimeMode_Request>::value &&
    has_fixed_size<lslidar_msgs::srv::TimeMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_msgs::srv::TimeMode>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_msgs::srv::TimeMode_Request>::value &&
    has_bounded_size<lslidar_msgs::srv::TimeMode_Response>::value
  >
{
};

template<>
struct is_service<lslidar_msgs::srv::TimeMode>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_msgs::srv::TimeMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_msgs::srv::TimeMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__TRAITS_HPP_
