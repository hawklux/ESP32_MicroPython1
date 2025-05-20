// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_pkg1:msg/Msg1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__MSG__DETAIL__MSG1__BUILDER_HPP_
#define MSG_PKG1__MSG__DETAIL__MSG1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_pkg1/msg/detail/msg1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_pkg1
{

namespace msg
{

namespace builder
{

class Init_Msg1_angular_vel
{
public:
  explicit Init_Msg1_angular_vel(::msg_pkg1::msg::Msg1 & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::msg::Msg1 angular_vel(::msg_pkg1::msg::Msg1::_angular_vel_type arg)
  {
    msg_.angular_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::msg::Msg1 msg_;
};

class Init_Msg1_linear_vel
{
public:
  explicit Init_Msg1_linear_vel(::msg_pkg1::msg::Msg1 & msg)
  : msg_(msg)
  {}
  Init_Msg1_angular_vel linear_vel(::msg_pkg1::msg::Msg1::_linear_vel_type arg)
  {
    msg_.linear_vel = std::move(arg);
    return Init_Msg1_angular_vel(msg_);
  }

private:
  ::msg_pkg1::msg::Msg1 msg_;
};

class Init_Msg1_pose_y
{
public:
  explicit Init_Msg1_pose_y(::msg_pkg1::msg::Msg1 & msg)
  : msg_(msg)
  {}
  Init_Msg1_linear_vel pose_y(::msg_pkg1::msg::Msg1::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return Init_Msg1_linear_vel(msg_);
  }

private:
  ::msg_pkg1::msg::Msg1 msg_;
};

class Init_Msg1_pose_x
{
public:
  explicit Init_Msg1_pose_x(::msg_pkg1::msg::Msg1 & msg)
  : msg_(msg)
  {}
  Init_Msg1_pose_y pose_x(::msg_pkg1::msg::Msg1::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_Msg1_pose_y(msg_);
  }

private:
  ::msg_pkg1::msg::Msg1 msg_;
};

class Init_Msg1_cmd_vel_angular
{
public:
  explicit Init_Msg1_cmd_vel_angular(::msg_pkg1::msg::Msg1 & msg)
  : msg_(msg)
  {}
  Init_Msg1_pose_x cmd_vel_angular(::msg_pkg1::msg::Msg1::_cmd_vel_angular_type arg)
  {
    msg_.cmd_vel_angular = std::move(arg);
    return Init_Msg1_pose_x(msg_);
  }

private:
  ::msg_pkg1::msg::Msg1 msg_;
};

class Init_Msg1_cmd_vel_linear
{
public:
  Init_Msg1_cmd_vel_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Msg1_cmd_vel_angular cmd_vel_linear(::msg_pkg1::msg::Msg1::_cmd_vel_linear_type arg)
  {
    msg_.cmd_vel_linear = std::move(arg);
    return Init_Msg1_cmd_vel_angular(msg_);
  }

private:
  ::msg_pkg1::msg::Msg1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::msg::Msg1>()
{
  return msg_pkg1::msg::builder::Init_Msg1_cmd_vel_linear();
}

}  // namespace msg_pkg1

#endif  // MSG_PKG1__MSG__DETAIL__MSG1__BUILDER_HPP_
