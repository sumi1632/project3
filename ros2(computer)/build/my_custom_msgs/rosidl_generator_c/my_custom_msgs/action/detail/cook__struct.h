// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_msgs:action/Cook.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_MSGS__ACTION__DETAIL__COOK__STRUCT_H_
#define MY_CUSTOM_MSGS__ACTION__DETAIL__COOK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'menu_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_Goal
{
  rosidl_runtime_c__String menu_name;
} my_custom_msgs__action__Cook_Goal;

// Struct for a sequence of my_custom_msgs__action__Cook_Goal.
typedef struct my_custom_msgs__action__Cook_Goal__Sequence
{
  my_custom_msgs__action__Cook_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cook_result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_Result
{
  rosidl_runtime_c__String cook_result;
} my_custom_msgs__action__Cook_Result;

// Struct for a sequence of my_custom_msgs__action__Cook_Result.
typedef struct my_custom_msgs__action__Cook_Result__Sequence
{
  my_custom_msgs__action__Cook_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cook_status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_Feedback
{
  rosidl_runtime_c__String cook_status;
} my_custom_msgs__action__Cook_Feedback;

// Struct for a sequence of my_custom_msgs__action__Cook_Feedback.
typedef struct my_custom_msgs__action__Cook_Feedback__Sequence
{
  my_custom_msgs__action__Cook_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_custom_msgs/action/detail/cook__struct.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_custom_msgs__action__Cook_Goal goal;
} my_custom_msgs__action__Cook_SendGoal_Request;

// Struct for a sequence of my_custom_msgs__action__Cook_SendGoal_Request.
typedef struct my_custom_msgs__action__Cook_SendGoal_Request__Sequence
{
  my_custom_msgs__action__Cook_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_custom_msgs__action__Cook_SendGoal_Response;

// Struct for a sequence of my_custom_msgs__action__Cook_SendGoal_Response.
typedef struct my_custom_msgs__action__Cook_SendGoal_Response__Sequence
{
  my_custom_msgs__action__Cook_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_custom_msgs__action__Cook_GetResult_Request;

// Struct for a sequence of my_custom_msgs__action__Cook_GetResult_Request.
typedef struct my_custom_msgs__action__Cook_GetResult_Request__Sequence
{
  my_custom_msgs__action__Cook_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_custom_msgs/action/detail/cook__struct.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_GetResult_Response
{
  int8_t status;
  my_custom_msgs__action__Cook_Result result;
} my_custom_msgs__action__Cook_GetResult_Response;

// Struct for a sequence of my_custom_msgs__action__Cook_GetResult_Response.
typedef struct my_custom_msgs__action__Cook_GetResult_Response__Sequence
{
  my_custom_msgs__action__Cook_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_custom_msgs/action/detail/cook__struct.h"

/// Struct defined in action/Cook in the package my_custom_msgs.
typedef struct my_custom_msgs__action__Cook_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_custom_msgs__action__Cook_Feedback feedback;
} my_custom_msgs__action__Cook_FeedbackMessage;

// Struct for a sequence of my_custom_msgs__action__Cook_FeedbackMessage.
typedef struct my_custom_msgs__action__Cook_FeedbackMessage__Sequence
{
  my_custom_msgs__action__Cook_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_msgs__action__Cook_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_MSGS__ACTION__DETAIL__COOK__STRUCT_H_