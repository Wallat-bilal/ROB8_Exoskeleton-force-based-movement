// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from epos_node_test:action/Home.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "epos_node_test/action/detail/home__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Goal_type_support_ids_t;

static const _Home_Goal_type_support_ids_t _Home_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_Goal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_Goal>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_Goal)() {
  return get_message_type_support_handle<epos_node_test::action::Home_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Result_type_support_ids_t;

static const _Home_Result_type_support_ids_t _Home_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_Result)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_Result>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_Result)() {
  return get_message_type_support_handle<epos_node_test::action::Home_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Feedback_type_support_ids_t;

static const _Home_Feedback_type_support_ids_t _Home_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_Feedback)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_Feedback>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_Feedback)() {
  return get_message_type_support_handle<epos_node_test::action::Home_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_Request_type_support_ids_t;

static const _Home_SendGoal_Request_type_support_ids_t _Home_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_SendGoal_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_SendGoal_Request>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_SendGoal_Request)() {
  return get_message_type_support_handle<epos_node_test::action::Home_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_Response_type_support_ids_t;

static const _Home_SendGoal_Response_type_support_ids_t _Home_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_SendGoal_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_SendGoal_Response>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_SendGoal_Response)() {
  return get_message_type_support_handle<epos_node_test::action::Home_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_type_support_ids_t;

static const _Home_SendGoal_type_support_ids_t _Home_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_SendGoal)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<epos_node_test::action::Home_SendGoal>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_Request_type_support_ids_t;

static const _Home_GetResult_Request_type_support_ids_t _Home_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_GetResult_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_GetResult_Request>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_GetResult_Request)() {
  return get_message_type_support_handle<epos_node_test::action::Home_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_Response_type_support_ids_t;

static const _Home_GetResult_Response_type_support_ids_t _Home_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_GetResult_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_GetResult_Response>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_GetResult_Response)() {
  return get_message_type_support_handle<epos_node_test::action::Home_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_type_support_ids_t;

static const _Home_GetResult_type_support_ids_t _Home_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_GetResult)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<epos_node_test::action::Home_GetResult>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Home_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_FeedbackMessage_type_support_ids_t;

static const _Home_FeedbackMessage_type_support_ids_t _Home_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, epos_node_test, action, Home_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, epos_node_test, action, Home_FeedbackMessage)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<epos_node_test::action::Home_FeedbackMessage>()
{
  return &::epos_node_test::action::rosidl_typesupport_cpp::Home_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, epos_node_test, action, Home_FeedbackMessage)() {
  return get_message_type_support_handle<epos_node_test::action::Home_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "epos_node_test/action/detail/home__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace epos_node_test
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Home_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace epos_node_test

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<epos_node_test::action::Home>()
{
  using ::epos_node_test::action::rosidl_typesupport_cpp::Home_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Home_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::epos_node_test::action::Home::Impl::SendGoalService>();
  Home_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::epos_node_test::action::Home::Impl::GetResultService>();
  Home_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::epos_node_test::action::Home::Impl::CancelGoalService>();
  Home_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::epos_node_test::action::Home::Impl::FeedbackMessage>();
  Home_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::epos_node_test::action::Home::Impl::GoalStatusMessage>();
  return &Home_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
