// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice
#include "msg_pkg1/msg/detail/msg1__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_pkg1/msg/detail/msg1__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace msg_pkg1
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
cdr_serialize(
  const msg_pkg1::msg::Msg1 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cmd_vel_linear
  cdr << ros_message.cmd_vel_linear;
  // Member: cmd_vel_angular
  cdr << ros_message.cmd_vel_angular;
  // Member: pose_x
  cdr << ros_message.pose_x;
  // Member: pose_y
  cdr << ros_message.pose_y;
  // Member: linear_vel
  cdr << ros_message.linear_vel;
  // Member: angular_vel
  cdr << ros_message.angular_vel;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_pkg1::msg::Msg1 & ros_message)
{
  // Member: cmd_vel_linear
  cdr >> ros_message.cmd_vel_linear;

  // Member: cmd_vel_angular
  cdr >> ros_message.cmd_vel_angular;

  // Member: pose_x
  cdr >> ros_message.pose_x;

  // Member: pose_y
  cdr >> ros_message.pose_y;

  // Member: linear_vel
  cdr >> ros_message.linear_vel;

  // Member: angular_vel
  cdr >> ros_message.angular_vel;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
get_serialized_size(
  const msg_pkg1::msg::Msg1 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cmd_vel_linear
  {
    size_t item_size = sizeof(ros_message.cmd_vel_linear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmd_vel_angular
  {
    size_t item_size = sizeof(ros_message.cmd_vel_angular);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pose_x
  {
    size_t item_size = sizeof(ros_message.pose_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pose_y
  {
    size_t item_size = sizeof(ros_message.pose_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_vel
  {
    size_t item_size = sizeof(ros_message.linear_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_vel
  {
    size_t item_size = sizeof(ros_message.angular_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
max_serialized_size_Msg1(
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


  // Member: cmd_vel_linear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cmd_vel_angular
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pose_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pose_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: linear_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angular_vel
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
    using DataType = msg_pkg1::msg::Msg1;
    is_plain =
      (
      offsetof(DataType, angular_vel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Msg1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_pkg1::msg::Msg1 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Msg1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_pkg1::msg::Msg1 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Msg1__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_pkg1::msg::Msg1 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Msg1__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Msg1(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Msg1__callbacks = {
  "msg_pkg1::msg",
  "Msg1",
  _Msg1__cdr_serialize,
  _Msg1__cdr_deserialize,
  _Msg1__get_serialized_size,
  _Msg1__max_serialized_size
};

static rosidl_message_type_support_t _Msg1__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Msg1__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_pkg1

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_pkg1
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_pkg1::msg::Msg1>()
{
  return &msg_pkg1::msg::typesupport_fastrtps_cpp::_Msg1__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg1, msg, Msg1)() {
  return &msg_pkg1::msg::typesupport_fastrtps_cpp::_Msg1__handle;
}

#ifdef __cplusplus
}
#endif
