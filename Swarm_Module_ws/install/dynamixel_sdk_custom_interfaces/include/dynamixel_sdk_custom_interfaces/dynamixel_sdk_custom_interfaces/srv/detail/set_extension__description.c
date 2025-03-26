// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from dynamixel_sdk_custom_interfaces:srv/SetExtension.idl
// generated code does not contain a copyright notice

#include "dynamixel_sdk_custom_interfaces/srv/detail/set_extension__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetExtension__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x87, 0x1b, 0xe0, 0xd8, 0x75, 0x9b, 0x66,
      0xad, 0x4c, 0x2b, 0x01, 0xd5, 0xf0, 0x64, 0x6f,
      0x54, 0xd6, 0xe6, 0x85, 0x8e, 0xa2, 0xb2, 0xf4,
      0x7f, 0xac, 0x9b, 0xe1, 0xfa, 0x65, 0x83, 0xf6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x46, 0x39, 0x17, 0xc2, 0x6c, 0x98, 0xc8,
      0x72, 0x2f, 0xa5, 0x91, 0xa4, 0x47, 0xc5, 0x72,
      0x8d, 0x80, 0x77, 0xb4, 0x24, 0xb3, 0x6c, 0x0a,
      0x98, 0xd6, 0x1c, 0xfa, 0x28, 0xb4, 0x2c, 0x3e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x87, 0x67, 0x95, 0xdb, 0x1a, 0x1d, 0xa1,
      0x75, 0x09, 0xaa, 0xf8, 0x23, 0x06, 0x13, 0x2b,
      0x00, 0x24, 0x72, 0x20, 0x02, 0x74, 0x39, 0x5c,
      0x1b, 0x50, 0x05, 0x57, 0x4b, 0xca, 0x5f, 0x2d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_dynamixel_sdk_custom_interfaces
const rosidl_type_hash_t *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x56, 0xc2, 0x1a, 0x3d, 0x3e, 0x1b, 0x40, 0x07,
      0x1a, 0x61, 0xd3, 0x79, 0xa5, 0x0e, 0x68, 0x38,
      0x7e, 0x0f, 0x66, 0x7f, 0x63, 0xf5, 0x17, 0x08,
      0x57, 0xda, 0xbb, 0xff, 0xa8, 0x32, 0xa7, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char dynamixel_sdk_custom_interfaces__srv__SetExtension__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetExtension";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetExtension_Event";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetExtension_Request";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__TYPE_NAME[] = "dynamixel_sdk_custom_interfaces/srv/SetExtension_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELD_NAME__request_message[] = "request_message";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELD_NAME__response_message[] = "response_message";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_sdk_custom_interfaces__srv__SetExtension__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__SetExtension__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetExtension__TYPE_NAME, 48, 48},
      {dynamixel_sdk_custom_interfaces__srv__SetExtension__FIELDS, 3, 3},
    },
    {dynamixel_sdk_custom_interfaces__srv__SetExtension__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__FIELD_NAME__extend_state[] = "extend_state";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__FIELD_NAME__side[] = "side";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__FIELD_NAME__extend_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__FIELD_NAME__side, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__TYPE_NAME, 56, 56},
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__TYPE_NAME, 57, 57},
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELD_NAME__info[] = "info";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELD_NAME__request[] = "request";
static char dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELDS[] = {
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__TYPE_NAME, 54, 54},
      {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__FIELDS, 3, 3},
    },
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Constants\n"
  "# Request\n"
  "float64 extend_state\n"
  "string side\n"
  "---\n"
  "# Response\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetExtension__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension__TYPE_NAME, 48, 48},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetExtension__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetExtension__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_individual_type_description_source(NULL);
    sources[4] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Request__get_individual_type_description_source(NULL);
    sources[3] = *dynamixel_sdk_custom_interfaces__srv__SetExtension_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
