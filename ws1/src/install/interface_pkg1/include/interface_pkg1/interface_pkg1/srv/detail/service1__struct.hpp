// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface_pkg1:srv/Service1.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE_PKG1__SRV__DETAIL__SERVICE1__STRUCT_HPP_
#define INTERFACE_PKG1__SRV__DETAIL__SERVICE1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface_pkg1__srv__Service1_Request __attribute__((deprecated))
#else
# define DEPRECATED__interface_pkg1__srv__Service1_Request __declspec(deprecated)
#endif

namespace interface_pkg1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service1_Request_
{
  using Type = Service1_Request_<ContainerAllocator>;

  explicit Service1_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  explicit Service1_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
      this->c = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;
  using _c_type =
    int64_t;
  _c_type c;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__c(
    const int64_t & _arg)
  {
    this->c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_pkg1::srv::Service1_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_pkg1::srv::Service1_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::srv::Service1_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::srv::Service1_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_pkg1__srv__Service1_Request
    std::shared_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_pkg1__srv__Service1_Request
    std::shared_ptr<interface_pkg1::srv::Service1_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service1_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service1_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service1_Request_

// alias to use template instance with default allocator
using Service1_Request =
  interface_pkg1::srv::Service1_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_pkg1


#ifndef _WIN32
# define DEPRECATED__interface_pkg1__srv__Service1_Response __attribute__((deprecated))
#else
# define DEPRECATED__interface_pkg1__srv__Service1_Response __declspec(deprecated)
#endif

namespace interface_pkg1
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Service1_Response_
{
  using Type = Service1_Response_<ContainerAllocator>;

  explicit Service1_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit Service1_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface_pkg1::srv::Service1_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface_pkg1::srv::Service1_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::srv::Service1_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface_pkg1::srv::Service1_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface_pkg1__srv__Service1_Response
    std::shared_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface_pkg1__srv__Service1_Response
    std::shared_ptr<interface_pkg1::srv::Service1_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Service1_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Service1_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Service1_Response_

// alias to use template instance with default allocator
using Service1_Response =
  interface_pkg1::srv::Service1_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interface_pkg1

namespace interface_pkg1
{

namespace srv
{

struct Service1
{
  using Request = interface_pkg1::srv::Service1_Request;
  using Response = interface_pkg1::srv::Service1_Response;
};

}  // namespace srv

}  // namespace interface_pkg1

#endif  // INTERFACE_PKG1__SRV__DETAIL__SERVICE1__STRUCT_HPP_
