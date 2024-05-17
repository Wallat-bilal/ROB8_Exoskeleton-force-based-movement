// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from epos_node_test:action/MoveToPos.idl
// generated code does not contain a copyright notice

#ifndef EPOS_NODE_TEST__ACTION__DETAIL__MOVE_TO_POS__STRUCT_H_
#define EPOS_NODE_TEST__ACTION__DETAIL__MOVE_TO_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_Goal
{
  int32_t order;
} epos_node_test__action__MoveToPos_Goal;

// Struct for a sequence of epos_node_test__action__MoveToPos_Goal.
typedef struct epos_node_test__action__MoveToPos_Goal__Sequence
{
  epos_node_test__action__MoveToPos_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} epos_node_test__action__MoveToPos_Result;

// Struct for a sequence of epos_node_test__action__MoveToPos_Result.
typedef struct epos_node_test__action__MoveToPos_Result__Sequence
{
  epos_node_test__action__MoveToPos_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} epos_node_test__action__MoveToPos_Feedback;

// Struct for a sequence of epos_node_test__action__MoveToPos_Feedback.
typedef struct epos_node_test__action__MoveToPos_Feedback__Sequence
{
  epos_node_test__action__MoveToPos_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "epos_node_test/action/detail/move_to_pos__struct.h"

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  epos_node_test__action__MoveToPos_Goal goal;
} epos_node_test__action__MoveToPos_SendGoal_Request;

// Struct for a sequence of epos_node_test__action__MoveToPos_SendGoal_Request.
typedef struct epos_node_test__action__MoveToPos_SendGoal_Request__Sequence
{
  epos_node_test__action__MoveToPos_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} epos_node_test__action__MoveToPos_SendGoal_Response;

// Struct for a sequence of epos_node_test__action__MoveToPos_SendGoal_Response.
typedef struct epos_node_test__action__MoveToPos_SendGoal_Response__Sequence
{
  epos_node_test__action__MoveToPos_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} epos_node_test__action__MoveToPos_GetResult_Request;

// Struct for a sequence of epos_node_test__action__MoveToPos_GetResult_Request.
typedef struct epos_node_test__action__MoveToPos_GetResult_Request__Sequence
{
  epos_node_test__action__MoveToPos_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_GetResult_Response
{
  int8_t status;
  epos_node_test__action__MoveToPos_Result result;
} epos_node_test__action__MoveToPos_GetResult_Response;

// Struct for a sequence of epos_node_test__action__MoveToPos_GetResult_Response.
typedef struct epos_node_test__action__MoveToPos_GetResult_Response__Sequence
{
  epos_node_test__action__MoveToPos_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "epos_node_test/action/detail/move_to_pos__struct.h"

// Struct defined in action/MoveToPos in the package epos_node_test.
typedef struct epos_node_test__action__MoveToPos_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  epos_node_test__action__MoveToPos_Feedback feedback;
} epos_node_test__action__MoveToPos_FeedbackMessage;

// Struct for a sequence of epos_node_test__action__MoveToPos_FeedbackMessage.
typedef struct epos_node_test__action__MoveToPos_FeedbackMessage__Sequence
{
  epos_node_test__action__MoveToPos_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__MoveToPos_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EPOS_NODE_TEST__ACTION__DETAIL__MOVE_TO_POS__STRUCT_H_
