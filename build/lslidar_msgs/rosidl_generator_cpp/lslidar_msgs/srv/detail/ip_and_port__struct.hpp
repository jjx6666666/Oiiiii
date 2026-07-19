// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_msgs:srv/IpAndPort.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__IP_AND_PORT__STRUCT_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__IP_AND_PORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__IpAndPort_Request __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__IpAndPort_Request __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IpAndPort_Request_
{
  using Type = IpAndPort_Request_<ContainerAllocator>;

  explicit IpAndPort_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_ip = "";
      this->destination_ip = "";
      this->data_port = 0;
      this->dev_port = 0;
    }
  }

  explicit IpAndPort_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lidar_ip(_alloc),
    destination_ip(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_ip = "";
      this->destination_ip = "";
      this->data_port = 0;
      this->dev_port = 0;
    }
  }

  // field types and members
  using _lidar_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lidar_ip_type lidar_ip;
  using _destination_ip_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _destination_ip_type destination_ip;
  using _data_port_type =
    uint16_t;
  _data_port_type data_port;
  using _dev_port_type =
    uint16_t;
  _dev_port_type dev_port;

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
  Type & set__data_port(
    const uint16_t & _arg)
  {
    this->data_port = _arg;
    return *this;
  }
  Type & set__dev_port(
    const uint16_t & _arg)
  {
    this->dev_port = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__IpAndPort_Request
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__IpAndPort_Request
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IpAndPort_Request_ & other) const
  {
    if (this->lidar_ip != other.lidar_ip) {
      return false;
    }
    if (this->destination_ip != other.destination_ip) {
      return false;
    }
    if (this->data_port != other.data_port) {
      return false;
    }
    if (this->dev_port != other.dev_port) {
      return false;
    }
    return true;
  }
  bool operator!=(const IpAndPort_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IpAndPort_Request_

// alias to use template instance with default allocator
using IpAndPort_Request =
  lslidar_msgs::srv::IpAndPort_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__IpAndPort_Response __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__IpAndPort_Response __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IpAndPort_Response_
{
  using Type = IpAndPort_Response_<ContainerAllocator>;

  explicit IpAndPort_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit IpAndPort_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__IpAndPort_Response
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__IpAndPort_Response
    std::shared_ptr<lslidar_msgs::srv::IpAndPort_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IpAndPort_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const IpAndPort_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IpAndPort_Response_

// alias to use template instance with default allocator
using IpAndPort_Response =
  lslidar_msgs::srv::IpAndPort_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs

namespace lslidar_msgs
{

namespace srv
{

struct IpAndPort
{
  using Request = lslidar_msgs::srv::IpAndPort_Request;
  using Response = lslidar_msgs::srv::IpAndPort_Response;
};

}  // namespace srv

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__IP_AND_PORT__STRUCT_HPP_
