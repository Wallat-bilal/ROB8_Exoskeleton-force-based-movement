// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from epos_node_test:action/Home.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
#include "epos_node_test/action/detail/home__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Goal_type_support_ids_t;

static const _Home_Goal_type_support_ids_t _Home_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_Goal_type_support_symbol_names_t _Home_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_Goal)),
  }
};

typedef struct _Home_Goal_type_support_data_t
{
  void * data[2];
} _Home_Goal_type_support_data_t;

static _Home_Goal_type_support_data_t _Home_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_Goal_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Home_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Home_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_Goal)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Result_type_support_ids_t;

static const _Home_Result_type_support_ids_t _Home_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_Result_type_support_symbol_names_t _Home_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_Result)),
  }
};

typedef struct _Home_Result_type_support_data_t
{
  void * data[2];
} _Home_Result_type_support_data_t;

static _Home_Result_type_support_data_t _Home_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_Result_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Home_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Home_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_Result)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Feedback_type_support_ids_t;

static const _Home_Feedback_type_support_ids_t _Home_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_Feedback_type_support_symbol_names_t _Home_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_Feedback)),
  }
};

typedef struct _Home_Feedback_type_support_data_t
{
  void * data[2];
} _Home_Feedback_type_support_data_t;

static _Home_Feedback_type_support_data_t _Home_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_Feedback_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Home_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Home_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_Feedback)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_Request_type_support_ids_t;

static const _Home_SendGoal_Request_type_support_ids_t _Home_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_SendGoal_Request_type_support_symbol_names_t _Home_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_SendGoal_Request)),
  }
};

typedef struct _Home_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Home_SendGoal_Request_type_support_data_t;

static _Home_SendGoal_Request_type_support_data_t _Home_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_SendGoal_Request_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Home_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Home_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_SendGoal_Request)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_Response_type_support_ids_t;

static const _Home_SendGoal_Response_type_support_ids_t _Home_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_SendGoal_Response_type_support_symbol_names_t _Home_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_SendGoal_Response)),
  }
};

typedef struct _Home_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Home_SendGoal_Response_type_support_data_t;

static _Home_SendGoal_Response_type_support_data_t _Home_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_SendGoal_Response_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Home_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Home_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_SendGoal_Response)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_type_support_ids_t;

static const _Home_SendGoal_type_support_ids_t _Home_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_SendGoal_type_support_symbol_names_t _Home_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_SendGoal)),
  }
};

typedef struct _Home_SendGoal_type_support_data_t
{
  void * data[2];
} _Home_SendGoal_type_support_data_t;

static _Home_SendGoal_type_support_data_t _Home_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_SendGoal_service_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Home_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Home_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Home_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_SendGoal)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_Request_type_support_ids_t;

static const _Home_GetResult_Request_type_support_ids_t _Home_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_GetResult_Request_type_support_symbol_names_t _Home_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_GetResult_Request)),
  }
};

typedef struct _Home_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Home_GetResult_Request_type_support_data_t;

static _Home_GetResult_Request_type_support_data_t _Home_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_GetResult_Request_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Home_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Home_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_GetResult_Request)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_Response_type_support_ids_t;

static const _Home_GetResult_Response_type_support_ids_t _Home_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_GetResult_Response_type_support_symbol_names_t _Home_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_GetResult_Response)),
  }
};

typedef struct _Home_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Home_GetResult_Response_type_support_data_t;

static _Home_GetResult_Response_type_support_data_t _Home_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_GetResult_Response_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Home_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Home_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_GetResult_Response)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_type_support_ids_t;

static const _Home_GetResult_type_support_ids_t _Home_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_GetResult_type_support_symbol_names_t _Home_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_GetResult)),
  }
};

typedef struct _Home_GetResult_type_support_data_t
{
  void * data[2];
} _Home_GetResult_type_support_data_t;

static _Home_GetResult_type_support_data_t _Home_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_GetResult_service_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Home_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Home_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Home_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_GetResult)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Home_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_FeedbackMessage_type_support_ids_t;

static const _Home_FeedbackMessage_type_support_ids_t _Home_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Home_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_FeedbackMessage_type_support_symbol_names_t _Home_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, epos_node_test, action, Home_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, Home_FeedbackMessage)),
  }
};

typedef struct _Home_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Home_FeedbackMessage_type_support_data_t;

static _Home_FeedbackMessage_type_support_data_t _Home_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_FeedbackMessage_message_typesupport_map = {
  2,
  "epos_node_test",
  &_Home_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Home_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Home_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace epos_node_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, epos_node_test, action, Home_FeedbackMessage)() {
  return &::epos_node_test::action::rosidl_typesupport_c::Home_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "epos_node_test/action/home.h"
#include "epos_node_test/action/detail/home__type_support.h"

static rosidl_action_type_support_t _epos_node_test__action__Home__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_epos_node_test
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, epos_node_test, action, Home)()
{
  // Thread-safe by always writing the same values to the static struct
  _epos_node_test__action__Home__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, epos_node_test, action, Home_SendGoal)();
  _epos_node_test__action__Home__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, epos_node_test, action, Home_GetResult)();
  _epos_node_test__action__Home__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _epos_node_test__action__Home__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, epos_node_test, action, Home_FeedbackMessage)();
  _epos_node_test__action__Home__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_epos_node_test__action__Home__typesupport_c;
}

#ifdef __cplusplus
}
#endif
