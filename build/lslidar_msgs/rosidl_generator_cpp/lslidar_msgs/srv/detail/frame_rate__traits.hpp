// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:srv/FrameRate.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__TRAITS_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_msgs/srv/detail/frame_rate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lslidar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FrameRate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_rate
  {
    out << "frame_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrameRate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrameRate_Request & msg, bool use_flow_style = false)
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
  const lslidar_msgs::srv::FrameRate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_msgs::srv::FrameRate_Request & msg)
{
  return lslidar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_msgs::srv::FrameRate_Request>()
{
  return "lslidar_msgs::srv::FrameRate_Request";
}

template<>
inline const char * name<lslidar_msgs::srv::FrameRate_Request>()
{
  return "lslidar_msgs/srv/FrameRate_Request";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::FrameRate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::FrameRate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::FrameRate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lslidar_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FrameRate_Response & msg,
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
  const FrameRate_Response & msg,
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

inline std::string to_yaml(const FrameRate_Response & msg, bool use_flow_style = false)
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
  const lslidar_msgs::srv::FrameRate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_msgs::srv::FrameRate_Response & msg)
{
  return lslidar_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_msgs::srv::FrameRate_Response>()
{
  return "lslidar_msgs::srv::FrameRate_Response";
}

template<>
inline const char * name<lslidar_msgs::srv::FrameRate_Response>()
{
  return "lslidar_msgs/srv/FrameRate_Response";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::FrameRate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lslidar_msgs::srv::FrameRate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lslidar_msgs::srv::FrameRate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lslidar_msgs::srv::FrameRate>()
{
  return "lslidar_msgs::srv::FrameRate";
}

template<>
inline const char * name<lslidar_msgs::srv::FrameRate>()
{
  return "lslidar_msgs/srv/FrameRate";
}

template<>
struct has_fixed_size<lslidar_msgs::srv::FrameRate>
  : std::integral_constant<
    bool,
    has_fixed_size<lslidar_msgs::srv::FrameRate_Request>::value &&
    has_fixed_size<lslidar_msgs::srv::FrameRate_Response>::value
  >
{
};

template<>
struct has_bounded_size<lslidar_msgs::srv::FrameRate>
  : std::integral_constant<
    bool,
    has_bounded_size<lslidar_msgs::srv::FrameRate_Request>::value &&
    has_bounded_size<lslidar_msgs::srv::FrameRate_Response>::value
  >
{
};

template<>
struct is_service<lslidar_msgs::srv::FrameRate>
  : std::true_type
{
};

template<>
struct is_service_request<lslidar_msgs::srv::FrameRate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lslidar_msgs::srv::FrameRate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__TRAITS_HPP_
