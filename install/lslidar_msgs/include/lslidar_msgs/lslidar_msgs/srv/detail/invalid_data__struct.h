// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_msgs:srv/InvalidData.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__INVALID_DATA__STRUCT_H_
#define LSLIDAR_MSGS__SRV__DETAIL__INVALID_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/InvalidData in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__InvalidData_Request
{
  uint8_t invalid_data;
} lslidar_msgs__srv__InvalidData_Request;

// Struct for a sequence of lslidar_msgs__srv__InvalidData_Request.
typedef struct lslidar_msgs__srv__InvalidData_Request__Sequence
{
  lslidar_msgs__srv__InvalidData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__InvalidData_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/InvalidData in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__InvalidData_Response
{
  bool result;
} lslidar_msgs__srv__InvalidData_Response;

// Struct for a sequence of lslidar_msgs__srv__InvalidData_Response.
typedef struct lslidar_msgs__srv__InvalidData_Response__Sequence
{
  lslidar_msgs__srv__InvalidData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__InvalidData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_MSGS__SRV__DETAIL__INVALID_DATA__STRUCT_H_
