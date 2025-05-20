// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_pkg1:msg/Message1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__STRUCT_HPP_
#define INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_pkg1__msg__Message1 __attribute__((deprecated))
#else
# define DEPRECATED__interface_pkg1__msg__Message1 __declspec(deprecated)
#endif

namespace interface_pkg1
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Message1_
{
  using Type = Message1_<ContainerAllocator>;

  explicit Message1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  explicit Message1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    interface_pkg1::msg::Message1_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_pkg1::msg::Message1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_pkg1::msg::Message1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_pkg1::msg::Message1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::msg::Message1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::msg::Message1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::msg::Message1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::msg::Message1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_pkg1::msg::Message1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_pkg1::msg::Message1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_pkg1__msg__Message1
    std::shared_ptr<interface_pkg1::msg::Message1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_pkg1__msg__Message1
    std::shared_ptr<interface_pkg1::msg::Message1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Message1_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Message1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Message1_

// alias to use template instance with default allocator
using Message1 =
  interface_pkg1::msg::Message1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface_pkg1

#endif  // INTERFACE_PKG1__MSG__DETAIL__MESSAGE1__STRUCT_HPP_
