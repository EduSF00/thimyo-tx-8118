// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from thymio_msgs:msg/Sound.idl
// generated code does not contain a copyright notice
#include "thymio_msgs/msg/detail/sound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
thymio_msgs__msg__Sound__init(thymio_msgs__msg__Sound * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__init(&msg->duration)) {
    thymio_msgs__msg__Sound__fini(msg);
    return false;
  }
  // frequency
  return true;
}

void
thymio_msgs__msg__Sound__fini(thymio_msgs__msg__Sound * msg)
{
  if (!msg) {
    return;
  }
  // duration
  builtin_interfaces__msg__Duration__fini(&msg->duration);
  // frequency
}

bool
thymio_msgs__msg__Sound__are_equal(const thymio_msgs__msg__Sound * lhs, const thymio_msgs__msg__Sound * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->duration), &(rhs->duration)))
  {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  return true;
}

bool
thymio_msgs__msg__Sound__copy(
  const thymio_msgs__msg__Sound * input,
  thymio_msgs__msg__Sound * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->duration), &(output->duration)))
  {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  return true;
}

thymio_msgs__msg__Sound *
thymio_msgs__msg__Sound__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__Sound * msg = (thymio_msgs__msg__Sound *)allocator.allocate(sizeof(thymio_msgs__msg__Sound), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(thymio_msgs__msg__Sound));
  bool success = thymio_msgs__msg__Sound__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
thymio_msgs__msg__Sound__destroy(thymio_msgs__msg__Sound * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    thymio_msgs__msg__Sound__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
thymio_msgs__msg__Sound__Sequence__init(thymio_msgs__msg__Sound__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__Sound * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(thymio_msgs__msg__Sound)) {
      return false;
    }
    data = (thymio_msgs__msg__Sound *)allocator.zero_allocate(size, sizeof(thymio_msgs__msg__Sound), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = thymio_msgs__msg__Sound__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        thymio_msgs__msg__Sound__fini(&data[i - 1]);
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
thymio_msgs__msg__Sound__Sequence__fini(thymio_msgs__msg__Sound__Sequence * array)
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
      thymio_msgs__msg__Sound__fini(&array->data[i]);
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

thymio_msgs__msg__Sound__Sequence *
thymio_msgs__msg__Sound__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__Sound__Sequence * array = (thymio_msgs__msg__Sound__Sequence *)allocator.allocate(sizeof(thymio_msgs__msg__Sound__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = thymio_msgs__msg__Sound__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
thymio_msgs__msg__Sound__Sequence__destroy(thymio_msgs__msg__Sound__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    thymio_msgs__msg__Sound__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
thymio_msgs__msg__Sound__Sequence__are_equal(const thymio_msgs__msg__Sound__Sequence * lhs, const thymio_msgs__msg__Sound__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!thymio_msgs__msg__Sound__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
thymio_msgs__msg__Sound__Sequence__copy(
  const thymio_msgs__msg__Sound__Sequence * input,
  thymio_msgs__msg__Sound__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(thymio_msgs__msg__Sound)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(thymio_msgs__msg__Sound);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    thymio_msgs__msg__Sound * data =
      (thymio_msgs__msg__Sound *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!thymio_msgs__msg__Sound__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          thymio_msgs__msg__Sound__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!thymio_msgs__msg__Sound__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
