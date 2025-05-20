// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface_pkg1:srv/Service1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__SRV__DETAIL__SERVICE1__STRUCT_H_
#define INTERFACE_PKG1__SRV__DETAIL__SERVICE1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Service1 in the package interface_pkg1.
typedef struct interface_pkg1__srv__Service1_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} interface_pkg1__srv__Service1_Request;

// Struct for a sequence of interface_pkg1__srv__Service1_Request.
typedef struct interface_pkg1__srv__Service1_Request__Sequence
{
  interface_pkg1__srv__Service1_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_pkg1__srv__Service1_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Service1 in the package interface_pkg1.
typedef struct interface_pkg1__srv__Service1_Response
{
  int64_t sum;
} interface_pkg1__srv__Service1_Response;

// Struct for a sequence of interface_pkg1__srv__Service1_Response.
typedef struct interface_pkg1__srv__Service1_Response__Sequence
{
  interface_pkg1__srv__Service1_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface_pkg1__srv__Service1_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE_PKG1__SRV__DETAIL__SERVICE1__STRUCT_H_
