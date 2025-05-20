// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__MSG__DETAIL__MSG1__TRAITS_HPP_
#define MSG_PKG1__MSG__DETAIL__MSG1__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_pkg1/msg/detail/msg1__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_pkg1
{

namespace msg
{

inline void to_flow_style_yaml(
  const Msg1 & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_vel_linear
  {
    out << "cmd_vel_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_linear, out);
    out << ", ";
  }

  // member: cmd_vel_angular
  {
    out << "cmd_vel_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_angular, out);
    out << ", ";
  }

  // member: pose_x
  {
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << ", ";
  }

  // member: pose_y
  {
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << ", ";
  }

  // member: linear_vel
  {
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << ", ";
  }

  // member: angular_vel
  {
    out << "angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Msg1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_vel_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_linear, out);
    out << "\n";
  }

  // member: cmd_vel_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_angular, out);
    out << "\n";
  }

  // member: pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << "\n";
  }

  // member: pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << "\n";
  }

  // member: linear_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << "\n";
  }

  // member: angular_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Msg1 & msg, bool use_flow_style = false)
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

}  // namespace msg_pkg1

namespace rosidl_generator_traits
{

[[deprecated("use msg_pkg1::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_pkg1::msg::Msg1 & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_pkg1::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_pkg1::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_pkg1::msg::Msg1 & msg)
{
  return msg_pkg1::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_pkg1::msg::Msg1>()
{
  return "msg_pkg1::msg::Msg1";
}

template<>
inline const char * name<msg_pkg1::msg::Msg1>()
{
  return "msg_pkg1/msg/Msg1";
}

template<>
struct has_fixed_size<msg_pkg1::msg::Msg1>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_pkg1::msg::Msg1>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_pkg1::msg::Msg1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_PKG1__MSG__DETAIL__MSG1__TRAITS_HPP_
