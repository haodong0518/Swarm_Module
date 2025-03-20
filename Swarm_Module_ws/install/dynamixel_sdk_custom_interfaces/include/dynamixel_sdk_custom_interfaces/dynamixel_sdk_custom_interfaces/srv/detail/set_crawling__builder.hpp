// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetCrawling.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/srv/set_crawling.hpp"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_CRAWLING__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_CRAWLING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/srv/detail/set_crawling__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCrawling_Request_time_period
{
public:
  explicit Init_SetCrawling_Request_time_period(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request time_period(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request::_time_period_type arg)
  {
    msg_.time_period = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request msg_;
};

class Init_SetCrawling_Request_state
{
public:
  Init_SetCrawling_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCrawling_Request_time_period state(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SetCrawling_Request_time_period(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Request>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetCrawling_Request_state();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCrawling_Response_success
{
public:
  Init_SetCrawling_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Response success(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Response>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetCrawling_Response_success();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCrawling_Event_response
{
public:
  explicit Init_SetCrawling_Event_response(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event response(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event msg_;
};

class Init_SetCrawling_Event_request
{
public:
  explicit Init_SetCrawling_Event_request(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event & msg)
  : msg_(msg)
  {}
  Init_SetCrawling_Event_response request(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetCrawling_Event_response(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event msg_;
};

class Init_SetCrawling_Event_info
{
public:
  Init_SetCrawling_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetCrawling_Event_request info(::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetCrawling_Event_request(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::SetCrawling_Event>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_SetCrawling_Event_info();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__SET_CRAWLING__BUILDER_HPP_
