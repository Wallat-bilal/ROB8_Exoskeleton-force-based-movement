// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from epos_node_test:action/MoveToPos.idl
// generated code does not contain a copyright notice

#ifndef EPOS_NODE_TEST__ACTION__DETAIL__MOVE_TO_POS__TRAITS_HPP_
#define EPOS_NODE_TEST__ACTION__DETAIL__MOVE_TO_POS__TRAITS_HPP_

#include "epos_node_test/action/detail/move_to_pos__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_Goal>()
{
  return "epos_node_test::action::MoveToPos_Goal";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_Goal>()
{
  return "epos_node_test/action/MoveToPos_Goal";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_Result>()
{
  return "epos_node_test::action::MoveToPos_Result";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_Result>()
{
  return "epos_node_test/action/MoveToPos_Result";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_Feedback>()
{
  return "epos_node_test::action::MoveToPos_Feedback";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_Feedback>()
{
  return "epos_node_test/action/MoveToPos_Feedback";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "epos_node_test/action/detail/move_to_pos__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_SendGoal_Request>()
{
  return "epos_node_test::action::MoveToPos_SendGoal_Request";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_SendGoal_Request>()
{
  return "epos_node_test/action/MoveToPos_SendGoal_Request";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<epos_node_test::action::MoveToPos_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<epos_node_test::action::MoveToPos_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_SendGoal_Response>()
{
  return "epos_node_test::action::MoveToPos_SendGoal_Response";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_SendGoal_Response>()
{
  return "epos_node_test/action/MoveToPos_SendGoal_Response";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_SendGoal>()
{
  return "epos_node_test::action::MoveToPos_SendGoal";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_SendGoal>()
{
  return "epos_node_test/action/MoveToPos_SendGoal";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<epos_node_test::action::MoveToPos_SendGoal_Request>::value &&
    has_fixed_size<epos_node_test::action::MoveToPos_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<epos_node_test::action::MoveToPos_SendGoal_Request>::value &&
    has_bounded_size<epos_node_test::action::MoveToPos_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<epos_node_test::action::MoveToPos_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<epos_node_test::action::MoveToPos_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<epos_node_test::action::MoveToPos_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_GetResult_Request>()
{
  return "epos_node_test::action::MoveToPos_GetResult_Request";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_GetResult_Request>()
{
  return "epos_node_test/action/MoveToPos_GetResult_Request";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "epos_node_test/action/detail/move_to_pos__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_GetResult_Response>()
{
  return "epos_node_test::action::MoveToPos_GetResult_Response";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_GetResult_Response>()
{
  return "epos_node_test/action/MoveToPos_GetResult_Response";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<epos_node_test::action::MoveToPos_Result>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<epos_node_test::action::MoveToPos_Result>::value> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_GetResult>()
{
  return "epos_node_test::action::MoveToPos_GetResult";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_GetResult>()
{
  return "epos_node_test/action/MoveToPos_GetResult";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<epos_node_test::action::MoveToPos_GetResult_Request>::value &&
    has_fixed_size<epos_node_test::action::MoveToPos_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<epos_node_test::action::MoveToPos_GetResult_Request>::value &&
    has_bounded_size<epos_node_test::action::MoveToPos_GetResult_Response>::value
  >
{
};

template<>
struct is_service<epos_node_test::action::MoveToPos_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<epos_node_test::action::MoveToPos_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<epos_node_test::action::MoveToPos_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "epos_node_test/action/detail/move_to_pos__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::MoveToPos_FeedbackMessage>()
{
  return "epos_node_test::action::MoveToPos_FeedbackMessage";
}

template<>
inline const char * name<epos_node_test::action::MoveToPos_FeedbackMessage>()
{
  return "epos_node_test/action/MoveToPos_FeedbackMessage";
}

template<>
struct has_fixed_size<epos_node_test::action::MoveToPos_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<epos_node_test::action::MoveToPos_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::MoveToPos_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<epos_node_test::action::MoveToPos_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_node_test::action::MoveToPos_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<epos_node_test::action::MoveToPos>
  : std::true_type
{
};

template<>
struct is_action_goal<epos_node_test::action::MoveToPos_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<epos_node_test::action::MoveToPos_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<epos_node_test::action::MoveToPos_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EPOS_NODE_TEST__ACTION__DETAIL__MOVE_TO_POS__TRAITS_HPP_
