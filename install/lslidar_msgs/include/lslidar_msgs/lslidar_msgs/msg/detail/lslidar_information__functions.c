// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lslidar_msgs:msg/LslidarInformation.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/msg/detail/lslidar_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lidar_ip`
// Member `destination_ip`
// Member `lidar_mac_address`
// Member `lidar_serial_number`
// Member `fpga_board_2_program`
// Member `fpga_board_3_program`
#include "rosidl_runtime_c/string_functions.h"

bool
lslidar_msgs__msg__LslidarInformation__init(lslidar_msgs__msg__LslidarInformation * msg)
{
  if (!msg) {
    return false;
  }
  // lidar_ip
  if (!rosidl_runtime_c__String__init(&msg->lidar_ip)) {
    lslidar_msgs__msg__LslidarInformation__fini(msg);
    return false;
  }
  // destination_ip
  if (!rosidl_runtime_c__String__init(&msg->destination_ip)) {
    lslidar_msgs__msg__LslidarInformation__fini(msg);
    return false;
  }
  // lidar_mac_address
  if (!rosidl_runtime_c__String__init(&msg->lidar_mac_address)) {
    lslidar_msgs__msg__LslidarInformation__fini(msg);
    return false;
  }
  // msop_port
  // difop_port
  // lidar_serial_number
  if (!rosidl_runtime_c__String__init(&msg->lidar_serial_number)) {
    lslidar_msgs__msg__LslidarInformation__fini(msg);
    return false;
  }
  // fpga_board_2_program
  if (!rosidl_runtime_c__String__init(&msg->fpga_board_2_program)) {
    lslidar_msgs__msg__LslidarInformation__fini(msg);
    return false;
  }
  // fpga_board_3_program
  if (!rosidl_runtime_c__String__init(&msg->fpga_board_3_program)) {
    lslidar_msgs__msg__LslidarInformation__fini(msg);
    return false;
  }
  return true;
}

void
lslidar_msgs__msg__LslidarInformation__fini(lslidar_msgs__msg__LslidarInformation * msg)
{
  if (!msg) {
    return;
  }
  // lidar_ip
  rosidl_runtime_c__String__fini(&msg->lidar_ip);
  // destination_ip
  rosidl_runtime_c__String__fini(&msg->destination_ip);
  // lidar_mac_address
  rosidl_runtime_c__String__fini(&msg->lidar_mac_address);
  // msop_port
  // difop_port
  // lidar_serial_number
  rosidl_runtime_c__String__fini(&msg->lidar_serial_number);
  // fpga_board_2_program
  rosidl_runtime_c__String__fini(&msg->fpga_board_2_program);
  // fpga_board_3_program
  rosidl_runtime_c__String__fini(&msg->fpga_board_3_program);
}

bool
lslidar_msgs__msg__LslidarInformation__are_equal(const lslidar_msgs__msg__LslidarInformation * lhs, const lslidar_msgs__msg__LslidarInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lidar_ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lidar_ip), &(rhs->lidar_ip)))
  {
    return false;
  }
  // destination_ip
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination_ip), &(rhs->destination_ip)))
  {
    return false;
  }
  // lidar_mac_address
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lidar_mac_address), &(rhs->lidar_mac_address)))
  {
    return false;
  }
  // msop_port
  if (lhs->msop_port != rhs->msop_port) {
    return false;
  }
  // difop_port
  if (lhs->difop_port != rhs->difop_port) {
    return false;
  }
  // lidar_serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lidar_serial_number), &(rhs->lidar_serial_number)))
  {
    return false;
  }
  // fpga_board_2_program
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fpga_board_2_program), &(rhs->fpga_board_2_program)))
  {
    return false;
  }
  // fpga_board_3_program
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fpga_board_3_program), &(rhs->fpga_board_3_program)))
  {
    return false;
  }
  return true;
}

bool
lslidar_msgs__msg__LslidarInformation__copy(
  const lslidar_msgs__msg__LslidarInformation * input,
  lslidar_msgs__msg__LslidarInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // lidar_ip
  if (!rosidl_runtime_c__String__copy(
      &(input->lidar_ip), &(output->lidar_ip)))
  {
    return false;
  }
  // destination_ip
  if (!rosidl_runtime_c__String__copy(
      &(input->destination_ip), &(output->destination_ip)))
  {
    return false;
  }
  // lidar_mac_address
  if (!rosidl_runtime_c__String__copy(
      &(input->lidar_mac_address), &(output->lidar_mac_address)))
  {
    return false;
  }
  // msop_port
  output->msop_port = input->msop_port;
  // difop_port
  output->difop_port = input->difop_port;
  // lidar_serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->lidar_serial_number), &(output->lidar_serial_number)))
  {
    return false;
  }
  // fpga_board_2_program
  if (!rosidl_runtime_c__String__copy(
      &(input->fpga_board_2_program), &(output->fpga_board_2_program)))
  {
    return false;
  }
  // fpga_board_3_program
  if (!rosidl_runtime_c__String__copy(
      &(input->fpga_board_3_program), &(output->fpga_board_3_program)))
  {
    return false;
  }
  return true;
}

lslidar_msgs__msg__LslidarInformation *
lslidar_msgs__msg__LslidarInformation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__msg__LslidarInformation * msg = (lslidar_msgs__msg__LslidarInformation *)allocator.allocate(sizeof(lslidar_msgs__msg__LslidarInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_msgs__msg__LslidarInformation));
  bool success = lslidar_msgs__msg__LslidarInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_msgs__msg__LslidarInformation__destroy(lslidar_msgs__msg__LslidarInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_msgs__msg__LslidarInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_msgs__msg__LslidarInformation__Sequence__init(lslidar_msgs__msg__LslidarInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__msg__LslidarInformation * data = NULL;

  if (size) {
    data = (lslidar_msgs__msg__LslidarInformation *)allocator.zero_allocate(size, sizeof(lslidar_msgs__msg__LslidarInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_msgs__msg__LslidarInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_msgs__msg__LslidarInformation__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lslidar_msgs__msg__LslidarInformation__Sequence__fini(lslidar_msgs__msg__LslidarInformation__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lslidar_msgs__msg__LslidarInformation__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lslidar_msgs__msg__LslidarInformation__Sequence *
lslidar_msgs__msg__LslidarInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__msg__LslidarInformation__Sequence * array = (lslidar_msgs__msg__LslidarInformation__Sequence *)allocator.allocate(sizeof(lslidar_msgs__msg__LslidarInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_msgs__msg__LslidarInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_msgs__msg__LslidarInformation__Sequence__destroy(lslidar_msgs__msg__LslidarInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_msgs__msg__LslidarInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_msgs__msg__LslidarInformation__Sequence__are_equal(const lslidar_msgs__msg__LslidarInformation__Sequence * lhs, const lslidar_msgs__msg__LslidarInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_msgs__msg__LslidarInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_msgs__msg__LslidarInformation__Sequence__copy(
  const lslidar_msgs__msg__LslidarInformation__Sequence * input,
  lslidar_msgs__msg__LslidarInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_msgs__msg__LslidarInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_msgs__msg__LslidarInformation * data =
      (lslidar_msgs__msg__LslidarInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_msgs__msg__LslidarInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_msgs__msg__LslidarInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_msgs__msg__LslidarInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
