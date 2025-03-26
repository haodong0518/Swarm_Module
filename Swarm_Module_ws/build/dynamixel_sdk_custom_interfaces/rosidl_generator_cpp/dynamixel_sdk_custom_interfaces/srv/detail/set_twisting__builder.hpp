// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetTwisting.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/srv/set_twisting.hpp"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_TWISTING__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_TWISTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/srv/detail/set_twisting__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTwisting_Request_twist_dir
{
public:
  Init_SetTwisting_Request_twist_dir()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Request twist_dir(::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Request::_twist_dir_type arg)
  {
    msg_.twist_dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Request>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetTwisting_Request_twist_dir();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTwisting_Response_success
{
public:
  Init_SetTwisting_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Response success(::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Response>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetTwisting_Response_success();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetTwisting_Event_response
{
public:
  explicit Init_SetTwisting_Event_response(::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event response(::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event msg_;
};

class Init_SetTwisting_Event_request
{
public:
  explicit Init_SetTwisting_Event_request(::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event & msg)
  : msg_(msg)
  {}
  Init_SetTwisting_Event_response request(::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetTwisting_Event_response(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event msg_;
};

class Init_SetTwisting_Event_info
{
public:
  Init_SetTwisting_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetTwisting_Event_request info(::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetTwisting_Event_request(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetTwisting_Event>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetTwisting_Event_info();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_TWISTING__BUILDER_HPP_
