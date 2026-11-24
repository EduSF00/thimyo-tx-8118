// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from thymio_msgs:msg/LedGesture.idl
// generated code does not contain a copyright notice
#include "thymio_msgs/msg/detail/led_gesture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mask`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
thymio_msgs__msg__LedGesture__init(thymio_msgs__msg__LedGesture * msg)
{
  if (!msg) {
    return false;
  }
  // gesture
  // wave
  // leds
  // period
  // length
  // mirror
  // mask
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->mask, 0)) {
    thymio_msgs__msg__LedGesture__fini(msg);
    return false;
  }
  return true;
}

void
thymio_msgs__msg__LedGesture__fini(thymio_msgs__msg__LedGesture * msg)
{
  if (!msg) {
    return;
  }
  // gesture
  // wave
  // leds
  // period
  // length
  // mirror
  // mask
  rosidl_runtime_c__boolean__Sequence__fini(&msg->mask);
}

bool
thymio_msgs__msg__LedGesture__are_equal(const thymio_msgs__msg__LedGesture * lhs, const thymio_msgs__msg__LedGesture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gesture
  if (lhs->gesture != rhs->gesture) {
    return false;
  }
  // wave
  if (lhs->wave != rhs->wave) {
    return false;
  }
  // leds
  if (lhs->leds != rhs->leds) {
    return false;
  }
  // period
  if (lhs->period != rhs->period) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // mirror
  if (lhs->mirror != rhs->mirror) {
    return false;
  }
  // mask
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->mask), &(rhs->mask)))
  {
    return false;
  }
  return true;
}

bool
thymio_msgs__msg__LedGesture__copy(
  const thymio_msgs__msg__LedGesture * input,
  thymio_msgs__msg__LedGesture * output)
{
  if (!input || !output) {
    return false;
  }
  // gesture
  output->gesture = input->gesture;
  // wave
  output->wave = input->wave;
  // leds
  output->leds = input->leds;
  // period
  output->period = input->period;
  // length
  output->length = input->length;
  // mirror
  output->mirror = input->mirror;
  // mask
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->mask), &(output->mask)))
  {
    return false;
  }
  return true;
}

thymio_msgs__msg__LedGesture *
thymio_msgs__msg__LedGesture__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__LedGesture * msg = (thymio_msgs__msg__LedGesture *)allocator.allocate(sizeof(thymio_msgs__msg__LedGesture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(thymio_msgs__msg__LedGesture));
  bool success = thymio_msgs__msg__LedGesture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
thymio_msgs__msg__LedGesture__destroy(thymio_msgs__msg__LedGesture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    thymio_msgs__msg__LedGesture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
thymio_msgs__msg__LedGesture__Sequence__init(thymio_msgs__msg__LedGesture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__LedGesture * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(thymio_msgs__msg__LedGesture)) {
      return false;
    }
    data = (thymio_msgs__msg__LedGesture *)allocator.zero_allocate(size, sizeof(thymio_msgs__msg__LedGesture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = thymio_msgs__msg__LedGesture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        thymio_msgs__msg__LedGesture__fini(&data[i - 1]);
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
thymio_msgs__msg__LedGesture__Sequence__fini(thymio_msgs__msg__LedGesture__Sequence * array)
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
      thymio_msgs__msg__LedGesture__fini(&array->data[i]);
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

thymio_msgs__msg__LedGesture__Sequence *
thymio_msgs__msg__LedGesture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  thymio_msgs__msg__LedGesture__Sequence * array = (thymio_msgs__msg__LedGesture__Sequence *)allocator.allocate(sizeof(thymio_msgs__msg__LedGesture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = thymio_msgs__msg__LedGesture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
thymio_msgs__msg__LedGesture__Sequence__destroy(thymio_msgs__msg__LedGesture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    thymio_msgs__msg__LedGesture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
thymio_msgs__msg__LedGesture__Sequence__are_equal(const thymio_msgs__msg__LedGesture__Sequence * lhs, const thymio_msgs__msg__LedGesture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!thymio_msgs__msg__LedGesture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
thymio_msgs__msg__LedGesture__Sequence__copy(
  const thymio_msgs__msg__LedGesture__Sequence * input,
  thymio_msgs__msg__LedGesture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(thymio_msgs__msg__LedGesture)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(thymio_msgs__msg__LedGesture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    thymio_msgs__msg__LedGesture * data =
      (thymio_msgs__msg__LedGesture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!thymio_msgs__msg__LedGesture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          thymio_msgs__msg__LedGesture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!thymio_msgs__msg__LedGesture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
