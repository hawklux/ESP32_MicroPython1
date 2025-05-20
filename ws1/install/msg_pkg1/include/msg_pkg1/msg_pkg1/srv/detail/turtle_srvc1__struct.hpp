// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_pkg1:srv/TurtleSrvc1.idl
// generated code does not contain a copyright notice

#ifndef MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__STRUCT_HPP_
#define MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Request __declspec(deprecated)
#endif

namespace msg_pkg1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleSrvc1_Request_
{
  using Type = TurtleSrvc1_Request_<ContainerAllocator>;

  explicit TurtleSrvc1_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  explicit TurtleSrvc1_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Request
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Request
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleSrvc1_Request_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleSrvc1_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleSrvc1_Request_

// alias to use template instance with default allocator
using TurtleSrvc1_Request =
  msg_pkg1::srv::TurtleSrvc1_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_pkg1


#ifndef _WIN32
# define DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Response __declspec(deprecated)
#endif

namespace msg_pkg1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtleSrvc1_Response_
{
  using Type = TurtleSrvc1_Response_<ContainerAllocator>;

  explicit TurtleSrvc1_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TurtleSrvc1_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _x_type x;
  using _y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _y_type y;
  using _theta_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Response
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_pkg1__srv__TurtleSrvc1_Response
    std::shared_ptr<msg_pkg1::srv::TurtleSrvc1_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtleSrvc1_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtleSrvc1_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtleSrvc1_Response_

// alias to use template instance with default allocator
using TurtleSrvc1_Response =
  msg_pkg1::srv::TurtleSrvc1_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_pkg1

namespace msg_pkg1
{

namespace srv
{

struct TurtleSrvc1
{
  using Request = msg_pkg1::srv::TurtleSrvc1_Request;
  using Response = msg_pkg1::srv::TurtleSrvc1_Response;
};

}  // namespace srv

}  // namespace msg_pkg1

#endif  // MSG_PKG1__SRV__DETAIL__TURTLE_SRVC1__STRUCT_HPP_
