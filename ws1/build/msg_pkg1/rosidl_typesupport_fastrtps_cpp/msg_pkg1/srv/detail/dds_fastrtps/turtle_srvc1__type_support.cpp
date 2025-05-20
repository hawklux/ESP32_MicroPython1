// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_pkg1:srv/TurtleSrvc1.idl
// generated code does not contain a copyright notice
#include "msg_pkg1/srv/detail/turtle_srvc1__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_pkg1/srv/detail/turtle_srvc1__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
cdr_serialize(
  const msg_pkg1::srv::TurtleSrvc1_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num
  cdr << ros_message.num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_pkg1::srv::TurtleSrvc1_Request & ros_message)
{
  // Member: num
  cdr >> ros_message.num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
get_serialized_size(
  const msg_pkg1::srv::TurtleSrvc1_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num
  {
    size_t item_size = sizeof(ros_message.num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
max_serialized_size_TurtleSrvc1_Request(
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


  // Member: num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msg_pkg1::srv::TurtleSrvc1_Request;
    is_plain =
      (
      offsetof(DataType, num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TurtleSrvc1_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_pkg1::srv::TurtleSrvc1_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurtleSrvc1_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_pkg1::srv::TurtleSrvc1_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurtleSrvc1_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_pkg1::srv::TurtleSrvc1_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurtleSrvc1_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TurtleSrvc1_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TurtleSrvc1_Request__callbacks = {
  "msg_pkg1::srv",
  "TurtleSrvc1_Request",
  _TurtleSrvc1_Request__cdr_serialize,
  _TurtleSrvc1_Request__cdr_deserialize,
  _TurtleSrvc1_Request__get_serialized_size,
  _TurtleSrvc1_Request__max_serialized_size
};

static rosidl_message_type_support_t _TurtleSrvc1_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleSrvc1_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_pkg1

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_pkg1
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_pkg1::srv::TurtleSrvc1_Request>()
{
  return &msg_pkg1::srv::typesupport_fastrtps_cpp::_TurtleSrvc1_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg1, srv, TurtleSrvc1_Request)() {
  return &msg_pkg1::srv::typesupport_fastrtps_cpp::_TurtleSrvc1_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace msg_pkg1
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
cdr_serialize(
  const msg_pkg1::srv::TurtleSrvc1_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  {
    cdr << ros_message.x;
  }
  // Member: y
  {
    cdr << ros_message.y;
  }
  // Member: theta
  {
    cdr << ros_message.theta;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_pkg1::srv::TurtleSrvc1_Response & ros_message)
{
  // Member: x
  {
    cdr >> ros_message.x;
  }

  // Member: y
  {
    cdr >> ros_message.y;
  }

  // Member: theta
  {
    cdr >> ros_message.theta;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
get_serialized_size(
  const msg_pkg1::srv::TurtleSrvc1_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t array_size = ros_message.x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t array_size = ros_message.y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta
  {
    size_t array_size = ros_message.theta.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.theta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_pkg1
max_serialized_size_TurtleSrvc1_Response(
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


  // Member: x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = msg_pkg1::srv::TurtleSrvc1_Response;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TurtleSrvc1_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_pkg1::srv::TurtleSrvc1_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TurtleSrvc1_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_pkg1::srv::TurtleSrvc1_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TurtleSrvc1_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_pkg1::srv::TurtleSrvc1_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TurtleSrvc1_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TurtleSrvc1_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TurtleSrvc1_Response__callbacks = {
  "msg_pkg1::srv",
  "TurtleSrvc1_Response",
  _TurtleSrvc1_Response__cdr_serialize,
  _TurtleSrvc1_Response__cdr_deserialize,
  _TurtleSrvc1_Response__get_serialized_size,
  _TurtleSrvc1_Response__max_serialized_size
};

static rosidl_message_type_support_t _TurtleSrvc1_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleSrvc1_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_pkg1

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_pkg1
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_pkg1::srv::TurtleSrvc1_Response>()
{
  return &msg_pkg1::srv::typesupport_fastrtps_cpp::_TurtleSrvc1_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg1, srv, TurtleSrvc1_Response)() {
  return &msg_pkg1::srv::typesupport_fastrtps_cpp::_TurtleSrvc1_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace msg_pkg1
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TurtleSrvc1__callbacks = {
  "msg_pkg1::srv",
  "TurtleSrvc1",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg1, srv, TurtleSrvc1_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg1, srv, TurtleSrvc1_Response)(),
};

static rosidl_service_type_support_t _TurtleSrvc1__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TurtleSrvc1__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_pkg1

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_pkg1
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_pkg1::srv::TurtleSrvc1>()
{
  return &msg_pkg1::srv::typesupport_fastrtps_cpp::_TurtleSrvc1__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_pkg1, srv, TurtleSrvc1)() {
  return &msg_pkg1::srv::typesupport_fastrtps_cpp::_TurtleSrvc1__handle;
}

#ifdef __cplusplus
}
#endif
