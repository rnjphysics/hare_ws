# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hare_msgs:msg/MotorState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorState(type):
    """Metaclass of message 'MotorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hare_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hare_msgs.msg.MotorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorState(metaclass=Metaclass_MotorState):
    """Message class 'MotorState'."""

    __slots__ = [
        '_id',
        '_erpm',
        '_current',
        '_duty',
        '_temp_fet',
        '_temp_motor',
        '_input_current',
        '_voltage',
        '_tachometer',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'erpm': 'int32',
        'current': 'float',
        'duty': 'float',
        'temp_fet': 'float',
        'temp_motor': 'float',
        'input_current': 'float',
        'voltage': 'float',
        'tachometer': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.erpm = kwargs.get('erpm', int())
        self.current = kwargs.get('current', float())
        self.duty = kwargs.get('duty', float())
        self.temp_fet = kwargs.get('temp_fet', float())
        self.temp_motor = kwargs.get('temp_motor', float())
        self.input_current = kwargs.get('input_current', float())
        self.voltage = kwargs.get('voltage', float())
        self.tachometer = kwargs.get('tachometer', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.id != other.id:
            return False
        if self.erpm != other.erpm:
            return False
        if self.current != other.current:
            return False
        if self.duty != other.duty:
            return False
        if self.temp_fet != other.temp_fet:
            return False
        if self.temp_motor != other.temp_motor:
            return False
        if self.input_current != other.input_current:
            return False
        if self.voltage != other.voltage:
            return False
        if self.tachometer != other.tachometer:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def erpm(self):
        """Message field 'erpm'."""
        return self._erpm

    @erpm.setter
    def erpm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'erpm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'erpm' field must be an integer in [-2147483648, 2147483647]"
        self._erpm = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current = value

    @builtins.property
    def duty(self):
        """Message field 'duty'."""
        return self._duty

    @duty.setter
    def duty(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'duty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'duty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._duty = value

    @builtins.property
    def temp_fet(self):
        """Message field 'temp_fet'."""
        return self._temp_fet

    @temp_fet.setter
    def temp_fet(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temp_fet' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_fet' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_fet = value

    @builtins.property
    def temp_motor(self):
        """Message field 'temp_motor'."""
        return self._temp_motor

    @temp_motor.setter
    def temp_motor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'temp_motor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_motor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_motor = value

    @builtins.property
    def input_current(self):
        """Message field 'input_current'."""
        return self._input_current

    @input_current.setter
    def input_current(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'input_current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'input_current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._input_current = value

    @builtins.property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage = value

    @builtins.property
    def tachometer(self):
        """Message field 'tachometer'."""
        return self._tachometer

    @tachometer.setter
    def tachometer(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tachometer' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tachometer' field must be an integer in [-2147483648, 2147483647]"
        self._tachometer = value
