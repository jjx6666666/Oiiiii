// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_msgs:srv/TimeMode.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__STRUCT_H_
#define LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ntp_ip'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TimeMode in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__TimeMode_Request
{
  uint8_t time_mode;
  rosidl_runtime_c__String ntp_ip;
} lslidar_msgs__srv__TimeMode_Request;

// Struct for a sequence of lslidar_msgs__srv__TimeMode_Request.
typedef struct lslidar_msgs__srv__TimeMode_Request__Sequence
{
  lslidar_msgs__srv__TimeMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__TimeMode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TimeMode in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__TimeMode_Response
{
  bool result;
} lslidar_msgs__srv__TimeMode_Response;

// Struct for a sequence of lslidar_msgs__srv__TimeMode_Response.
typedef struct lslidar_msgs__srv__TimeMode_Response__Sequence
{
  lslidar_msgs__srv__TimeMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__TimeMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_MSGS__SRV__DETAIL__TIME_MODE__STRUCT_H_
