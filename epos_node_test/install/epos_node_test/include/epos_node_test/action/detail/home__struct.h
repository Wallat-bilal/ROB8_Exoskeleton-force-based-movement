// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from epos_node_test:action/Home.idl
// generated code does not contain a copyright notice

#ifndef EPOS_NODE_TEST__ACTION__DETAIL__HOME__STRUCT_H_
#define EPOS_NODE_TEST__ACTION__DETAIL__HOME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_Goal
{
  int32_t order;
} epos_node_test__action__Home_Goal;

// Struct for a sequence of epos_node_test__action__Home_Goal.
typedef struct epos_node_test__action__Home_Goal__Sequence
{
  epos_node_test__action__Home_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} epos_node_test__action__Home_Result;

// Struct for a sequence of epos_node_test__action__Home_Result.
typedef struct epos_node_test__action__Home_Result__Sequence
{
  epos_node_test__action__Home_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} epos_node_test__action__Home_Feedback;

// Struct for a sequence of epos_node_test__action__Home_Feedback.
typedef struct epos_node_test__action__Home_Feedback__Sequence
{
  epos_node_test__action__Home_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "epos_node_test/action/detail/home__struct.h"

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  epos_node_test__action__Home_Goal goal;
} epos_node_test__action__Home_SendGoal_Request;

// Struct for a sequence of epos_node_test__action__Home_SendGoal_Request.
typedef struct epos_node_test__action__Home_SendGoal_Request__Sequence
{
  epos_node_test__action__Home_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} epos_node_test__action__Home_SendGoal_Response;

// Struct for a sequence of epos_node_test__action__Home_SendGoal_Response.
typedef struct epos_node_test__action__Home_SendGoal_Response__Sequence
{
  epos_node_test__action__Home_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} epos_node_test__action__Home_GetResult_Request;

// Struct for a sequence of epos_node_test__action__Home_GetResult_Request.
typedef struct epos_node_test__action__Home_GetResult_Request__Sequence
{
  epos_node_test__action__Home_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "epos_node_test/action/detail/home__struct.h"

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_GetResult_Response
{
  int8_t status;
  epos_node_test__action__Home_Result result;
} epos_node_test__action__Home_GetResult_Response;

// Struct for a sequence of epos_node_test__action__Home_GetResult_Response.
typedef struct epos_node_test__action__Home_GetResult_Response__Sequence
{
  epos_node_test__action__Home_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "epos_node_test/action/detail/home__struct.h"

// Struct defined in action/Home in the package epos_node_test.
typedef struct epos_node_test__action__Home_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  epos_node_test__action__Home_Feedback feedback;
} epos_node_test__action__Home_FeedbackMessage;

// Struct for a sequence of epos_node_test__action__Home_FeedbackMessage.
typedef struct epos_node_test__action__Home_FeedbackMessage__Sequence
{
  epos_node_test__action__Home_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} epos_node_test__action__Home_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EPOS_NODE_TEST__ACTION__DETAIL__HOME__STRUCT_H_
