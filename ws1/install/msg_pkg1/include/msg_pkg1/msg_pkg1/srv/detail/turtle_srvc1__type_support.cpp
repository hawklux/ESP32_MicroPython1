// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msg_pkg1:srv/TurtleSrvc1.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_pkg1/srv/detail/turtle_srvc1__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_pkg1
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtleSrvc1_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_pkg1::srv::TurtleSrvc1_Request(_init);
}

void TurtleSrvc1_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_pkg1::srv::TurtleSrvc1_Request *>(message_memory);
  typed_message->~TurtleSrvc1_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtleSrvc1_Request_message_member_array[1] = {
  {
    "num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1::srv::TurtleSrvc1_Request, num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtleSrvc1_Request_message_members = {
  "msg_pkg1::srv",  // message namespace
  "TurtleSrvc1_Request",  // message name
  1,  // number of fields
  sizeof(msg_pkg1::srv::TurtleSrvc1_Request),
  TurtleSrvc1_Request_message_member_array,  // message members
  TurtleSrvc1_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleSrvc1_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtleSrvc1_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleSrvc1_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace msg_pkg1


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_pkg1::srv::TurtleSrvc1_Request>()
{
  return &::msg_pkg1::srv::rosidl_typesupport_introspection_cpp::TurtleSrvc1_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_pkg1, srv, TurtleSrvc1_Request)() {
  return &::msg_pkg1::srv::rosidl_typesupport_introspection_cpp::TurtleSrvc1_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_pkg1/srv/detail/turtle_srvc1__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_pkg1
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtleSrvc1_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_pkg1::srv::TurtleSrvc1_Response(_init);
}

void TurtleSrvc1_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_pkg1::srv::TurtleSrvc1_Response *>(message_memory);
  typed_message->~TurtleSrvc1_Response();
}

size_t size_function__TurtleSrvc1_Response__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TurtleSrvc1_Response__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TurtleSrvc1_Response__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TurtleSrvc1_Response__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TurtleSrvc1_Response__x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TurtleSrvc1_Response__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TurtleSrvc1_Response__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TurtleSrvc1_Response__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TurtleSrvc1_Response__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TurtleSrvc1_Response__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TurtleSrvc1_Response__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TurtleSrvc1_Response__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TurtleSrvc1_Response__y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TurtleSrvc1_Response__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TurtleSrvc1_Response__y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TurtleSrvc1_Response__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TurtleSrvc1_Response__theta(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TurtleSrvc1_Response__theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__TurtleSrvc1_Response__theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TurtleSrvc1_Response__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__TurtleSrvc1_Response__theta(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TurtleSrvc1_Response__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__TurtleSrvc1_Response__theta(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__TurtleSrvc1_Response__theta(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtleSrvc1_Response_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1::srv::TurtleSrvc1_Response, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__TurtleSrvc1_Response__x,  // size() function pointer
    get_const_function__TurtleSrvc1_Response__x,  // get_const(index) function pointer
    get_function__TurtleSrvc1_Response__x,  // get(index) function pointer
    fetch_function__TurtleSrvc1_Response__x,  // fetch(index, &value) function pointer
    assign_function__TurtleSrvc1_Response__x,  // assign(index, value) function pointer
    resize_function__TurtleSrvc1_Response__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1::srv::TurtleSrvc1_Response, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__TurtleSrvc1_Response__y,  // size() function pointer
    get_const_function__TurtleSrvc1_Response__y,  // get_const(index) function pointer
    get_function__TurtleSrvc1_Response__y,  // get(index) function pointer
    fetch_function__TurtleSrvc1_Response__y,  // fetch(index, &value) function pointer
    assign_function__TurtleSrvc1_Response__y,  // assign(index, value) function pointer
    resize_function__TurtleSrvc1_Response__y  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_pkg1::srv::TurtleSrvc1_Response, theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__TurtleSrvc1_Response__theta,  // size() function pointer
    get_const_function__TurtleSrvc1_Response__theta,  // get_const(index) function pointer
    get_function__TurtleSrvc1_Response__theta,  // get(index) function pointer
    fetch_function__TurtleSrvc1_Response__theta,  // fetch(index, &value) function pointer
    assign_function__TurtleSrvc1_Response__theta,  // assign(index, value) function pointer
    resize_function__TurtleSrvc1_Response__theta  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtleSrvc1_Response_message_members = {
  "msg_pkg1::srv",  // message namespace
  "TurtleSrvc1_Response",  // message name
  3,  // number of fields
  sizeof(msg_pkg1::srv::TurtleSrvc1_Response),
  TurtleSrvc1_Response_message_member_array,  // message members
  TurtleSrvc1_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtleSrvc1_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtleSrvc1_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleSrvc1_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace msg_pkg1


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_pkg1::srv::TurtleSrvc1_Response>()
{
  return &::msg_pkg1::srv::rosidl_typesupport_introspection_cpp::TurtleSrvc1_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_pkg1, srv, TurtleSrvc1_Response)() {
  return &::msg_pkg1::srv::rosidl_typesupport_introspection_cpp::TurtleSrvc1_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "msg_pkg1/srv/detail/turtle_srvc1__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace msg_pkg1
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TurtleSrvc1_service_members = {
  "msg_pkg1::srv",  // service namespace
  "TurtleSrvc1",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<msg_pkg1::srv::TurtleSrvc1>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TurtleSrvc1_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtleSrvc1_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace msg_pkg1


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_pkg1::srv::TurtleSrvc1>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::msg_pkg1::srv::rosidl_typesupport_introspection_cpp::TurtleSrvc1_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msg_pkg1::srv::TurtleSrvc1_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msg_pkg1::srv::TurtleSrvc1_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_pkg1, srv, TurtleSrvc1)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<msg_pkg1::srv::TurtleSrvc1>();
}

#ifdef __cplusplus
}
#endif
