// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_pkg1:msg/Message2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__STRUCT_HPP_
#define INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interface_pkg1__msg__Message2 __attribute__((deprecated))
#else
# define DEPRECATED__interface_pkg1__msg__Message2 __declspec(deprecated)
#endif

namespace interface_pkg1
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Message2_
{
  using Type = Message2_<ContainerAllocator>;

  explicit Message2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
    }
  }

  explicit Message2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
    }
  }

  // field types and members
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _radius_type =
    double;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_pkg1::msg::Message2_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_pkg1::msg::Message2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_pkg1::msg::Message2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_pkg1::msg::Message2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::msg::Message2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::msg::Message2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::msg::Message2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::msg::Message2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_pkg1::msg::Message2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_pkg1::msg::Message2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_pkg1__msg__Message2
    std::shared_ptr<interface_pkg1::msg::Message2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_pkg1__msg__Message2
    std::shared_ptr<interface_pkg1::msg::Message2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Message2_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const Message2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Message2_

// alias to use template instance with default allocator
using Message2 =
  interface_pkg1::msg::Message2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_pkg1

#endif  // INTERFACE_PKG1__MSG__DETAIL__MESSAGE2__STRUCT_HPP_
