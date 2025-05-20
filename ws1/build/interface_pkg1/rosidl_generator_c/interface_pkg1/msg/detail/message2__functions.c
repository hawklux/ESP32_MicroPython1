// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface_pkg1:msg/Message2.idl
// generated code does not contain a copyright notice
#include "interface_pkg1/msg/detail/message2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
interface_pkg1__msg__Message2__init(interface_pkg1__msg__Message2 * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    interface_pkg1__msg__Message2__fini(msg);
    return false;
  }
  // radius
  return true;
}

void
interface_pkg1__msg__Message2__fini(interface_pkg1__msg__Message2 * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // radius
}

bool
interface_pkg1__msg__Message2__are_equal(const interface_pkg1__msg__Message2 * lhs, const interface_pkg1__msg__Message2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
interface_pkg1__msg__Message2__copy(
  const interface_pkg1__msg__Message2 * input,
  interface_pkg1__msg__Message2 * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  return true;
}

interface_pkg1__msg__Message2 *
interface_pkg1__msg__Message2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg1__msg__Message2 * msg = (interface_pkg1__msg__Message2 *)allocator.allocate(sizeof(interface_pkg1__msg__Message2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface_pkg1__msg__Message2));
  bool success = interface_pkg1__msg__Message2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface_pkg1__msg__Message2__destroy(interface_pkg1__msg__Message2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface_pkg1__msg__Message2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface_pkg1__msg__Message2__Sequence__init(interface_pkg1__msg__Message2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg1__msg__Message2 * data = NULL;

  if (size) {
    data = (interface_pkg1__msg__Message2 *)allocator.zero_allocate(size, sizeof(interface_pkg1__msg__Message2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface_pkg1__msg__Message2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface_pkg1__msg__Message2__fini(&data[i - 1]);
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
interface_pkg1__msg__Message2__Sequence__fini(interface_pkg1__msg__Message2__Sequence * array)
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
      interface_pkg1__msg__Message2__fini(&array->data[i]);
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

interface_pkg1__msg__Message2__Sequence *
interface_pkg1__msg__Message2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface_pkg1__msg__Message2__Sequence * array = (interface_pkg1__msg__Message2__Sequence *)allocator.allocate(sizeof(interface_pkg1__msg__Message2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface_pkg1__msg__Message2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface_pkg1__msg__Message2__Sequence__destroy(interface_pkg1__msg__Message2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface_pkg1__msg__Message2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface_pkg1__msg__Message2__Sequence__are_equal(const interface_pkg1__msg__Message2__Sequence * lhs, const interface_pkg1__msg__Message2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface_pkg1__msg__Message2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface_pkg1__msg__Message2__Sequence__copy(
  const interface_pkg1__msg__Message2__Sequence * input,
  interface_pkg1__msg__Message2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface_pkg1__msg__Message2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface_pkg1__msg__Message2 * data =
      (interface_pkg1__msg__Message2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface_pkg1__msg__Message2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface_pkg1__msg__Message2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface_pkg1__msg__Message2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
