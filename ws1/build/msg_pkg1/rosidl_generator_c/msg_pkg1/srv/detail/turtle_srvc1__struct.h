// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_pkg1:srv/TurtleSrvc1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__STRUCT_H_
#define MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurtleSrvc1 in the package msg_pkg1.
typedef struct msg_pkg1__srv__TurtleSrvc1_Request
{
  int64_t num;
} msg_pkg1__srv__TurtleSrvc1_Request;

// Struct for a sequence of msg_pkg1__srv__TurtleSrvc1_Request.
typedef struct msg_pkg1__srv__TurtleSrvc1_Request__Sequence
{
  msg_pkg1__srv__TurtleSrvc1_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__srv__TurtleSrvc1_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'theta'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/TurtleSrvc1 in the package msg_pkg1.
typedef struct msg_pkg1__srv__TurtleSrvc1_Response
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence theta;
} msg_pkg1__srv__TurtleSrvc1_Response;

// Struct for a sequence of msg_pkg1__srv__TurtleSrvc1_Response.
typedef struct msg_pkg1__srv__TurtleSrvc1_Response__Sequence
{
  msg_pkg1__srv__TurtleSrvc1_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_pkg1__srv__TurtleSrvc1_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__STRUCT_H_
