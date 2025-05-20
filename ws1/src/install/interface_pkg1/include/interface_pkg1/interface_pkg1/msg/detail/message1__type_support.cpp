// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interface_pkg1:msg/Message1.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_pkg1/msg/detail/message1__struct.hpp"
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

void Message1_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interface_pkg1::msg::Message1(_init);
}

void Message1_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interface_pkg1::msg::Message1 *>(message_memory);
  typed_message->~Message1();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Message1_message_member_array[1] = {
  {
    "num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_pkg1::msg::Message1, num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Message1_message_members = {
  "interface_pkg1::msg",  // message namespace
  "Message1",  // message name
  1,  // number of fields
  sizeof(interface_pkg1::msg::Message1),
  Message1_message_member_array,  // message members
  Message1_init_function,  // function to initialize message memory (memory has to be allocated)
  Message1_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Message1_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Message1_message_members,
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
get_message_type_support_handle<interface_pkg1::msg::Message1>()
{
  return &::interface_pkg1::msg::rosidl_typesupport_introspection_cpp::Message1_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_pkg1, msg, Message1)() {
  return &::interface_pkg1::msg::rosidl_typesupport_introspection_cpp::Message1_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
