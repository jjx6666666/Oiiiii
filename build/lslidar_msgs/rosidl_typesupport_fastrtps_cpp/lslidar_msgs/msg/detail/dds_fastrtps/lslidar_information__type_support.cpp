// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lslidar_msgs:msg/LslidarInformation.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/msg/detail/lslidar_information__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lslidar_msgs/msg/detail/lslidar_information__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace lslidar_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_serialize(
  const lslidar_msgs::msg::LslidarInformation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lidar_ip
  cdr << ros_message.lidar_ip;
  // Member: destination_ip
  cdr << ros_message.destination_ip;
  // Member: lidar_mac_address
  cdr << ros_message.lidar_mac_address;
  // Member: msop_port
  cdr << ros_message.msop_port;
  // Member: difop_port
  cdr << ros_message.difop_port;
  // Member: lidar_serial_number
  cdr << ros_message.lidar_serial_number;
  // Member: fpga_board_2_program
  cdr << ros_message.fpga_board_2_program;
  // Member: fpga_board_3_program
  cdr << ros_message.fpga_board_3_program;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lslidar_msgs::msg::LslidarInformation & ros_message)
{
  // Member: lidar_ip
  cdr >> ros_message.lidar_ip;

  // Member: destination_ip
  cdr >> ros_message.destination_ip;

  // Member: lidar_mac_address
  cdr >> ros_message.lidar_mac_address;

  // Member: msop_port
  cdr >> ros_message.msop_port;

  // Member: difop_port
  cdr >> ros_message.difop_port;

  // Member: lidar_serial_number
  cdr >> ros_message.lidar_serial_number;

  // Member: fpga_board_2_program
  cdr >> ros_message.fpga_board_2_program;

  // Member: fpga_board_3_program
  cdr >> ros_message.fpga_board_3_program;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
get_serialized_size(
  const lslidar_msgs::msg::LslidarInformation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lidar_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.lidar_ip.size() + 1);
  // Member: destination_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.destination_ip.size() + 1);
  // Member: lidar_mac_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.lidar_mac_address.size() + 1);
  // Member: msop_port
  {
    size_t item_size = sizeof(ros_message.msop_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: difop_port
  {
    size_t item_size = sizeof(ros_message.difop_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lidar_serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.lidar_serial_number.size() + 1);
  // Member: fpga_board_2_program
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.fpga_board_2_program.size() + 1);
  // Member: fpga_board_3_program
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.fpga_board_3_program.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lslidar_msgs
max_serialized_size_LslidarInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: lidar_ip
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: destination_ip
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: lidar_mac_address
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: msop_port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: difop_port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: lidar_serial_number
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: fpga_board_2_program
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: fpga_board_3_program
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lslidar_msgs::msg::LslidarInformation;
    is_plain =
      (
      offsetof(DataType, fpga_board_3_program) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LslidarInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lslidar_msgs::msg::LslidarInformation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LslidarInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lslidar_msgs::msg::LslidarInformation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LslidarInformation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lslidar_msgs::msg::LslidarInformation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LslidarInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LslidarInformation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LslidarInformation__callbacks = {
  "lslidar_msgs::msg",
  "LslidarInformation",
  _LslidarInformation__cdr_serialize,
  _LslidarInformation__cdr_deserialize,
  _LslidarInformation__get_serialized_size,
  _LslidarInformation__max_serialized_size
};

static rosidl_message_type_support_t _LslidarInformation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LslidarInformation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lslidar_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lslidar_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lslidar_msgs::msg::LslidarInformation>()
{
  return &lslidar_msgs::msg::typesupport_fastrtps_cpp::_LslidarInformation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lslidar_msgs, msg, LslidarInformation)() {
  return &lslidar_msgs::msg::typesupport_fastrtps_cpp::_LslidarInformation__handle;
}

#ifdef __cplusplus
}
#endif
