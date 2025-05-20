// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_pkg1:msg/Message2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__TRAITS_HPP_
#define INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_pkg1/msg/detail/message2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace interface_pkg1
{

namespace msg
{

inline void to_flow_style_yaml(
  const Message2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Message2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Message2 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface_pkg1

namespace rosidl_generator_traits
{

[[deprecated("use interface_pkg1::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface_pkg1::msg::Message2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_pkg1::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_pkg1::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_pkg1::msg::Message2 & msg)
{
  return interface_pkg1::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_pkg1::msg::Message2>()
{
  return "interface_pkg1::msg::Message2";
}

template<>
inline const char * name<interface_pkg1::msg::Message2>()
{
  return "interface_pkg1/msg/Message2";
}

template<>
struct has_fixed_size<interface_pkg1::msg::Message2>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<interface_pkg1::msg::Message2>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<interface_pkg1::msg::Message2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__TRAITS_HPP_
