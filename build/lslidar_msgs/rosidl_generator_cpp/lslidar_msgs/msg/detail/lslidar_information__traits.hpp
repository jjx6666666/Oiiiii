// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lslidar_msgs:msg/LslidarInformation.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__TRAITS_HPP_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lslidar_msgs/msg/detail/lslidar_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lslidar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LslidarInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: lidar_ip
  {
    out << "lidar_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_ip, out);
    out << ", ";
  }

  // member: destination_ip
  {
    out << "destination_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_ip, out);
    out << ", ";
  }

  // member: lidar_mac_address
  {
    out << "lidar_mac_address: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_mac_address, out);
    out << ", ";
  }

  // member: msop_port
  {
    out << "msop_port: ";
    rosidl_generator_traits::value_to_yaml(msg.msop_port, out);
    out << ", ";
  }

  // member: difop_port
  {
    out << "difop_port: ";
    rosidl_generator_traits::value_to_yaml(msg.difop_port, out);
    out << ", ";
  }

  // member: lidar_serial_number
  {
    out << "lidar_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_serial_number, out);
    out << ", ";
  }

  // member: fpga_board_2_program
  {
    out << "fpga_board_2_program: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_board_2_program, out);
    out << ", ";
  }

  // member: fpga_board_3_program
  {
    out << "fpga_board_3_program: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_board_3_program, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LslidarInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lidar_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_ip, out);
    out << "\n";
  }

  // member: destination_ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_ip: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_ip, out);
    out << "\n";
  }

  // member: lidar_mac_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_mac_address: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_mac_address, out);
    out << "\n";
  }

  // member: msop_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msop_port: ";
    rosidl_generator_traits::value_to_yaml(msg.msop_port, out);
    out << "\n";
  }

  // member: difop_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "difop_port: ";
    rosidl_generator_traits::value_to_yaml(msg.difop_port, out);
    out << "\n";
  }

  // member: lidar_serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_serial_number, out);
    out << "\n";
  }

  // member: fpga_board_2_program
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpga_board_2_program: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_board_2_program, out);
    out << "\n";
  }

  // member: fpga_board_3_program
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fpga_board_3_program: ";
    rosidl_generator_traits::value_to_yaml(msg.fpga_board_3_program, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LslidarInformation & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lslidar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lslidar_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lslidar_msgs::msg::LslidarInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  lslidar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lslidar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lslidar_msgs::msg::LslidarInformation & msg)
{
  return lslidar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lslidar_msgs::msg::LslidarInformation>()
{
  return "lslidar_msgs::msg::LslidarInformation";
}

template<>
inline const char * name<lslidar_msgs::msg::LslidarInformation>()
{
  return "lslidar_msgs/msg/LslidarInformation";
}

template<>
struct has_fixed_size<lslidar_msgs::msg::LslidarInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lslidar_msgs::msg::LslidarInformation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lslidar_msgs::msg::LslidarInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__TRAITS_HPP_
