// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lslidar_msgs:srv/RfdRemoval.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__RFD_REMOVAL__STRUCT_HPP_
#define LSLIDAR_MSGS__SRV__DETAIL__RFD_REMOVAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__RfdRemoval_Request __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__RfdRemoval_Request __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RfdRemoval_Request_
{
  using Type = RfdRemoval_Request_<ContainerAllocator>;

  explicit RfdRemoval_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rfd_removal = 0;
    }
  }

  explicit RfdRemoval_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rfd_removal = 0;
    }
  }

  // field types and members
  using _rfd_removal_type =
    uint8_t;
  _rfd_removal_type rfd_removal;

  // setters for named parameter idiom
  Type & set__rfd_removal(
    const uint8_t & _arg)
  {
    this->rfd_removal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__RfdRemoval_Request
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__RfdRemoval_Request
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RfdRemoval_Request_ & other) const
  {
    if (this->rfd_removal != other.rfd_removal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RfdRemoval_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RfdRemoval_Request_

// alias to use template instance with default allocator
using RfdRemoval_Request =
  lslidar_msgs::srv::RfdRemoval_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs


#ifndef _WIN32
# define DEPRECATED__lslidar_msgs__srv__RfdRemoval_Response __attribute__((deprecated))
#else
# define DEPRECATED__lslidar_msgs__srv__RfdRemoval_Response __declspec(deprecated)
#endif

namespace lslidar_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RfdRemoval_Response_
{
  using Type = RfdRemoval_Response_<ContainerAllocator>;

  explicit RfdRemoval_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit RfdRemoval_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lslidar_msgs__srv__RfdRemoval_Response
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lslidar_msgs__srv__RfdRemoval_Response
    std::shared_ptr<lslidar_msgs::srv::RfdRemoval_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RfdRemoval_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RfdRemoval_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RfdRemoval_Response_

// alias to use template instance with default allocator
using RfdRemoval_Response =
  lslidar_msgs::srv::RfdRemoval_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lslidar_msgs

namespace lslidar_msgs
{

namespace srv
{

struct RfdRemoval
{
  using Request = lslidar_msgs::srv::RfdRemoval_Request;
  using Response = lslidar_msgs::srv::RfdRemoval_Response;
};

}  // namespace srv

}  // namespace lslidar_msgs

#endif  // LSLIDAR_MSGS__SRV__DETAIL__RFD_REMOVAL__STRUCT_HPP_
