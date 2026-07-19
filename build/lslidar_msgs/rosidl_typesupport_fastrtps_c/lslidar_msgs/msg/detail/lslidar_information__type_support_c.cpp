// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lslidar_msgs:msg/LslidarInformation.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/msg/detail/lslidar_information__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lslidar_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lslidar_msgs/msg/detail/lslidar_information__struct.h"
#include "lslidar_msgs/msg/detail/lslidar_information__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // destination_ip, fpga_board_2_program, fpga_board_3_program, lidar_ip, lidar_mac_address, lidar_serial_number
#include "rosidl_runtime_c/string_functions.h"  // destination_ip, fpga_board_2_program, fpga_board_3_program, lidar_ip, lidar_mac_address, lidar_serial_number

// forward declare type support functions


using _LslidarInformation__ros_msg_type = lslidar_msgs__msg__LslidarInformation;

static bool _LslidarInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LslidarInformation__ros_msg_type * ros_message = static_cast<const _LslidarInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: lidar_ip
  {
    const rosidl_runtime_c__String * str = &ros_message->lidar_ip;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: destination_ip
  {
    const rosidl_runtime_c__String * str = &ros_message->destination_ip;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lidar_mac_address
  {
    const rosidl_runtime_c__String * str = &ros_message->lidar_mac_address;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: msop_port
  {
    cdr << ros_message->msop_port;
  }

  // Field name: difop_port
  {
    cdr << ros_message->difop_port;
  }

  // Field name: lidar_serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->lidar_serial_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: fpga_board_2_program
  {
    const rosidl_runtime_c__String * str = &ros_message->fpga_board_2_program;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: fpga_board_3_program
  {
    const rosidl_runtime_c__String * str = &ros_message->fpga_board_3_program;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _LslidarInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LslidarInformation__ros_msg_type * ros_message = static_cast<_LslidarInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: lidar_ip
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lidar_ip.data) {
      rosidl_runtime_c__String__init(&ros_message->lidar_ip);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lidar_ip,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lidar_ip'\n");
      return false;
    }
  }

  // Field name: destination_ip
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->destination_ip.data) {
      rosidl_runtime_c__String__init(&ros_message->destination_ip);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->destination_ip,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'destination_ip'\n");
      return false;
    }
  }

  // Field name: lidar_mac_address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lidar_mac_address.data) {
      rosidl_runtime_c__String__init(&ros_message->lidar_mac_address);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lidar_mac_address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lidar_mac_address'\n");
      return false;
    }
  }

  // Field name: msop_port
  {
    cdr >> ros_message->msop_port;
  }

  // Field name: difop_port
  {
    cdr >> ros_message->difop_port;
  }

  // Field name: lidar_serial_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->lidar_serial_number.data) {
      rosidl_runtime_c__String__init(&ros_message->lidar_serial_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->lidar_serial_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'lidar_serial_number'\n");
      return false;
    }
  }

  // Field name: fpga_board_2_program
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->fpga_board_2_program.data) {
      rosidl_runtime_c__String__init(&ros_message->fpga_board_2_program);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->fpga_board_2_program,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'fpga_board_2_program'\n");
      return false;
    }
  }

  // Field name: fpga_board_3_program
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->fpga_board_3_program.data) {
      rosidl_runtime_c__String__init(&ros_message->fpga_board_3_program);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->fpga_board_3_program,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'fpga_board_3_program'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t get_serialized_size_lslidar_msgs__msg__LslidarInformation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LslidarInformation__ros_msg_type * ros_message = static_cast<const _LslidarInformation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lidar_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lidar_ip.size + 1);
  // field.name destination_ip
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->destination_ip.size + 1);
  // field.name lidar_mac_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lidar_mac_address.size + 1);
  // field.name msop_port
  {
    size_t item_size = sizeof(ros_message->msop_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name difop_port
  {
    size_t item_size = sizeof(ros_message->difop_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lidar_serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->lidar_serial_number.size + 1);
  // field.name fpga_board_2_program
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fpga_board_2_program.size + 1);
  // field.name fpga_board_3_program
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fpga_board_3_program.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LslidarInformation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lslidar_msgs__msg__LslidarInformation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lslidar_msgs
size_t max_serialized_size_lslidar_msgs__msg__LslidarInformation(
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

  // member: lidar_ip
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
  // member: destination_ip
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
  // member: lidar_mac_address
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
  // member: msop_port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: difop_port
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: lidar_serial_number
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
  // member: fpga_board_2_program
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
  // member: fpga_board_3_program
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
    using DataType = lslidar_msgs__msg__LslidarInformation;
    is_plain =
      (
      offsetof(DataType, fpga_board_3_program) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LslidarInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lslidar_msgs__msg__LslidarInformation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LslidarInformation = {
  "lslidar_msgs::msg",
  "LslidarInformation",
  _LslidarInformation__cdr_serialize,
  _LslidarInformation__cdr_deserialize,
  _LslidarInformation__get_serialized_size,
  _LslidarInformation__max_serialized_size
};

static rosidl_message_type_support_t _LslidarInformation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LslidarInformation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lslidar_msgs, msg, LslidarInformation)() {
  return &_LslidarInformation__type_support;
}

#if defined(__cplusplus)
}
#endif
