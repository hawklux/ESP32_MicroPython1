// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface_pkg1:msg/Message1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__TRAITS_HPP_
#define INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface_pkg1/msg/detail/message1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface_pkg1
{

namespace msg
{

inline void to_flow_style_yaml(
  const Message1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Message1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Message1 & msg, bool use_flow_style = false)
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
  const interface_pkg1::msg::Message1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface_pkg1::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface_pkg1::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface_pkg1::msg::Message1 & msg)
{
  return interface_pkg1::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface_pkg1::msg::Message1>()
{
  return "interface_pkg1::msg::Message1";
}

template<>
inline const char * name<interface_pkg1::msg::Message1>()
{
  return "interface_pkg1/msg/Message1";
}

template<>
struct has_fixed_size<interface_pkg1::msg::Message1>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interface_pkg1::msg::Message1>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interface_pkg1::msg::Message1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__TRAITS_HPP_
