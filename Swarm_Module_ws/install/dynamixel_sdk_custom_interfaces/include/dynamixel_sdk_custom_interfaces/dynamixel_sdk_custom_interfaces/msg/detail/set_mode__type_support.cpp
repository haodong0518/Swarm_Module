// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SetMode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_mode__functions.h"
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_mode__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SetMode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dynamixel_sdk_custom_interfaces::msg::SetMode(_init);
}

void SetMode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dynamixel_sdk_custom_interfaces::msg::SetMode *>(message_memory);
  typed_message->~SetMode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetMode_message_member_array[1] = {
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dynamixel_sdk_custom_interfaces::msg::SetMode, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetMode_message_members = {
  "dynamixel_sdk_custom_interfaces::msg",  // message namespace
  "SetMode",  // message name
  1,  // number of fields
  sizeof(dynamixel_sdk_custom_interfaces::msg::SetMode),
  false,  // has_any_key_member_
  SetMode_message_member_array,  // message members
  SetMode_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetMode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMode_message_members,
  get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_hash,
  &dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_description,
  &dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dynamixel_sdk_custom_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_sdk_custom_interfaces::msg::SetMode>()
{
  return &::dynamixel_sdk_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::SetMode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dynamixel_sdk_custom_interfaces, msg, SetMode)() {
  return &::dynamixel_sdk_custom_interfaces::msg::rosidl_typesupport_introspection_cpp::SetMode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
