// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from epos_node_test:action/GoToHome.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
#include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "epos_node_test/action/detail/go_to_home__functions.h"
#include "epos_node_test/action/detail/go_to_home__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_Goal__init(message_memory);
}

void GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_member_array[1] = {
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_Goal, order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_Goal",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__GoToHome_Goal),
  GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_member_array,  // message members
  GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_type_support_handle = {
  0,
  &GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_Goal)() {
  if (!GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_type_support_handle.typesupport_identifier) {
    GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_Goal__rosidl_typesupport_introspection_c__GoToHome_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__functions.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__struct.h"


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_Result__init(message_memory);
}

void GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_member_array[1] = {
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_Result, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_Result",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__GoToHome_Result),
  GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_member_array,  // message members
  GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_type_support_handle = {
  0,
  &GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_Result)() {
  if (!GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_type_support_handle.typesupport_identifier) {
    GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_Result__rosidl_typesupport_introspection_c__GoToHome_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__functions.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__struct.h"


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_Feedback__init(message_memory);
}

void GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_member_array[1] = {
  {
    "partial_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_Feedback, partial_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_Feedback",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__GoToHome_Feedback),
  GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_member_array,  // message members
  GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_type_support_handle = {
  0,
  &GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_Feedback)() {
  if (!GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_type_support_handle.typesupport_identifier) {
    GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_Feedback__rosidl_typesupport_introspection_c__GoToHome_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__functions.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "epos_node_test/action/go_to_home.h"
// Member `goal`
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_SendGoal_Request__init(message_memory);
}

void GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__GoToHome_SendGoal_Request),
  GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_member_array,  // message members
  GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_type_support_handle = {
  0,
  &GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_SendGoal_Request)() {
  GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_Goal)();
  if (!GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_SendGoal_Request__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__functions.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_SendGoal_Response__init(message_memory);
}

void GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__GoToHome_SendGoal_Response),
  GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_member_array,  // message members
  GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_type_support_handle = {
  0,
  &GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_SendGoal_Response)() {
  GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_SendGoal_Response__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_service_members = {
  "epos_node_test__action",  // service namespace
  "GoToHome_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_service_type_support_handle = {
  0,
  &epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_SendGoal)() {
  if (!epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_service_type_support_handle.typesupport_identifier) {
    epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_SendGoal_Response)()->data;
  }

  return &epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__functions.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_GetResult_Request__init(message_memory);
}

void GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__GoToHome_GetResult_Request),
  GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_member_array,  // message members
  GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_type_support_handle = {
  0,
  &GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_GetResult_Request)() {
  GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_GetResult_Request__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__functions.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "epos_node_test/action/go_to_home.h"
// Member `result`
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_GetResult_Response__init(message_memory);
}

void GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__GoToHome_GetResult_Response),
  GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_member_array,  // message members
  GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_type_support_handle = {
  0,
  &GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_GetResult_Response)() {
  GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_Result)();
  if (!GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_GetResult_Response__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_service_members = {
  "epos_node_test__action",  // service namespace
  "GoToHome_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_service_type_support_handle = {
  0,
  &epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_GetResult)() {
  if (!epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_service_type_support_handle.typesupport_identifier) {
    epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_GetResult_Response)()->data;
  }

  return &epos_node_test__action__detail__go_to_home__rosidl_typesupport_introspection_c__GoToHome_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__functions.h"
// already included above
// #include "epos_node_test/action/detail/go_to_home__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "epos_node_test/action/go_to_home.h"
// Member `feedback`
// already included above
// #include "epos_node_test/action/detail/go_to_home__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__GoToHome_FeedbackMessage__init(message_memory);
}

void GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_fini_function(void * message_memory)
{
  epos_node_test__action__GoToHome_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__GoToHome_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_members = {
  "epos_node_test__action",  // message namespace
  "GoToHome_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__GoToHome_FeedbackMessage),
  GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_member_array,  // message members
  GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_type_support_handle = {
  0,
  &GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_FeedbackMessage)() {
  GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, GoToHome_Feedback)();
  if (!GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GoToHome_FeedbackMessage__rosidl_typesupport_introspection_c__GoToHome_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
