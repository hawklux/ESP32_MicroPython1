// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_pkg1:msg/Message2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__BUILDER_HPP_
#define INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_pkg1/msg/detail/message2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_pkg1
{

namespace msg
{

namespace builder
{

class Init_Message2_radius
{
public:
  explicit Init_Message2_radius(::interface_pkg1::msg::Message2 & msg)
  : msg_(msg)
  {}
  ::interface_pkg1::msg::Message2 radius(::interface_pkg1::msg::Message2::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_pkg1::msg::Message2 msg_;
};

class Init_Message2_center
{
public:
  Init_Message2_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Message2_radius center(::interface_pkg1::msg::Message2::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Message2_radius(msg_);
  }

private:
  ::interface_pkg1::msg::Message2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_pkg1::msg::Message2>()
{
  return interface_pkg1::msg::builder::Init_Message2_center();
}

}  // namespace interface_pkg1

#endif  // INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__BUILDER_HPP_
