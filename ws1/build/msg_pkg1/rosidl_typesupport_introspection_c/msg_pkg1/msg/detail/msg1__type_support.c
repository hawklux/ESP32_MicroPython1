// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_pkg1/msg/detail/msg1__rosidl_typesupport_introspection_c.h"
#include "msg_pkg1/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_pkg1/msg/detail/msg1__functions.h"
#include "msg_pkg1/msg/detail/msg1__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_pkg1__msg__Msg1__init(message_memory);
}

void msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_fini_function(void * message_memory)
{
  msg_pkg1__msg__Msg1__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_member_array[6] = {
  {
    "cmd_vel_linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1__msg__Msg1, cmd_vel_linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_vel_angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1__msg__Msg1, cmd_vel_angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1__msg__Msg1, pose_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1__msg__Msg1, pose_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1__msg__Msg1, linear_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1__msg__Msg1, angular_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_members = {
  "msg_pkg1__msg",  // message namespace
  "Msg1",  // message name
  6,  // number of fields
  sizeof(msg_pkg1__msg__Msg1),
  msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_member_array,  // message members
  msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_type_support_handle = {
  0,
  &msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_pkg1
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_pkg1, msg, Msg1)() {
  if (!msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_type_support_handle.typesupport_identifier) {
    msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_pkg1__msg__Msg1__rosidl_typesupport_introspection_c__Msg1_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
