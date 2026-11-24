// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from asebaros_msgs:msg/Event.idl
// generated code does not contain a copyright notice
#include "asebaros_msgs/msg/detail/event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
asebaros_msgs__msg__Event__init(asebaros_msgs__msg__Event * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    asebaros_msgs__msg__Event__fini(msg);
    return false;
  }
  // source
  // data
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->data, 0)) {
    asebaros_msgs__msg__Event__fini(msg);
    return false;
  }
  return true;
}

void
asebaros_msgs__msg__Event__fini(asebaros_msgs__msg__Event * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // source
  // data
  rosidl_runtime_c__int16__Sequence__fini(&msg->data);
}

bool
asebaros_msgs__msg__Event__are_equal(const asebaros_msgs__msg__Event * lhs, const asebaros_msgs__msg__Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
asebaros_msgs__msg__Event__copy(
  const asebaros_msgs__msg__Event * input,
  asebaros_msgs__msg__Event * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // source
  output->source = input->source;
  // data
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

asebaros_msgs__msg__Event *
asebaros_msgs__msg__Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__Event * msg = (asebaros_msgs__msg__Event *)allocator.allocate(sizeof(asebaros_msgs__msg__Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(asebaros_msgs__msg__Event));
  bool success = asebaros_msgs__msg__Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
asebaros_msgs__msg__Event__destroy(asebaros_msgs__msg__Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    asebaros_msgs__msg__Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
asebaros_msgs__msg__Event__Sequence__init(asebaros_msgs__msg__Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(asebaros_msgs__msg__Event)) {
      return false;
    }
    data = (asebaros_msgs__msg__Event *)allocator.zero_allocate(size, sizeof(asebaros_msgs__msg__Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = asebaros_msgs__msg__Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        asebaros_msgs__msg__Event__fini(&data[i - 1]);
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
asebaros_msgs__msg__Event__Sequence__fini(asebaros_msgs__msg__Event__Sequence * array)
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
      asebaros_msgs__msg__Event__fini(&array->data[i]);
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

asebaros_msgs__msg__Event__Sequence *
asebaros_msgs__msg__Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  asebaros_msgs__msg__Event__Sequence * array = (asebaros_msgs__msg__Event__Sequence *)allocator.allocate(sizeof(asebaros_msgs__msg__Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = asebaros_msgs__msg__Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
asebaros_msgs__msg__Event__Sequence__destroy(asebaros_msgs__msg__Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    asebaros_msgs__msg__Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
asebaros_msgs__msg__Event__Sequence__are_equal(const asebaros_msgs__msg__Event__Sequence * lhs, const asebaros_msgs__msg__Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!asebaros_msgs__msg__Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
asebaros_msgs__msg__Event__Sequence__copy(
  const asebaros_msgs__msg__Event__Sequence * input,
  asebaros_msgs__msg__Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(asebaros_msgs__msg__Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(asebaros_msgs__msg__Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    asebaros_msgs__msg__Event * data =
      (asebaros_msgs__msg__Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!asebaros_msgs__msg__Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          asebaros_msgs__msg__Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!asebaros_msgs__msg__Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
