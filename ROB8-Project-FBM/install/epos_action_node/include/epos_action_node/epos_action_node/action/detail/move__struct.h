// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from epos_action_node:action/Move.idl
// generated code does not contain a copyright notice

#ifndef EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__STRUCT_H_
#define EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_Goal
{
  rosidl_runtime_c__String order;
} epos_action_node__action__Move_Goal;

// Struct for a sequence of epos_action_node__action__Move_Goal.
typedef struct epos_action_node__action__Move_Goal__Sequence
{
  epos_action_node__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} epos_action_node__action__Move_Result;

// Struct for a sequence of epos_action_node__action__Move_Result.
typedef struct epos_action_node__action__Move_Result__Sequence
{
  epos_action_node__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequences'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequences;
} epos_action_node__action__Move_Feedback;

// Struct for a sequence of epos_action_node__action__Move_Feedback.
typedef struct epos_action_node__action__Move_Feedback__Sequence
{
  epos_action_node__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "epos_action_node/action/detail/move__struct.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  epos_action_node__action__Move_Goal goal;
} epos_action_node__action__Move_SendGoal_Request;

// Struct for a sequence of epos_action_node__action__Move_SendGoal_Request.
typedef struct epos_action_node__action__Move_SendGoal_Request__Sequence
{
  epos_action_node__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} epos_action_node__action__Move_SendGoal_Response;

// Struct for a sequence of epos_action_node__action__Move_SendGoal_Response.
typedef struct epos_action_node__action__Move_SendGoal_Response__Sequence
{
  epos_action_node__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} epos_action_node__action__Move_GetResult_Request;

// Struct for a sequence of epos_action_node__action__Move_GetResult_Request.
typedef struct epos_action_node__action__Move_GetResult_Request__Sequence
{
  epos_action_node__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "epos_action_node/action/detail/move__struct.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_GetResult_Response
{
  int8_t status;
  epos_action_node__action__Move_Result result;
} epos_action_node__action__Move_GetResult_Response;

// Struct for a sequence of epos_action_node__action__Move_GetResult_Response.
typedef struct epos_action_node__action__Move_GetResult_Response__Sequence
{
  epos_action_node__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "epos_action_node/action/detail/move__struct.h"

/// Struct defined in action/Move in the package epos_action_node.
typedef struct epos_action_node__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  epos_action_node__action__Move_Feedback feedback;
} epos_action_node__action__Move_FeedbackMessage;

// Struct for a sequence of epos_action_node__action__Move_FeedbackMessage.
typedef struct epos_action_node__action__Move_FeedbackMessage__Sequence
{
  epos_action_node__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_action_node__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__STRUCT_H_
