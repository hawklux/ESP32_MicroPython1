// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_pkg1:srv/Service1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__SRV__DETAIL__SERVICE1__TRAITS_HPP_
#define INTERFACE_PKG1__SRV__DETAIL__SERVICE1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_pkg1/srv/detail/service1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_pkg1
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service1_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service1_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service1_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_pkg1

namespace rosidl_generator_traits
{

[[deprecated("use interface_pkg1::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_pkg1::srv::Service1_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_pkg1::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_pkg1::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_pkg1::srv::Service1_Request & msg)
{
  return interface_pkg1::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_pkg1::srv::Service1_Request>()
{
  return "interface_pkg1::srv::Service1_Request";
}

template<>
inline const char * name<interface_pkg1::srv::Service1_Request>()
{
  return "interface_pkg1/srv/Service1_Request";
}

template<>
struct has_fixed_size<interface_pkg1::srv::Service1_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_pkg1::srv::Service1_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_pkg1::srv::Service1_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interface_pkg1
{

namespace srv
{

inline void to_flow_style_yaml(
  const Service1_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Service1_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Service1_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interface_pkg1

namespace rosidl_generator_traits
{

[[deprecated("use interface_pkg1::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_pkg1::srv::Service1_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_pkg1::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_pkg1::srv::to_yaml() instead")]]
inline std::string to_yaml(const interface_pkg1::srv::Service1_Response & msg)
{
  return interface_pkg1::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interface_pkg1::srv::Service1_Response>()
{
  return "interface_pkg1::srv::Service1_Response";
}

template<>
inline const char * name<interface_pkg1::srv::Service1_Response>()
{
  return "interface_pkg1/srv/Service1_Response";
}

template<>
struct has_fixed_size<interface_pkg1::srv::Service1_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_pkg1::srv::Service1_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_pkg1::srv::Service1_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interface_pkg1::srv::Service1>()
{
  return "interface_pkg1::srv::Service1";
}

template<>
inline const char * name<interface_pkg1::srv::Service1>()
{
  return "interface_pkg1/srv/Service1";
}

template<>
struct has_fixed_size<interface_pkg1::srv::Service1>
  : std::integral_constant<
    bool,
    has_fixed_size<interface_pkg1::srv::Service1_Request>::value &&
    has_fixed_size<interface_pkg1::srv::Service1_Response>::value
  >
{
};

template<>
struct has_bounded_size<interface_pkg1::srv::Service1>
  : std::integral_constant<
    bool,
    has_bounded_size<interface_pkg1::srv::Service1_Request>::value &&
    has_bounded_size<interface_pkg1::srv::Service1_Response>::value
  >
{
};

template<>
struct is_service<interface_pkg1::srv::Service1>
  : std::true_type
{
};

template<>
struct is_service_request<interface_pkg1::srv::Service1_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interface_pkg1::srv::Service1_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PKG1__SRV__DETAIL__SERVICE1__TRAITS_HPP_
