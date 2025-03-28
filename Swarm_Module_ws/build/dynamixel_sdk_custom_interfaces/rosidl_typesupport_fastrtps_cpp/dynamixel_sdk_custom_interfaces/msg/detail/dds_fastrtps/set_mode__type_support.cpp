// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dynamixel_sdk_custom_interfaces:msg/SetMode.idl
// generated code does not contain a copyright notice
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_mode__functions.h"
#include "dynamixel_sdk_custom_interfaces/msg/detail/set_mode__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dynamixel_sdk_custom_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
cdr_serialize(
  const dynamixel_sdk_custom_interfaces::msg::SetMode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode
  cdr << ros_message.mode;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dynamixel_sdk_custom_interfaces::msg::SetMode & ros_message)
{
  // Member: mode
  cdr >> ros_message.mode;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
get_serialized_size(
  const dynamixel_sdk_custom_interfaces::msg::SetMode & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
max_serialized_size_SetMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamixel_sdk_custom_interfaces::msg::SetMode;
    is_plain =
      (
      offsetof(DataType, mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
cdr_serialize_key(
  const dynamixel_sdk_custom_interfaces::msg::SetMode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mode
  cdr << ros_message.mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
get_serialized_size_key(
  const dynamixel_sdk_custom_interfaces::msg::SetMode & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dynamixel_sdk_custom_interfaces
max_serialized_size_key_SetMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: mode
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dynamixel_sdk_custom_interfaces::msg::SetMode;
    is_plain =
      (
      offsetof(DataType, mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _SetMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dynamixel_sdk_custom_interfaces::msg::SetMode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dynamixel_sdk_custom_interfaces::msg::SetMode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetMode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dynamixel_sdk_custom_interfaces::msg::SetMode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetMode(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetMode__callbacks = {
  "dynamixel_sdk_custom_interfaces::msg",
  "SetMode",
  _SetMode__cdr_serialize,
  _SetMode__cdr_deserialize,
  _SetMode__get_serialized_size,
  _SetMode__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SetMode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMode__callbacks,
  get_message_typesupport_handle_function,
  &dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_hash,
  &dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_description,
  &dynamixel_sdk_custom_interfaces__msg__SetMode__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dynamixel_sdk_custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dynamixel_sdk_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dynamixel_sdk_custom_interfaces::msg::SetMode>()
{
  return &dynamixel_sdk_custom_interfaces::msg::typesupport_fastrtps_cpp::_SetMode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dynamixel_sdk_custom_interfaces, msg, SetMode)() {
  return &dynamixel_sdk_custom_interfaces::msg::typesupport_fastrtps_cpp::_SetMode__handle;
}

#ifdef __cplusplus
}
#endif
