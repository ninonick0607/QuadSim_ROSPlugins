// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosflight_msgs:msg/Barometer.idl
// generated code does not contain a copyright notice

#ifndef ROSFLIGHT_MSGS__MSG__DETAIL__BAROMETER__STRUCT_HPP_
#define ROSFLIGHT_MSGS__MSG__DETAIL__BAROMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosflight_msgs__msg__Barometer __attribute__((deprecated))
#else
# define DEPRECATED__rosflight_msgs__msg__Barometer __declspec(deprecated)
#endif

namespace rosflight_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Barometer_
{
  using Type = Barometer_<ContainerAllocator>;

  explicit Barometer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
      this->pressure = 0.0f;
      this->temperature = 0.0f;
    }
  }

  explicit Barometer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0f;
      this->pressure = 0.0f;
      this->temperature = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _altitude_type =
    float;
  _altitude_type altitude;
  using _pressure_type =
    float;
  _pressure_type pressure;
  using _temperature_type =
    float;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__altitude(
    const float & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__pressure(
    const float & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosflight_msgs::msg::Barometer_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosflight_msgs::msg::Barometer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosflight_msgs::msg::Barometer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosflight_msgs::msg::Barometer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosflight_msgs__msg__Barometer
    std::shared_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosflight_msgs__msg__Barometer
    std::shared_ptr<rosflight_msgs::msg::Barometer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Barometer_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const Barometer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Barometer_

// alias to use template instance with default allocator
using Barometer =
  rosflight_msgs::msg::Barometer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosflight_msgs

#endif  // ROSFLIGHT_MSGS__MSG__DETAIL__BAROMETER__STRUCT_HPP_
