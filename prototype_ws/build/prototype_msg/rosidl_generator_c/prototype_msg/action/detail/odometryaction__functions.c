// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from prototype_msg:action/Odometryaction.idl
// generated code does not contain a copyright notice
#include "prototype_msg/action/detail/odometryaction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
prototype_msg__action__Odometryaction_Goal__init(prototype_msg__action__Odometryaction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // linear_x
  // finish_x
  // finish_y
  return true;
}

void
prototype_msg__action__Odometryaction_Goal__fini(prototype_msg__action__Odometryaction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // linear_x
  // finish_x
  // finish_y
}

bool
prototype_msg__action__Odometryaction_Goal__are_equal(const prototype_msg__action__Odometryaction_Goal * lhs, const prototype_msg__action__Odometryaction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_x
  if (lhs->linear_x != rhs->linear_x) {
    return false;
  }
  // finish_x
  if (lhs->finish_x != rhs->finish_x) {
    return false;
  }
  // finish_y
  if (lhs->finish_y != rhs->finish_y) {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_Goal__copy(
  const prototype_msg__action__Odometryaction_Goal * input,
  prototype_msg__action__Odometryaction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_x
  output->linear_x = input->linear_x;
  // finish_x
  output->finish_x = input->finish_x;
  // finish_y
  output->finish_y = input->finish_y;
  return true;
}

prototype_msg__action__Odometryaction_Goal *
prototype_msg__action__Odometryaction_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Goal * msg = (prototype_msg__action__Odometryaction_Goal *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_Goal));
  bool success = prototype_msg__action__Odometryaction_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_Goal__destroy(prototype_msg__action__Odometryaction_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_Goal__Sequence__init(prototype_msg__action__Odometryaction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Goal * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_Goal *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_Goal__Sequence__fini(prototype_msg__action__Odometryaction_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_Goal__Sequence *
prototype_msg__action__Odometryaction_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Goal__Sequence * array = (prototype_msg__action__Odometryaction_Goal__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_Goal__Sequence__destroy(prototype_msg__action__Odometryaction_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_Goal__Sequence__are_equal(const prototype_msg__action__Odometryaction_Goal__Sequence * lhs, const prototype_msg__action__Odometryaction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_Goal__Sequence__copy(
  const prototype_msg__action__Odometryaction_Goal__Sequence * input,
  prototype_msg__action__Odometryaction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_Goal * data =
      (prototype_msg__action__Odometryaction_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
prototype_msg__action__Odometryaction_Result__init(prototype_msg__action__Odometryaction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // result_dist
  return true;
}

void
prototype_msg__action__Odometryaction_Result__fini(prototype_msg__action__Odometryaction_Result * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // result_dist
}

bool
prototype_msg__action__Odometryaction_Result__are_equal(const prototype_msg__action__Odometryaction_Result * lhs, const prototype_msg__action__Odometryaction_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_y
  if (lhs->pos_y != rhs->pos_y) {
    return false;
  }
  // result_dist
  if (lhs->result_dist != rhs->result_dist) {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_Result__copy(
  const prototype_msg__action__Odometryaction_Result * input,
  prototype_msg__action__Odometryaction_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_x
  output->pos_x = input->pos_x;
  // pos_y
  output->pos_y = input->pos_y;
  // result_dist
  output->result_dist = input->result_dist;
  return true;
}

prototype_msg__action__Odometryaction_Result *
prototype_msg__action__Odometryaction_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Result * msg = (prototype_msg__action__Odometryaction_Result *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_Result));
  bool success = prototype_msg__action__Odometryaction_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_Result__destroy(prototype_msg__action__Odometryaction_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_Result__Sequence__init(prototype_msg__action__Odometryaction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Result * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_Result *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_Result__Sequence__fini(prototype_msg__action__Odometryaction_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_Result__Sequence *
prototype_msg__action__Odometryaction_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Result__Sequence * array = (prototype_msg__action__Odometryaction_Result__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_Result__Sequence__destroy(prototype_msg__action__Odometryaction_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_Result__Sequence__are_equal(const prototype_msg__action__Odometryaction_Result__Sequence * lhs, const prototype_msg__action__Odometryaction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_Result__Sequence__copy(
  const prototype_msg__action__Odometryaction_Result__Sequence * input,
  prototype_msg__action__Odometryaction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_Result * data =
      (prototype_msg__action__Odometryaction_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
prototype_msg__action__Odometryaction_Feedback__init(prototype_msg__action__Odometryaction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // diff_lin
  // diff_ang
  return true;
}

void
prototype_msg__action__Odometryaction_Feedback__fini(prototype_msg__action__Odometryaction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // diff_lin
  // diff_ang
}

bool
prototype_msg__action__Odometryaction_Feedback__are_equal(const prototype_msg__action__Odometryaction_Feedback * lhs, const prototype_msg__action__Odometryaction_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // diff_lin
  if (lhs->diff_lin != rhs->diff_lin) {
    return false;
  }
  // diff_ang
  if (lhs->diff_ang != rhs->diff_ang) {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_Feedback__copy(
  const prototype_msg__action__Odometryaction_Feedback * input,
  prototype_msg__action__Odometryaction_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // diff_lin
  output->diff_lin = input->diff_lin;
  // diff_ang
  output->diff_ang = input->diff_ang;
  return true;
}

prototype_msg__action__Odometryaction_Feedback *
prototype_msg__action__Odometryaction_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Feedback * msg = (prototype_msg__action__Odometryaction_Feedback *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_Feedback));
  bool success = prototype_msg__action__Odometryaction_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_Feedback__destroy(prototype_msg__action__Odometryaction_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_Feedback__Sequence__init(prototype_msg__action__Odometryaction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Feedback * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_Feedback *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_Feedback__Sequence__fini(prototype_msg__action__Odometryaction_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_Feedback__Sequence *
prototype_msg__action__Odometryaction_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_Feedback__Sequence * array = (prototype_msg__action__Odometryaction_Feedback__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_Feedback__Sequence__destroy(prototype_msg__action__Odometryaction_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_Feedback__Sequence__are_equal(const prototype_msg__action__Odometryaction_Feedback__Sequence * lhs, const prototype_msg__action__Odometryaction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_Feedback__Sequence__copy(
  const prototype_msg__action__Odometryaction_Feedback__Sequence * input,
  prototype_msg__action__Odometryaction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_Feedback * data =
      (prototype_msg__action__Odometryaction_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "prototype_msg/action/detail/odometryaction__functions.h"

bool
prototype_msg__action__Odometryaction_SendGoal_Request__init(prototype_msg__action__Odometryaction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    prototype_msg__action__Odometryaction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!prototype_msg__action__Odometryaction_Goal__init(&msg->goal)) {
    prototype_msg__action__Odometryaction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
prototype_msg__action__Odometryaction_SendGoal_Request__fini(prototype_msg__action__Odometryaction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  prototype_msg__action__Odometryaction_Goal__fini(&msg->goal);
}

bool
prototype_msg__action__Odometryaction_SendGoal_Request__are_equal(const prototype_msg__action__Odometryaction_SendGoal_Request * lhs, const prototype_msg__action__Odometryaction_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!prototype_msg__action__Odometryaction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_SendGoal_Request__copy(
  const prototype_msg__action__Odometryaction_SendGoal_Request * input,
  prototype_msg__action__Odometryaction_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!prototype_msg__action__Odometryaction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

prototype_msg__action__Odometryaction_SendGoal_Request *
prototype_msg__action__Odometryaction_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_SendGoal_Request * msg = (prototype_msg__action__Odometryaction_SendGoal_Request *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_SendGoal_Request));
  bool success = prototype_msg__action__Odometryaction_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_SendGoal_Request__destroy(prototype_msg__action__Odometryaction_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__init(prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_SendGoal_Request * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_SendGoal_Request *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__fini(prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_SendGoal_Request__Sequence *
prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * array = (prototype_msg__action__Odometryaction_SendGoal_Request__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__destroy(prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__are_equal(const prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * lhs, const prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_SendGoal_Request__Sequence__copy(
  const prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * input,
  prototype_msg__action__Odometryaction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_SendGoal_Request * data =
      (prototype_msg__action__Odometryaction_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
prototype_msg__action__Odometryaction_SendGoal_Response__init(prototype_msg__action__Odometryaction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    prototype_msg__action__Odometryaction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
prototype_msg__action__Odometryaction_SendGoal_Response__fini(prototype_msg__action__Odometryaction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
prototype_msg__action__Odometryaction_SendGoal_Response__are_equal(const prototype_msg__action__Odometryaction_SendGoal_Response * lhs, const prototype_msg__action__Odometryaction_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_SendGoal_Response__copy(
  const prototype_msg__action__Odometryaction_SendGoal_Response * input,
  prototype_msg__action__Odometryaction_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

prototype_msg__action__Odometryaction_SendGoal_Response *
prototype_msg__action__Odometryaction_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_SendGoal_Response * msg = (prototype_msg__action__Odometryaction_SendGoal_Response *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_SendGoal_Response));
  bool success = prototype_msg__action__Odometryaction_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_SendGoal_Response__destroy(prototype_msg__action__Odometryaction_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__init(prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_SendGoal_Response * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_SendGoal_Response *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__fini(prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_SendGoal_Response__Sequence *
prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * array = (prototype_msg__action__Odometryaction_SendGoal_Response__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__destroy(prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__are_equal(const prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * lhs, const prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_SendGoal_Response__Sequence__copy(
  const prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * input,
  prototype_msg__action__Odometryaction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_SendGoal_Response * data =
      (prototype_msg__action__Odometryaction_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
prototype_msg__action__Odometryaction_GetResult_Request__init(prototype_msg__action__Odometryaction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    prototype_msg__action__Odometryaction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
prototype_msg__action__Odometryaction_GetResult_Request__fini(prototype_msg__action__Odometryaction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
prototype_msg__action__Odometryaction_GetResult_Request__are_equal(const prototype_msg__action__Odometryaction_GetResult_Request * lhs, const prototype_msg__action__Odometryaction_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_GetResult_Request__copy(
  const prototype_msg__action__Odometryaction_GetResult_Request * input,
  prototype_msg__action__Odometryaction_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

prototype_msg__action__Odometryaction_GetResult_Request *
prototype_msg__action__Odometryaction_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_GetResult_Request * msg = (prototype_msg__action__Odometryaction_GetResult_Request *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_GetResult_Request));
  bool success = prototype_msg__action__Odometryaction_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_GetResult_Request__destroy(prototype_msg__action__Odometryaction_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_GetResult_Request__Sequence__init(prototype_msg__action__Odometryaction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_GetResult_Request * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_GetResult_Request *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_GetResult_Request__Sequence__fini(prototype_msg__action__Odometryaction_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_GetResult_Request__Sequence *
prototype_msg__action__Odometryaction_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_GetResult_Request__Sequence * array = (prototype_msg__action__Odometryaction_GetResult_Request__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_GetResult_Request__Sequence__destroy(prototype_msg__action__Odometryaction_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_GetResult_Request__Sequence__are_equal(const prototype_msg__action__Odometryaction_GetResult_Request__Sequence * lhs, const prototype_msg__action__Odometryaction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_GetResult_Request__Sequence__copy(
  const prototype_msg__action__Odometryaction_GetResult_Request__Sequence * input,
  prototype_msg__action__Odometryaction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_GetResult_Request * data =
      (prototype_msg__action__Odometryaction_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "prototype_msg/action/detail/odometryaction__functions.h"

bool
prototype_msg__action__Odometryaction_GetResult_Response__init(prototype_msg__action__Odometryaction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!prototype_msg__action__Odometryaction_Result__init(&msg->result)) {
    prototype_msg__action__Odometryaction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
prototype_msg__action__Odometryaction_GetResult_Response__fini(prototype_msg__action__Odometryaction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  prototype_msg__action__Odometryaction_Result__fini(&msg->result);
}

bool
prototype_msg__action__Odometryaction_GetResult_Response__are_equal(const prototype_msg__action__Odometryaction_GetResult_Response * lhs, const prototype_msg__action__Odometryaction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!prototype_msg__action__Odometryaction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_GetResult_Response__copy(
  const prototype_msg__action__Odometryaction_GetResult_Response * input,
  prototype_msg__action__Odometryaction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!prototype_msg__action__Odometryaction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

prototype_msg__action__Odometryaction_GetResult_Response *
prototype_msg__action__Odometryaction_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_GetResult_Response * msg = (prototype_msg__action__Odometryaction_GetResult_Response *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_GetResult_Response));
  bool success = prototype_msg__action__Odometryaction_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_GetResult_Response__destroy(prototype_msg__action__Odometryaction_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_GetResult_Response__Sequence__init(prototype_msg__action__Odometryaction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_GetResult_Response * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_GetResult_Response *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_GetResult_Response__Sequence__fini(prototype_msg__action__Odometryaction_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_GetResult_Response__Sequence *
prototype_msg__action__Odometryaction_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_GetResult_Response__Sequence * array = (prototype_msg__action__Odometryaction_GetResult_Response__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_GetResult_Response__Sequence__destroy(prototype_msg__action__Odometryaction_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_GetResult_Response__Sequence__are_equal(const prototype_msg__action__Odometryaction_GetResult_Response__Sequence * lhs, const prototype_msg__action__Odometryaction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_GetResult_Response__Sequence__copy(
  const prototype_msg__action__Odometryaction_GetResult_Response__Sequence * input,
  prototype_msg__action__Odometryaction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_GetResult_Response * data =
      (prototype_msg__action__Odometryaction_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "prototype_msg/action/detail/odometryaction__functions.h"

bool
prototype_msg__action__Odometryaction_FeedbackMessage__init(prototype_msg__action__Odometryaction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    prototype_msg__action__Odometryaction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!prototype_msg__action__Odometryaction_Feedback__init(&msg->feedback)) {
    prototype_msg__action__Odometryaction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
prototype_msg__action__Odometryaction_FeedbackMessage__fini(prototype_msg__action__Odometryaction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  prototype_msg__action__Odometryaction_Feedback__fini(&msg->feedback);
}

bool
prototype_msg__action__Odometryaction_FeedbackMessage__are_equal(const prototype_msg__action__Odometryaction_FeedbackMessage * lhs, const prototype_msg__action__Odometryaction_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!prototype_msg__action__Odometryaction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_FeedbackMessage__copy(
  const prototype_msg__action__Odometryaction_FeedbackMessage * input,
  prototype_msg__action__Odometryaction_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!prototype_msg__action__Odometryaction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

prototype_msg__action__Odometryaction_FeedbackMessage *
prototype_msg__action__Odometryaction_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_FeedbackMessage * msg = (prototype_msg__action__Odometryaction_FeedbackMessage *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype_msg__action__Odometryaction_FeedbackMessage));
  bool success = prototype_msg__action__Odometryaction_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype_msg__action__Odometryaction_FeedbackMessage__destroy(prototype_msg__action__Odometryaction_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype_msg__action__Odometryaction_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__init(prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_FeedbackMessage * data = NULL;

  if (size) {
    data = (prototype_msg__action__Odometryaction_FeedbackMessage *)allocator.zero_allocate(size, sizeof(prototype_msg__action__Odometryaction_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype_msg__action__Odometryaction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype_msg__action__Odometryaction_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__fini(prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      prototype_msg__action__Odometryaction_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

prototype_msg__action__Odometryaction_FeedbackMessage__Sequence *
prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * array = (prototype_msg__action__Odometryaction_FeedbackMessage__Sequence *)allocator.allocate(sizeof(prototype_msg__action__Odometryaction_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__destroy(prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__are_equal(const prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * lhs, const prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype_msg__action__Odometryaction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype_msg__action__Odometryaction_FeedbackMessage__Sequence__copy(
  const prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * input,
  prototype_msg__action__Odometryaction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype_msg__action__Odometryaction_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype_msg__action__Odometryaction_FeedbackMessage * data =
      (prototype_msg__action__Odometryaction_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype_msg__action__Odometryaction_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype_msg__action__Odometryaction_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype_msg__action__Odometryaction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
