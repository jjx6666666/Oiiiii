// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_msgs:msg/LslidarInformation.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__STRUCT_HPP_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__msg__LslidarInformation __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__msg__LslidarInformation __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LslidarInformation_
{
  using Type = LslidarInformation_<ContainerAllocator>;

  explicit LslidarInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_ip = "";
      this->destination_ip = "";
      this->lidar_mac_address = "";
      this->msop_port = 0;
      this->difop_port = 0;
      this->lidar_serial_number = "";
      this->fpga_board_2_program = "";
      this->fpga_board_3_program = "";
    }
  }

  explicit LslidarInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lidar_ip(_alloc),
    destination_ip(_alloc),
    lidar_mac_address(_alloc),
    lidar_serial_number(_alloc),
    fpga_board_2_program(_alloc),
    fpga_board_3_program(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_ip = "";
      this->destination_ip = "";
      this->lidar_mac_address = "";
      this->msop_port = 0;
      this->difop_port = 0;
      this->lidar_serial_number = "";
      this->fpga_board_2_program = "";
      this->fpga_board_3_program = "";
    }
  }

  // field types and members
  using _lidar_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lidar_ip_type lidar_ip;
  using _destination_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_ip_type destination_ip;
  using _lidar_mac_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lidar_mac_address_type lidar_mac_address;
  using _msop_port_type =
    uint16_t;
  _msop_port_type msop_port;
  using _difop_port_type =
    uint16_t;
  _difop_port_type difop_port;
  using _lidar_serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lidar_serial_number_type lidar_serial_number;
  using _fpga_board_2_program_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fpga_board_2_program_type fpga_board_2_program;
  using _fpga_board_3_program_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fpga_board_3_program_type fpga_board_3_program;

  // setters for named parameter idiom
  Type & set__lidar_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lidar_ip = _arg;
    return *this;
  }
  Type & set__destination_ip(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->destination_ip = _arg;
    return *this;
  }
  Type & set__lidar_mac_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lidar_mac_address = _arg;
    return *this;
  }
  Type & set__msop_port(
    const uint16_t & _arg)
  {
    this->msop_port = _arg;
    return *this;
  }
  Type & set__difop_port(
    const uint16_t & _arg)
  {
    this->difop_port = _arg;
    return *this;
  }
  Type & set__lidar_serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lidar_serial_number = _arg;
    return *this;
  }
  Type & set__fpga_board_2_program(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fpga_board_2_program = _arg;
    return *this;
  }
  Type & set__fpga_board_3_program(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fpga_board_3_program = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_msgs::msg::LslidarInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::msg::LslidarInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::msg::LslidarInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::msg::LslidarInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__msg__LslidarInformation
    std::shared_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__msg__LslidarInformation
    std::shared_ptr<lslidar_msgs::msg::LslidarInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LslidarInformation_ & other) const
  {
    if (this->lidar_ip != other.lidar_ip) {
      return false;
    }
    if (this->destination_ip != other.destination_ip) {
      return false;
    }
    if (this->lidar_mac_address != other.lidar_mac_address) {
      return false;
    }
    if (this->msop_port != other.msop_port) {
      return false;
    }
    if (this->difop_port != other.difop_port) {
      return false;
    }
    if (this->lidar_serial_number != other.lidar_serial_number) {
      return false;
    }
    if (this->fpga_board_2_program != other.fpga_board_2_program) {
      return false;
    }
    if (this->fpga_board_3_program != other.fpga_board_3_program) {
      return false;
    }
    return true;
  }
  bool operator!=(const LslidarInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LslidarInformation_

// alias to use template instance with default allocator
using LslidarInformation =
  lslidar_msgs::msg::LslidarInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__STRUCT_HPP_
