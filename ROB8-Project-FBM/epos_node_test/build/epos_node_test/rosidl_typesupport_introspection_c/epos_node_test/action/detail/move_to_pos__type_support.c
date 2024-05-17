// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from epos_node_test:action/MoveToPos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
#include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "epos_node_test/action/detail/move_to_pos__functions.h"
#include "epos_node_test/action/detail/move_to_pos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_Goal__init(message_memory);
}

void MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_member_array[1] = {
  {
    "order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_Goal, order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_Goal",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_Goal),
  MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_member_array,  // message members
  MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_type_support_handle = {
  0,
  &MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_Goal)() {
  if (!MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_type_support_handle.typesupport_identifier) {
    MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_Goal__rosidl_typesupport_introspection_c__MoveToPos_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__functions.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_Result__init(message_memory);
}

void MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_member_array[1] = {
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_Result, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_Result",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_Result),
  MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_member_array,  // message members
  MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_type_support_handle = {
  0,
  &MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_Result)() {
  if (!MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_type_support_handle.typesupport_identifier) {
    MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_Result__rosidl_typesupport_introspection_c__MoveToPos_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__functions.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_Feedback__init(message_memory);
}

void MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_member_array[1] = {
  {
    "partial_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_Feedback, partial_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_Feedback",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_Feedback),
  MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_member_array,  // message members
  MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_type_support_handle = {
  0,
  &MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_Feedback)() {
  if (!MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_Feedback__rosidl_typesupport_introspection_c__MoveToPos_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__functions.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "epos_node_test/action/move_to_pos.h"
// Member `goal`
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_SendGoal_Request__init(message_memory);
}

void MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(epos_node_test__action__MoveToPos_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_SendGoal_Request),
  MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_member_array,  // message members
  MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_SendGoal_Request)() {
  MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_Goal)();
  if (!MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_SendGoal_Request__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__functions.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_SendGoal_Response__init(message_memory);
}

void MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(epos_node_test__action__MoveToPos_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_SendGoal_Response),
  MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_member_array,  // message members
  MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_SendGoal_Response)() {
  MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_SendGoal_Response__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_service_members = {
  "epos_node_test__action",  // service namespace
  "MoveToPos_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_service_type_support_handle = {
  0,
  &epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_SendGoal)() {
  if (!epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_service_type_support_handle.typesupport_identifier) {
    epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_SendGoal_Response)()->data;
  }

  return &epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__functions.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"


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

void MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_GetResult_Request__init(message_memory);
}

void MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_GetResult_Request),
  MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_member_array,  // message members
  MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_type_support_handle = {
  0,
  &MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_GetResult_Request)() {
  MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_GetResult_Request__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__functions.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "epos_node_test/action/move_to_pos.h"
// Member `result`
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_GetResult_Response__init(message_memory);
}

void MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(epos_node_test__action__MoveToPos_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_GetResult_Response),
  MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_member_array,  // message members
  MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_type_support_handle = {
  0,
  &MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_GetResult_Response)() {
  MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_Result)();
  if (!MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_GetResult_Response__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_service_members = {
  "epos_node_test__action",  // service namespace
  "MoveToPos_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_service_type_support_handle = {
  0,
  &epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_GetResult)() {
  if (!epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_service_type_support_handle.typesupport_identifier) {
    epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_GetResult_Response)()->data;
  }

  return &epos_node_test__action__detail__move_to_pos__rosidl_typesupport_introspection_c__MoveToPos_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"
// already included above
// #include "epos_node_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__functions.h"
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "epos_node_test/action/move_to_pos.h"
// Member `feedback`
// already included above
// #include "epos_node_test/action/detail/move_to_pos__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  epos_node_test__action__MoveToPos_FeedbackMessage__init(message_memory);
}

void MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_fini_function(void * message_memory)
{
  epos_node_test__action__MoveToPos_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(epos_node_test__action__MoveToPos_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(epos_node_test__action__MoveToPos_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_members = {
  "epos_node_test__action",  // message namespace
  "MoveToPos_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(epos_node_test__action__MoveToPos_FeedbackMessage),
  MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_member_array,  // message members
  MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_epos_node_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_FeedbackMessage)() {
  MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, epos_node_test, action, MoveToPos_Feedback)();
  if (!MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveToPos_FeedbackMessage__rosidl_typesupport_introspection_c__MoveToPos_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
