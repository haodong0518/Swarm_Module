// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dynamixel_sdk_custom_interfaces:srv/Movement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dynamixel_sdk_custom_interfaces/srv/movement.hpp"


#ifndef DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__MOVEMENT__BUILDER_HPP_
#define DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__MOVEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dynamixel_sdk_custom_interfaces/srv/detail/movement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Movement_Request_twist_dir
{
public:
  explicit Init_Movement_Request_twist_dir(::dynamixel_sdk_custom_interfaces::srv::Movement_Request & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Request twist_dir(::dynamixel_sdk_custom_interfaces::srv::Movement_Request::_twist_dir_type arg)
  {
    msg_.twist_dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Request msg_;
};

class Init_Movement_Request_time_period
{
public:
  explicit Init_Movement_Request_time_period(::dynamixel_sdk_custom_interfaces::srv::Movement_Request & msg)
  : msg_(msg)
  {}
  Init_Movement_Request_twist_dir time_period(::dynamixel_sdk_custom_interfaces::srv::Movement_Request::_time_period_type arg)
  {
    msg_.time_period = std::move(arg);
    return Init_Movement_Request_twist_dir(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Request msg_;
};

class Init_Movement_Request_robot_switch
{
public:
  explicit Init_Movement_Request_robot_switch(::dynamixel_sdk_custom_interfaces::srv::Movement_Request & msg)
  : msg_(msg)
  {}
  Init_Movement_Request_time_period robot_switch(::dynamixel_sdk_custom_interfaces::srv::Movement_Request::_robot_switch_type arg)
  {
    msg_.robot_switch = std::move(arg);
    return Init_Movement_Request_time_period(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Request msg_;
};

class Init_Movement_Request_movement
{
public:
  Init_Movement_Request_movement()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_Request_robot_switch movement(::dynamixel_sdk_custom_interfaces::srv::Movement_Request::_movement_type arg)
  {
    msg_.movement = std::move(arg);
    return Init_Movement_Request_robot_switch(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::Movement_Request>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_Movement_Request_movement();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Movement_Response_success
{
public:
  Init_Movement_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Response success(::dynamixel_sdk_custom_interfaces::srv::Movement_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::Movement_Response>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_Movement_Response_success();
}

}  // namespace dynamixel_sdk_custom_interfaces


namespace dynamixel_sdk_custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Movement_Event_response
{
public:
  explicit Init_Movement_Event_response(::dynamixel_sdk_custom_interfaces::srv::Movement_Event & msg)
  : msg_(msg)
  {}
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Event response(::dynamixel_sdk_custom_interfaces::srv::Movement_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Event msg_;
};

class Init_Movement_Event_request
{
public:
  explicit Init_Movement_Event_request(::dynamixel_sdk_custom_interfaces::srv::Movement_Event & msg)
  : msg_(msg)
  {}
  Init_Movement_Event_response request(::dynamixel_sdk_custom_interfaces::srv::Movement_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Movement_Event_response(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Event msg_;
};

class Init_Movement_Event_info
{
public:
  Init_Movement_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_Event_request info(::dynamixel_sdk_custom_interfaces::srv::Movement_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Movement_Event_request(msg_);
  }

private:
  ::dynamixel_sdk_custom_interfaces::srv::Movement_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dynamixel_sdk_custom_interfaces::srv::Movement_Event>()
{
  return dynamixel_sdk_custom_interfaces::srv::builder::Init_Movement_Event_info();
}

}  // namespace dynamixel_sdk_custom_interfaces

#endif  // DYNAMIXEL_SDK_CUSTOM_INTERFACES__SRV__DETAIL__MOVEMENT__BUILDER_HPP_
