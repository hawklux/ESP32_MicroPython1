// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__MSG__DETAIL__MSG1__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSG_PKG1__MSG__DETAIL__MSG1__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_pkg1/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msg_pkg1/msg/detail/msg1__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_pkg1::msg::Msg1 & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
get_serialized_size(
  const msg_pkg1::msg::Msg1 & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
max_serialized_size_Msg1(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_pkg1

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg1, msg, Msg1)();

#ifdef __cplusplus
}
#endif

#endif  // MSG_PKG1__MSG__DETAIL__MSG1__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
