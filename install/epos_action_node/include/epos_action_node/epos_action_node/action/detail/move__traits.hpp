// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from epos_action_node:action/Move.idl
// generated code does not contain a copyright notice

#ifndef EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__TRAITS_HPP_
#define EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "epos_action_node/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: order
  {
    out << "order: ";
    rosidl_generator_traits::value_to_yaml(msg.order, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order: ";
    rosidl_generator_traits::value_to_yaml(msg.order, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_Goal & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_Goal>()
{
  return "epos_action_node::action::Move_Goal";
}

template<>
inline const char * name<epos_action_node::action::Move_Goal>()
{
  return "epos_action_node/action/Move_Goal";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<epos_action_node::action::Move_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: sequence
  {
    if (msg.sequence.size() == 0) {
      out << "sequence: []";
    } else {
      out << "sequence: [";
      size_t pending_items = msg.sequence.size();
      for (auto item : msg.sequence) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sequence.size() == 0) {
      out << "sequence: []\n";
    } else {
      out << "sequence:\n";
      for (auto item : msg.sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_Result & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_Result>()
{
  return "epos_action_node::action::Move_Result";
}

template<>
inline const char * name<epos_action_node::action::Move_Result>()
{
  return "epos_action_node/action/Move_Result";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<epos_action_node::action::Move_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: partial_sequences
  {
    if (msg.partial_sequences.size() == 0) {
      out << "partial_sequences: []";
    } else {
      out << "partial_sequences: [";
      size_t pending_items = msg.partial_sequences.size();
      for (auto item : msg.partial_sequences) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: partial_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.partial_sequences.size() == 0) {
      out << "partial_sequences: []\n";
    } else {
      out << "partial_sequences:\n";
      for (auto item : msg.partial_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_Feedback & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_Feedback>()
{
  return "epos_action_node::action::Move_Feedback";
}

template<>
inline const char * name<epos_action_node::action::Move_Feedback>()
{
  return "epos_action_node/action/Move_Feedback";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<epos_action_node::action::Move_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "epos_action_node/action/detail/move__traits.hpp"

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_SendGoal_Request & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_SendGoal_Request>()
{
  return "epos_action_node::action::Move_SendGoal_Request";
}

template<>
inline const char * name<epos_action_node::action::Move_SendGoal_Request>()
{
  return "epos_action_node/action/Move_SendGoal_Request";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<epos_action_node::action::Move_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<epos_action_node::action::Move_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_action_node::action::Move_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_SendGoal_Response & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_SendGoal_Response>()
{
  return "epos_action_node::action::Move_SendGoal_Response";
}

template<>
inline const char * name<epos_action_node::action::Move_SendGoal_Response>()
{
  return "epos_action_node/action/Move_SendGoal_Response";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<epos_action_node::action::Move_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_action_node::action::Move_SendGoal>()
{
  return "epos_action_node::action::Move_SendGoal";
}

template<>
inline const char * name<epos_action_node::action::Move_SendGoal>()
{
  return "epos_action_node/action/Move_SendGoal";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<epos_action_node::action::Move_SendGoal_Request>::value &&
    has_fixed_size<epos_action_node::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<epos_action_node::action::Move_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<epos_action_node::action::Move_SendGoal_Request>::value &&
    has_bounded_size<epos_action_node::action::Move_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<epos_action_node::action::Move_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<epos_action_node::action::Move_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<epos_action_node::action::Move_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_GetResult_Request & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_GetResult_Request>()
{
  return "epos_action_node::action::Move_GetResult_Request";
}

template<>
inline const char * name<epos_action_node::action::Move_GetResult_Request>()
{
  return "epos_action_node/action/Move_GetResult_Request";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_action_node::action::Move_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "epos_action_node/action/detail/move__traits.hpp"

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_GetResult_Response & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_GetResult_Response>()
{
  return "epos_action_node::action::Move_GetResult_Response";
}

template<>
inline const char * name<epos_action_node::action::Move_GetResult_Response>()
{
  return "epos_action_node/action/Move_GetResult_Response";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<epos_action_node::action::Move_Result>::value> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<epos_action_node::action::Move_Result>::value> {};

template<>
struct is_message<epos_action_node::action::Move_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<epos_action_node::action::Move_GetResult>()
{
  return "epos_action_node::action::Move_GetResult";
}

template<>
inline const char * name<epos_action_node::action::Move_GetResult>()
{
  return "epos_action_node/action/Move_GetResult";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<epos_action_node::action::Move_GetResult_Request>::value &&
    has_fixed_size<epos_action_node::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<epos_action_node::action::Move_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<epos_action_node::action::Move_GetResult_Request>::value &&
    has_bounded_size<epos_action_node::action::Move_GetResult_Response>::value
  >
{
};

template<>
struct is_service<epos_action_node::action::Move_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<epos_action_node::action::Move_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<epos_action_node::action::Move_GetResult_Response>
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
// #include "epos_action_node/action/detail/move__traits.hpp"

namespace epos_action_node
{

namespace action
{

inline void to_flow_style_yaml(
  const Move_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Move_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace epos_action_node

namespace rosidl_generator_traits
{

[[deprecated("use epos_action_node::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const epos_action_node::action::Move_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  epos_action_node::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use epos_action_node::action::to_yaml() instead")]]
inline std::string to_yaml(const epos_action_node::action::Move_FeedbackMessage & msg)
{
  return epos_action_node::action::to_yaml(msg);
}

template<>
inline const char * data_type<epos_action_node::action::Move_FeedbackMessage>()
{
  return "epos_action_node::action::Move_FeedbackMessage";
}

template<>
inline const char * name<epos_action_node::action::Move_FeedbackMessage>()
{
  return "epos_action_node/action/Move_FeedbackMessage";
}

template<>
struct has_fixed_size<epos_action_node::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<epos_action_node::action::Move_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<epos_action_node::action::Move_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<epos_action_node::action::Move_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<epos_action_node::action::Move_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<epos_action_node::action::Move>
  : std::true_type
{
};

template<>
struct is_action_goal<epos_action_node::action::Move_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<epos_action_node::action::Move_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<epos_action_node::action::Move_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // EPOS_ACTION_NODE__ACTION__DETAIL__MOVE__TRAITS_HPP_
