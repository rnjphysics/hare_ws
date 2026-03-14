// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hare_msgs:msg/MotorState.idl
// generated code does not contain a copyright notice
#include "hare_msgs/msg/detail/motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hare_msgs__msg__MotorState__init(hare_msgs__msg__MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // erpm
  // current
  // duty
  // temp_fet
  // temp_motor
  // input_current
  // voltage
  // tachometer
  return true;
}

void
hare_msgs__msg__MotorState__fini(hare_msgs__msg__MotorState * msg)
{
  if (!msg) {
    return;
  }
  // id
  // erpm
  // current
  // duty
  // temp_fet
  // temp_motor
  // input_current
  // voltage
  // tachometer
}

bool
hare_msgs__msg__MotorState__are_equal(const hare_msgs__msg__MotorState * lhs, const hare_msgs__msg__MotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // erpm
  if (lhs->erpm != rhs->erpm) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // duty
  if (lhs->duty != rhs->duty) {
    return false;
  }
  // temp_fet
  if (lhs->temp_fet != rhs->temp_fet) {
    return false;
  }
  // temp_motor
  if (lhs->temp_motor != rhs->temp_motor) {
    return false;
  }
  // input_current
  if (lhs->input_current != rhs->input_current) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // tachometer
  if (lhs->tachometer != rhs->tachometer) {
    return false;
  }
  return true;
}

bool
hare_msgs__msg__MotorState__copy(
  const hare_msgs__msg__MotorState * input,
  hare_msgs__msg__MotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // erpm
  output->erpm = input->erpm;
  // current
  output->current = input->current;
  // duty
  output->duty = input->duty;
  // temp_fet
  output->temp_fet = input->temp_fet;
  // temp_motor
  output->temp_motor = input->temp_motor;
  // input_current
  output->input_current = input->input_current;
  // voltage
  output->voltage = input->voltage;
  // tachometer
  output->tachometer = input->tachometer;
  return true;
}

hare_msgs__msg__MotorState *
hare_msgs__msg__MotorState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hare_msgs__msg__MotorState * msg = (hare_msgs__msg__MotorState *)allocator.allocate(sizeof(hare_msgs__msg__MotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hare_msgs__msg__MotorState));
  bool success = hare_msgs__msg__MotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hare_msgs__msg__MotorState__destroy(hare_msgs__msg__MotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hare_msgs__msg__MotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hare_msgs__msg__MotorState__Sequence__init(hare_msgs__msg__MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hare_msgs__msg__MotorState * data = NULL;

  if (size) {
    data = (hare_msgs__msg__MotorState *)allocator.zero_allocate(size, sizeof(hare_msgs__msg__MotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hare_msgs__msg__MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hare_msgs__msg__MotorState__fini(&data[i - 1]);
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
hare_msgs__msg__MotorState__Sequence__fini(hare_msgs__msg__MotorState__Sequence * array)
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
      hare_msgs__msg__MotorState__fini(&array->data[i]);
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

hare_msgs__msg__MotorState__Sequence *
hare_msgs__msg__MotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hare_msgs__msg__MotorState__Sequence * array = (hare_msgs__msg__MotorState__Sequence *)allocator.allocate(sizeof(hare_msgs__msg__MotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hare_msgs__msg__MotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hare_msgs__msg__MotorState__Sequence__destroy(hare_msgs__msg__MotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hare_msgs__msg__MotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hare_msgs__msg__MotorState__Sequence__are_equal(const hare_msgs__msg__MotorState__Sequence * lhs, const hare_msgs__msg__MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hare_msgs__msg__MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hare_msgs__msg__MotorState__Sequence__copy(
  const hare_msgs__msg__MotorState__Sequence * input,
  hare_msgs__msg__MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hare_msgs__msg__MotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hare_msgs__msg__MotorState * data =
      (hare_msgs__msg__MotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hare_msgs__msg__MotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hare_msgs__msg__MotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hare_msgs__msg__MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
