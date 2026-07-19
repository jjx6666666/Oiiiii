// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_msgs:srv/PowerControl.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__POWER_CONTROL__STRUCT_H_
#define LSLIDAR_MSGS__SRV__DETAIL__POWER_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PowerControl in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__PowerControl_Request
{
  uint8_t power_control;
} lslidar_msgs__srv__PowerControl_Request;

// Struct for a sequence of lslidar_msgs__srv__PowerControl_Request.
typedef struct lslidar_msgs__srv__PowerControl_Request__Sequence
{
  lslidar_msgs__srv__PowerControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__PowerControl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PowerControl in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__PowerControl_Response
{
  bool result;
} lslidar_msgs__srv__PowerControl_Response;

// Struct for a sequence of lslidar_msgs__srv__PowerControl_Response.
typedef struct lslidar_msgs__srv__PowerControl_Response__Sequence
{
  lslidar_msgs__srv__PowerControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__PowerControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_MSGS__SRV__DETAIL__POWER_CONTROL__STRUCT_H_
