// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from epos_node_test:action/GoToHome.idl
// generated code does not contain a copyright notice

#ifndef EPOS_NODE_TEST__ACTION__DETAIL__GO_TO_HOME__TRAITS_HPP_
#define EPOS_NODE_TEST__ACTION__DETAIL__GO_TO_HOME__TRAITS_HPP_

#include "epos_node_test/action/detail/go_to_home__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_Goal>()
{
  return "epos_node_test::action::GoToHome_Goal";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_Goal>()
{
  return "epos_node_test/action/GoToHome_Goal";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<epos_node_test::action::GoToHome_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_Result>()
{
  return "epos_node_test::action::GoToHome_Result";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_Result>()
{
  return "epos_node_test/action/GoToHome_Result";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<epos_node_test::action::GoToHome_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_Feedback>()
{
  return "epos_node_test::action::GoToHome_Feedback";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_Feedback>()
{
  return "epos_node_test/action/GoToHome_Feedback";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<epos_node_test::action::GoToHome_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "epos_node_test/action/detail/go_to_home__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_SendGoal_Request>()
{
  return "epos_node_test::action::GoToHome_SendGoal_Request";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_SendGoal_Request>()
{
  return "epos_node_test/action/GoToHome_SendGoal_Request";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<epos_node_test::action::GoToHome_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<epos_node_test::action::GoToHome_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_node_test::action::GoToHome_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_SendGoal_Response>()
{
  return "epos_node_test::action::GoToHome_SendGoal_Response";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_SendGoal_Response>()
{
  return "epos_node_test/action/GoToHome_SendGoal_Response";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<epos_node_test::action::GoToHome_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_SendGoal>()
{
  return "epos_node_test::action::GoToHome_SendGoal";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_SendGoal>()
{
  return "epos_node_test/action/GoToHome_SendGoal";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<epos_node_test::action::GoToHome_SendGoal_Request>::value &&
    has_fixed_size<epos_node_test::action::GoToHome_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<epos_node_test::action::GoToHome_SendGoal_Request>::value &&
    has_bounded_size<epos_node_test::action::GoToHome_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<epos_node_test::action::GoToHome_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<epos_node_test::action::GoToHome_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<epos_node_test::action::GoToHome_SendGoal_Response>
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
inline const char * data_type<epos_node_test::action::GoToHome_GetResult_Request>()
{
  return "epos_node_test::action::GoToHome_GetResult_Request";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_GetResult_Request>()
{
  return "epos_node_test/action/GoToHome_GetResult_Request";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_node_test::action::GoToHome_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "epos_node_test/action/detail/go_to_home__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_GetResult_Response>()
{
  return "epos_node_test::action::GoToHome_GetResult_Response";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_GetResult_Response>()
{
  return "epos_node_test/action/GoToHome_GetResult_Response";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<epos_node_test::action::GoToHome_Result>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<epos_node_test::action::GoToHome_Result>::value> {};

template<>
struct is_message<epos_node_test::action::GoToHome_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_GetResult>()
{
  return "epos_node_test::action::GoToHome_GetResult";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_GetResult>()
{
  return "epos_node_test/action/GoToHome_GetResult";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<epos_node_test::action::GoToHome_GetResult_Request>::value &&
    has_fixed_size<epos_node_test::action::GoToHome_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<epos_node_test::action::GoToHome_GetResult_Request>::value &&
    has_bounded_size<epos_node_test::action::GoToHome_GetResult_Response>::value
  >
{
};

template<>
struct is_service<epos_node_test::action::GoToHome_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<epos_node_test::action::GoToHome_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<epos_node_test::action::GoToHome_GetResult_Response>
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
// #include "epos_node_test/action/detail/go_to_home__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_node_test::action::GoToHome_FeedbackMessage>()
{
  return "epos_node_test::action::GoToHome_FeedbackMessage";
}

template<>
inline const char * name<epos_node_test::action::GoToHome_FeedbackMessage>()
{
  return "epos_node_test/action/GoToHome_FeedbackMessage";
}

template<>
struct has_fixed_size<epos_node_test::action::GoToHome_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<epos_node_test::action::GoToHome_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_node_test::action::GoToHome_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<epos_node_test::action::GoToHome_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_node_test::action::GoToHome_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<epos_node_test::action::GoToHome>
  : std::true_type
{
};

template<>
struct is_action_goal<epos_node_test::action::GoToHome_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<epos_node_test::action::GoToHome_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<epos_node_test::action::GoToHome_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EPOS_NODE_TEST__ACTION__DETAIL__GO_TO_HOME__TRAITS_HPP_
