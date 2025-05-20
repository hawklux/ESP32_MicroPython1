// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface_pkg1:srv/Service1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__SRV__DETAIL__SERVICE1__BUILDER_HPP_
#define INTERFACE_PKG1__SRV__DETAIL__SERVICE1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface_pkg1/srv/detail/service1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface_pkg1
{

namespace srv
{

namespace builder
{

class Init_Service1_Request_c
{
public:
  explicit Init_Service1_Request_c(::interface_pkg1::srv::Service1_Request & msg)
  : msg_(msg)
  {}
  ::interface_pkg1::srv::Service1_Request c(::interface_pkg1::srv::Service1_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_pkg1::srv::Service1_Request msg_;
};

class Init_Service1_Request_b
{
public:
  explicit Init_Service1_Request_b(::interface_pkg1::srv::Service1_Request & msg)
  : msg_(msg)
  {}
  Init_Service1_Request_c b(::interface_pkg1::srv::Service1_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Service1_Request_c(msg_);
  }

private:
  ::interface_pkg1::srv::Service1_Request msg_;
};

class Init_Service1_Request_a
{
public:
  Init_Service1_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Service1_Request_b a(::interface_pkg1::srv::Service1_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Service1_Request_b(msg_);
  }

private:
  ::interface_pkg1::srv::Service1_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_pkg1::srv::Service1_Request>()
{
  return interface_pkg1::srv::builder::Init_Service1_Request_a();
}

}  // namespace interface_pkg1


namespace interface_pkg1
{

namespace srv
{

namespace builder
{

class Init_Service1_Response_sum
{
public:
  Init_Service1_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface_pkg1::srv::Service1_Response sum(::interface_pkg1::srv::Service1_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface_pkg1::srv::Service1_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface_pkg1::srv::Service1_Response>()
{
  return interface_pkg1::srv::builder::Init_Service1_Response_sum();
}

}  // namespace interface_pkg1

#endif  // INTERFACE_PKG1__SRV__DETAIL__SERVICE1__BUILDER_HPP_
