// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__MSG__DETAIL__MSG1__STRUCT_H_
#define MSG_PKG1__MSG__DETAIL__MSG1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Msg1 in the package msg_pkg1.
typedef struct msg_pkg1__msg__Msg1
{
  float cmd_vel_linear;
  float cmd_vel_angular;
  float pose_x;
  float pose_y;
  float linear_vel;
  float angular_vel;
} msg_pkg1__msg__Msg1;

// Struct for a sequence of msg_pkg1__msg__Msg1.
typedef struct msg_pkg1__msg__Msg1__Sequence
{
  msg_pkg1__msg__Msg1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__msg__Msg1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PKG1__MSG__DETAIL__MSG1__STRUCT_H_
