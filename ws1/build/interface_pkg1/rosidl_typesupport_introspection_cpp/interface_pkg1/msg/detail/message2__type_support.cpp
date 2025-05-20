// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interface_pkg1:msg/Message2.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_pkg1/msg/detail/message2__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interface_pkg1
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Message2_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interface_pkg1::msg::Message2(_init);
}

void Message2_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interface_pkg1::msg::Message2 *>(message_memory);
  typed_message->~Message2();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Message2_message_member_array[2] = {
  {
    "center",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_pkg1::msg::Message2, center),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_pkg1::msg::Message2, radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Message2_message_members = {
  "interface_pkg1::msg",  // message namespace
  "Message2",  // message name
  2,  // number of fields
  sizeof(interface_pkg1::msg::Message2),
  Message2_message_member_array,  // message members
  Message2_init_function,  // function to initialize message memory (memory has to be allocated)
  Message2_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Message2_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Message2_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interface_pkg1


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_pkg1::msg::Message2>()
{
  return &::interface_pkg1::msg::rosidl_typesupport_introspection_cpp::Message2_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_pkg1, msg, Message2)() {
  return &::interface_pkg1::msg::rosidl_typesupport_introspection_cpp::Message2_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
