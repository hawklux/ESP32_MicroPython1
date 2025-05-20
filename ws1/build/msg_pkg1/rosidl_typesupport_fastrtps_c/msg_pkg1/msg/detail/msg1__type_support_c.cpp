// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice
#include "msg_pkg1/msg/detail/msg1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "msg_pkg1/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msg_pkg1/msg/detail/msg1__struct.h"
#include "msg_pkg1/msg/detail/msg1__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Msg1__ros_msg_type = msg_pkg1__msg__Msg1;

static bool _Msg1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Msg1__ros_msg_type * ros_message = static_cast<const _Msg1__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_vel_linear
  {
    cdr << ros_message->cmd_vel_linear;
  }

  // Field name: cmd_vel_angular
  {
    cdr << ros_message->cmd_vel_angular;
  }

  // Field name: pose_x
  {
    cdr << ros_message->pose_x;
  }

  // Field name: pose_y
  {
    cdr << ros_message->pose_y;
  }

  // Field name: linear_vel
  {
    cdr << ros_message->linear_vel;
  }

  // Field name: angular_vel
  {
    cdr << ros_message->angular_vel;
  }

  return true;
}

static bool _Msg1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Msg1__ros_msg_type * ros_message = static_cast<_Msg1__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_vel_linear
  {
    cdr >> ros_message->cmd_vel_linear;
  }

  // Field name: cmd_vel_angular
  {
    cdr >> ros_message->cmd_vel_angular;
  }

  // Field name: pose_x
  {
    cdr >> ros_message->pose_x;
  }

  // Field name: pose_y
  {
    cdr >> ros_message->pose_y;
  }

  // Field name: linear_vel
  {
    cdr >> ros_message->linear_vel;
  }

  // Field name: angular_vel
  {
    cdr >> ros_message->angular_vel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_pkg1
size_t get_serialized_size_msg_pkg1__msg__Msg1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Msg1__ros_msg_type * ros_message = static_cast<const _Msg1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_vel_linear
  {
    size_t item_size = sizeof(ros_message->cmd_vel_linear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_vel_angular
  {
    size_t item_size = sizeof(ros_message->cmd_vel_angular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_x
  {
    size_t item_size = sizeof(ros_message->pose_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pose_y
  {
    size_t item_size = sizeof(ros_message->pose_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_vel
  {
    size_t item_size = sizeof(ros_message->linear_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_vel
  {
    size_t item_size = sizeof(ros_message->angular_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Msg1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msg_pkg1__msg__Msg1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_pkg1
size_t max_serialized_size_msg_pkg1__msg__Msg1(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cmd_vel_linear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cmd_vel_angular
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pose_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pose_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: linear_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msg_pkg1__msg__Msg1;
    is_plain =
      (
      offsetof(DataType, angular_vel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Msg1__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_msg_pkg1__msg__Msg1(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Msg1 = {
  "msg_pkg1::msg",
  "Msg1",
  _Msg1__cdr_serialize,
  _Msg1__cdr_deserialize,
  _Msg1__get_serialized_size,
  _Msg1__max_serialized_size
};

static rosidl_message_type_support_t _Msg1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Msg1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_pkg1, msg, Msg1)() {
  return &_Msg1__type_support;
}

#if defined(__cplusplus)
}
#endif
