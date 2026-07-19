// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_msgs:srv/FrameRate.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__STRUCT_H_
#define LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FrameRate in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__FrameRate_Request
{
  uint8_t frame_rate;
} lslidar_msgs__srv__FrameRate_Request;

// Struct for a sequence of lslidar_msgs__srv__FrameRate_Request.
typedef struct lslidar_msgs__srv__FrameRate_Request__Sequence
{
  lslidar_msgs__srv__FrameRate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__FrameRate_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FrameRate in the package lslidar_msgs.
typedef struct lslidar_msgs__srv__FrameRate_Response
{
  bool result;
} lslidar_msgs__srv__FrameRate_Response;

// Struct for a sequence of lslidar_msgs__srv__FrameRate_Response.
typedef struct lslidar_msgs__srv__FrameRate_Response__Sequence
{
  lslidar_msgs__srv__FrameRate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__srv__FrameRate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_MSGS__SRV__DETAIL__FRAME_RATE__STRUCT_H_
