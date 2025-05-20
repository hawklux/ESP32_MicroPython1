// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_pkg1:srv/TurtleSrvc1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__BUILDER_HPP_
#define MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_pkg1/srv/detail/turtle_srvc1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_pkg1
{

namespace srv
{

namespace builder
{

class Init_TurtleSrvc1_Request_num
{
public:
  Init_TurtleSrvc1_Request_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_pkg1::srv::TurtleSrvc1_Request num(::msg_pkg1::srv::TurtleSrvc1_Request::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::srv::TurtleSrvc1_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::srv::TurtleSrvc1_Request>()
{
  return msg_pkg1::srv::builder::Init_TurtleSrvc1_Request_num();
}

}  // namespace msg_pkg1


namespace msg_pkg1
{

namespace srv
{

namespace builder
{

class Init_TurtleSrvc1_Response_theta
{
public:
  explicit Init_TurtleSrvc1_Response_theta(::msg_pkg1::srv::TurtleSrvc1_Response & msg)
  : msg_(msg)
  {}
  ::msg_pkg1::srv::TurtleSrvc1_Response theta(::msg_pkg1::srv::TurtleSrvc1_Response::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_pkg1::srv::TurtleSrvc1_Response msg_;
};

class Init_TurtleSrvc1_Response_y
{
public:
  explicit Init_TurtleSrvc1_Response_y(::msg_pkg1::srv::TurtleSrvc1_Response & msg)
  : msg_(msg)
  {}
  Init_TurtleSrvc1_Response_theta y(::msg_pkg1::srv::TurtleSrvc1_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TurtleSrvc1_Response_theta(msg_);
  }

private:
  ::msg_pkg1::srv::TurtleSrvc1_Response msg_;
};

class Init_TurtleSrvc1_Response_x
{
public:
  Init_TurtleSrvc1_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleSrvc1_Response_y x(::msg_pkg1::srv::TurtleSrvc1_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TurtleSrvc1_Response_y(msg_);
  }

private:
  ::msg_pkg1::srv::TurtleSrvc1_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_pkg1::srv::TurtleSrvc1_Response>()
{
  return msg_pkg1::srv::builder::Init_TurtleSrvc1_Response_x();
}

}  // namespace msg_pkg1

#endif  // MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__BUILDER_HPP_
