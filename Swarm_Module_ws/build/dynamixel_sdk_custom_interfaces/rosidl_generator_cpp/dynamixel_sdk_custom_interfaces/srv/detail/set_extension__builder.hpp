// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/srv/set_extension.hpp"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_EXTENSION__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_EXTENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/srv/detail/set_extension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetExtension_Request_side
{
public:
  explicit Init_SetExtension_Request_side(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Request & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Request side(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Request::_side_type arg)
  {
    msg_.side = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Request msg_;
};

class Init_SetExtension_Request_extend_state
{
public:
  Init_SetExtension_Request_extend_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetExtension_Request_side extend_state(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Request::_extend_state_type arg)
  {
    msg_.extend_state = std::move(arg);
    return Init_SetExtension_Request_side(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetExtension_Request>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetExtension_Request_extend_state();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetExtension_Response_success
{
public:
  Init_SetExtension_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Response success(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetExtension_Response>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetExtension_Response_success();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetExtension_Event_response
{
public:
  explicit Init_SetExtension_Event_response(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event response(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event msg_;
};

class Init_SetExtension_Event_request
{
public:
  explicit Init_SetExtension_Event_request(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event & msg)
  : msg_(msg)
  {}
  Init_SetExtension_Event_response request(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetExtension_Event_response(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event msg_;
};

class Init_SetExtension_Event_info
{
public:
  Init_SetExtension_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetExtension_Event_request info(::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetExtension_Event_request(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetExtension_Event>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetExtension_Event_info();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_EXTENSION__BUILDER_HPP_
