// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_pkg1:msg/Message1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__BUILDER_HPP_
#define INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_pkg1/msg/detail/message1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_pkg1
{

namespace msg
{

namespace builder
{

class Init_Message1_num
{
public:
  Init_Message1_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_pkg1::msg::Message1 num(::interface_pkg1::msg::Message1::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_pkg1::msg::Message1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_pkg1::msg::Message1>()
{
  return interface_pkg1::msg::builder::Init_Message1_num();
}

}  // namespace interface_pkg1

#endif  // INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__BUILDER_HPP_
