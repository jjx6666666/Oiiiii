// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lslidar_msgs:msg/LslidarInformation.idl
// generated code does not contain a copyright notice

#ifndef LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__STRUCT_H_
#define LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lidar_ip'
// Member 'destination_ip'
// Member 'lidar_mac_address'
// Member 'lidar_serial_number'
// Member 'fpga_board_2_program'
// Member 'fpga_board_3_program'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LslidarInformation in the package lslidar_msgs.
typedef struct lslidar_msgs__msg__LslidarInformation
{
  /// 雷达ip地址
  rosidl_runtime_c__String lidar_ip;
  /// 雷达目的ip地址
  rosidl_runtime_c__String destination_ip;
  /// 雷达 MAC 地址
  rosidl_runtime_c__String lidar_mac_address;
  /// 雷达目的数据端口
  uint16_t msop_port;
  /// 雷达目的设备端口
  uint16_t difop_port;
  /// 雷达序列号
  rosidl_runtime_c__String lidar_serial_number;
  /// FPGA 2号板程序版本
  rosidl_runtime_c__String fpga_board_2_program;
  /// FPGA 3号板程序版本
  rosidl_runtime_c__String fpga_board_3_program;
} lslidar_msgs__msg__LslidarInformation;

// Struct for a sequence of lslidar_msgs__msg__LslidarInformation.
typedef struct lslidar_msgs__msg__LslidarInformation__Sequence
{
  lslidar_msgs__msg__LslidarInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lslidar_msgs__msg__LslidarInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LSLIDAR_MSGS__MSG__DETAIL__LSLIDAR_INFORMATION__STRUCT_H_
