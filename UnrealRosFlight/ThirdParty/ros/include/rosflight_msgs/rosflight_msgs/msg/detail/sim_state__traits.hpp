// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosflight_msgs:msg/SimState.idl
// generated code does not contain a copyright notice

#ifndef ROSFLIGHT_MSGS__MSG__DETAIL__SIM_STATE__TRAITS_HPP_
#define ROSFLIGHT_MSGS__MSG__DETAIL__SIM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosflight_msgs/msg/detail/sim_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace rosflight_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rosflight_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosflight_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosflight_msgs::msg::SimState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosflight_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosflight_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosflight_msgs::msg::SimState & msg)
{
  return rosflight_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosflight_msgs::msg::SimState>()
{
  return "rosflight_msgs::msg::SimState";
}

template<>
inline const char * name<rosflight_msgs::msg::SimState>()
{
  return "rosflight_msgs/msg/SimState";
}

template<>
struct has_fixed_size<rosflight_msgs::msg::SimState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rosflight_msgs::msg::SimState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rosflight_msgs::msg::SimState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSFLIGHT_MSGS__MSG__DETAIL__SIM_STATE__TRAITS_HPP_
