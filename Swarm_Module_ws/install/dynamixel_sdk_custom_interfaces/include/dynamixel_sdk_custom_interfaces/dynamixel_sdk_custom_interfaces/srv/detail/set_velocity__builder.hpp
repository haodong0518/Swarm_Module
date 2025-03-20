// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetVelocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/srv/set_velocity.hpp"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/srv/detail/set_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Request_vel
{
public:
  Init_SetVelocity_Request_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Request vel(::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Request::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Request>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetVelocity_Request_vel();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Response_success
{
public:
  Init_SetVelocity_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Response success(::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Response>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetVelocity_Response_success();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetVelocity_Event_response
{
public:
  explicit Init_SetVelocity_Event_response(::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event response(::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event msg_;
};

class Init_SetVelocity_Event_request
{
public:
  explicit Init_SetVelocity_Event_request(::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event & msg)
  : msg_(msg)
  {}
  Init_SetVelocity_Event_response request(::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetVelocity_Event_response(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event msg_;
};

class Init_SetVelocity_Event_info
{
public:
  Init_SetVelocity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVelocity_Event_request info(::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetVelocity_Event_request(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetVelocity_Event>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetVelocity_Event_info();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_VELOCITY__BUILDER_HPP_
