// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lslidar_msgs:srv/MotorSpeed.idl
// generated code does not contain a copyright notice
#include "lslidar_msgs/srv/detail/motor_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
lslidar_msgs__srv__MotorSpeed_Request__init(lslidar_msgs__srv__MotorSpeed_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motor_speed
  return true;
}

void
lslidar_msgs__srv__MotorSpeed_Request__fini(lslidar_msgs__srv__MotorSpeed_Request * msg)
{
  if (!msg) {
    return;
  }
  // motor_speed
}

bool
lslidar_msgs__srv__MotorSpeed_Request__are_equal(const lslidar_msgs__srv__MotorSpeed_Request * lhs, const lslidar_msgs__srv__MotorSpeed_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_speed
  if (lhs->motor_speed != rhs->motor_speed) {
    return false;
  }
  return true;
}

bool
lslidar_msgs__srv__MotorSpeed_Request__copy(
  const lslidar_msgs__srv__MotorSpeed_Request * input,
  lslidar_msgs__srv__MotorSpeed_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_speed
  output->motor_speed = input->motor_speed;
  return true;
}

lslidar_msgs__srv__MotorSpeed_Request *
lslidar_msgs__srv__MotorSpeed_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__srv__MotorSpeed_Request * msg = (lslidar_msgs__srv__MotorSpeed_Request *)allocator.allocate(sizeof(lslidar_msgs__srv__MotorSpeed_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_msgs__srv__MotorSpeed_Request));
  bool success = lslidar_msgs__srv__MotorSpeed_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_msgs__srv__MotorSpeed_Request__destroy(lslidar_msgs__srv__MotorSpeed_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_msgs__srv__MotorSpeed_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_msgs__srv__MotorSpeed_Request__Sequence__init(lslidar_msgs__srv__MotorSpeed_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__srv__MotorSpeed_Request * data = NULL;

  if (size) {
    data = (lslidar_msgs__srv__MotorSpeed_Request *)allocator.zero_allocate(size, sizeof(lslidar_msgs__srv__MotorSpeed_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_msgs__srv__MotorSpeed_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_msgs__srv__MotorSpeed_Request__fini(&data[i - 1]);
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
lslidar_msgs__srv__MotorSpeed_Request__Sequence__fini(lslidar_msgs__srv__MotorSpeed_Request__Sequence * array)
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
      lslidar_msgs__srv__MotorSpeed_Request__fini(&array->data[i]);
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

lslidar_msgs__srv__MotorSpeed_Request__Sequence *
lslidar_msgs__srv__MotorSpeed_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__srv__MotorSpeed_Request__Sequence * array = (lslidar_msgs__srv__MotorSpeed_Request__Sequence *)allocator.allocate(sizeof(lslidar_msgs__srv__MotorSpeed_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_msgs__srv__MotorSpeed_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_msgs__srv__MotorSpeed_Request__Sequence__destroy(lslidar_msgs__srv__MotorSpeed_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_msgs__srv__MotorSpeed_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_msgs__srv__MotorSpeed_Request__Sequence__are_equal(const lslidar_msgs__srv__MotorSpeed_Request__Sequence * lhs, const lslidar_msgs__srv__MotorSpeed_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_msgs__srv__MotorSpeed_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_msgs__srv__MotorSpeed_Request__Sequence__copy(
  const lslidar_msgs__srv__MotorSpeed_Request__Sequence * input,
  lslidar_msgs__srv__MotorSpeed_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_msgs__srv__MotorSpeed_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_msgs__srv__MotorSpeed_Request * data =
      (lslidar_msgs__srv__MotorSpeed_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_msgs__srv__MotorSpeed_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_msgs__srv__MotorSpeed_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_msgs__srv__MotorSpeed_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
lslidar_msgs__srv__MotorSpeed_Response__init(lslidar_msgs__srv__MotorSpeed_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
lslidar_msgs__srv__MotorSpeed_Response__fini(lslidar_msgs__srv__MotorSpeed_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
lslidar_msgs__srv__MotorSpeed_Response__are_equal(const lslidar_msgs__srv__MotorSpeed_Response * lhs, const lslidar_msgs__srv__MotorSpeed_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
lslidar_msgs__srv__MotorSpeed_Response__copy(
  const lslidar_msgs__srv__MotorSpeed_Response * input,
  lslidar_msgs__srv__MotorSpeed_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

lslidar_msgs__srv__MotorSpeed_Response *
lslidar_msgs__srv__MotorSpeed_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__srv__MotorSpeed_Response * msg = (lslidar_msgs__srv__MotorSpeed_Response *)allocator.allocate(sizeof(lslidar_msgs__srv__MotorSpeed_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lslidar_msgs__srv__MotorSpeed_Response));
  bool success = lslidar_msgs__srv__MotorSpeed_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lslidar_msgs__srv__MotorSpeed_Response__destroy(lslidar_msgs__srv__MotorSpeed_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lslidar_msgs__srv__MotorSpeed_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lslidar_msgs__srv__MotorSpeed_Response__Sequence__init(lslidar_msgs__srv__MotorSpeed_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__srv__MotorSpeed_Response * data = NULL;

  if (size) {
    data = (lslidar_msgs__srv__MotorSpeed_Response *)allocator.zero_allocate(size, sizeof(lslidar_msgs__srv__MotorSpeed_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lslidar_msgs__srv__MotorSpeed_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lslidar_msgs__srv__MotorSpeed_Response__fini(&data[i - 1]);
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
lslidar_msgs__srv__MotorSpeed_Response__Sequence__fini(lslidar_msgs__srv__MotorSpeed_Response__Sequence * array)
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
      lslidar_msgs__srv__MotorSpeed_Response__fini(&array->data[i]);
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

lslidar_msgs__srv__MotorSpeed_Response__Sequence *
lslidar_msgs__srv__MotorSpeed_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lslidar_msgs__srv__MotorSpeed_Response__Sequence * array = (lslidar_msgs__srv__MotorSpeed_Response__Sequence *)allocator.allocate(sizeof(lslidar_msgs__srv__MotorSpeed_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lslidar_msgs__srv__MotorSpeed_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lslidar_msgs__srv__MotorSpeed_Response__Sequence__destroy(lslidar_msgs__srv__MotorSpeed_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lslidar_msgs__srv__MotorSpeed_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lslidar_msgs__srv__MotorSpeed_Response__Sequence__are_equal(const lslidar_msgs__srv__MotorSpeed_Response__Sequence * lhs, const lslidar_msgs__srv__MotorSpeed_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lslidar_msgs__srv__MotorSpeed_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lslidar_msgs__srv__MotorSpeed_Response__Sequence__copy(
  const lslidar_msgs__srv__MotorSpeed_Response__Sequence * input,
  lslidar_msgs__srv__MotorSpeed_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lslidar_msgs__srv__MotorSpeed_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lslidar_msgs__srv__MotorSpeed_Response * data =
      (lslidar_msgs__srv__MotorSpeed_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lslidar_msgs__srv__MotorSpeed_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lslidar_msgs__srv__MotorSpeed_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lslidar_msgs__srv__MotorSpeed_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
