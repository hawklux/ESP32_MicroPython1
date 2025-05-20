// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice
#include "msg_pkg1/msg/detail/msg1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg_pkg1__msg__Msg1__init(msg_pkg1__msg__Msg1 * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_vel_linear
  // cmd_vel_angular
  // pose_x
  // pose_y
  // linear_vel
  // angular_vel
  return true;
}

void
msg_pkg1__msg__Msg1__fini(msg_pkg1__msg__Msg1 * msg)
{
  if (!msg) {
    return;
  }
  // cmd_vel_linear
  // cmd_vel_angular
  // pose_x
  // pose_y
  // linear_vel
  // angular_vel
}

bool
msg_pkg1__msg__Msg1__are_equal(const msg_pkg1__msg__Msg1 * lhs, const msg_pkg1__msg__Msg1 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_vel_linear
  if (lhs->cmd_vel_linear != rhs->cmd_vel_linear) {
    return false;
  }
  // cmd_vel_angular
  if (lhs->cmd_vel_angular != rhs->cmd_vel_angular) {
    return false;
  }
  // pose_x
  if (lhs->pose_x != rhs->pose_x) {
    return false;
  }
  // pose_y
  if (lhs->pose_y != rhs->pose_y) {
    return false;
  }
  // linear_vel
  if (lhs->linear_vel != rhs->linear_vel) {
    return false;
  }
  // angular_vel
  if (lhs->angular_vel != rhs->angular_vel) {
    return false;
  }
  return true;
}

bool
msg_pkg1__msg__Msg1__copy(
  const msg_pkg1__msg__Msg1 * input,
  msg_pkg1__msg__Msg1 * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_vel_linear
  output->cmd_vel_linear = input->cmd_vel_linear;
  // cmd_vel_angular
  output->cmd_vel_angular = input->cmd_vel_angular;
  // pose_x
  output->pose_x = input->pose_x;
  // pose_y
  output->pose_y = input->pose_y;
  // linear_vel
  output->linear_vel = input->linear_vel;
  // angular_vel
  output->angular_vel = input->angular_vel;
  return true;
}

msg_pkg1__msg__Msg1 *
msg_pkg1__msg__Msg1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg1__msg__Msg1 * msg = (msg_pkg1__msg__Msg1 *)allocator.allocate(sizeof(msg_pkg1__msg__Msg1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_pkg1__msg__Msg1));
  bool success = msg_pkg1__msg__Msg1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_pkg1__msg__Msg1__destroy(msg_pkg1__msg__Msg1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_pkg1__msg__Msg1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_pkg1__msg__Msg1__Sequence__init(msg_pkg1__msg__Msg1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg1__msg__Msg1 * data = NULL;

  if (size) {
    data = (msg_pkg1__msg__Msg1 *)allocator.zero_allocate(size, sizeof(msg_pkg1__msg__Msg1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_pkg1__msg__Msg1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_pkg1__msg__Msg1__fini(&data[i - 1]);
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
msg_pkg1__msg__Msg1__Sequence__fini(msg_pkg1__msg__Msg1__Sequence * array)
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
      msg_pkg1__msg__Msg1__fini(&array->data[i]);
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

msg_pkg1__msg__Msg1__Sequence *
msg_pkg1__msg__Msg1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_pkg1__msg__Msg1__Sequence * array = (msg_pkg1__msg__Msg1__Sequence *)allocator.allocate(sizeof(msg_pkg1__msg__Msg1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_pkg1__msg__Msg1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_pkg1__msg__Msg1__Sequence__destroy(msg_pkg1__msg__Msg1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_pkg1__msg__Msg1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_pkg1__msg__Msg1__Sequence__are_equal(const msg_pkg1__msg__Msg1__Sequence * lhs, const msg_pkg1__msg__Msg1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_pkg1__msg__Msg1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_pkg1__msg__Msg1__Sequence__copy(
  const msg_pkg1__msg__Msg1__Sequence * input,
  msg_pkg1__msg__Msg1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_pkg1__msg__Msg1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_pkg1__msg__Msg1 * data =
      (msg_pkg1__msg__Msg1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_pkg1__msg__Msg1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_pkg1__msg__Msg1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_pkg1__msg__Msg1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
