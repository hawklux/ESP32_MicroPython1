// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_pkg1:msg/Message1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__STRUCT_H_
#define INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Message1 in the package interface_pkg1.
typedef struct interface_pkg1__msg__Message1
{
  int64_t num;
} interface_pkg1__msg__Message1;

// Struct for a sequence of interface_pkg1__msg__Message1.
typedef struct interface_pkg1__msg__Message1__Sequence
{
  interface_pkg1__msg__Message1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_pkg1__msg__Message1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__STRUCT_H_
