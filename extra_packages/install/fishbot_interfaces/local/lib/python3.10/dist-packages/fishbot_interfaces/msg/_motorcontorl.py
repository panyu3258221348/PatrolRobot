# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fishbot_interfaces:msg/Motorcontorl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motorcontorl(type):
    """Metaclass of message 'Motorcontorl'."""

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
            module = import_type_support('fishbot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fishbot_interfaces.msg.Motorcontorl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motorcontorl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motorcontorl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motorcontorl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motorcontorl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motorcontorl

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motorcontorl(metaclass=Metaclass_Motorcontorl):
    """Message class 'Motorcontorl'."""

    __slots__ = [
        '_motor1',
        '_motor2',
        '_motor3',
        '_motor4',
        '_speed1',
        '_speed2',
        '_speed3',
        '_speed4',
    ]

    _fields_and_field_types = {
        'motor1': 'float',
        'motor2': 'float',
        'motor3': 'float',
        'motor4': 'float',
        'speed1': 'float',
        'speed2': 'float',
        'speed3': 'float',
        'speed4': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor1 = kwargs.get('motor1', float())
        self.motor2 = kwargs.get('motor2', float())
        self.motor3 = kwargs.get('motor3', float())
        self.motor4 = kwargs.get('motor4', float())
        self.speed1 = kwargs.get('speed1', float())
        self.speed2 = kwargs.get('speed2', float())
        self.speed3 = kwargs.get('speed3', float())
        self.speed4 = kwargs.get('speed4', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.motor1 != other.motor1:
            return False
        if self.motor2 != other.motor2:
            return False
        if self.motor3 != other.motor3:
            return False
        if self.motor4 != other.motor4:
            return False
        if self.speed1 != other.speed1:
            return False
        if self.speed2 != other.speed2:
            return False
        if self.speed3 != other.speed3:
            return False
        if self.speed4 != other.speed4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor1(self):
        """Message field 'motor1'."""
        return self._motor1

    @motor1.setter
    def motor1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor1 = value

    @builtins.property
    def motor2(self):
        """Message field 'motor2'."""
        return self._motor2

    @motor2.setter
    def motor2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor2 = value

    @builtins.property
    def motor3(self):
        """Message field 'motor3'."""
        return self._motor3

    @motor3.setter
    def motor3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor3 = value

    @builtins.property
    def motor4(self):
        """Message field 'motor4'."""
        return self._motor4

    @motor4.setter
    def motor4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor4 = value

    @builtins.property
    def speed1(self):
        """Message field 'speed1'."""
        return self._speed1

    @speed1.setter
    def speed1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed1 = value

    @builtins.property
    def speed2(self):
        """Message field 'speed2'."""
        return self._speed2

    @speed2.setter
    def speed2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed2 = value

    @builtins.property
    def speed3(self):
        """Message field 'speed3'."""
        return self._speed3

    @speed3.setter
    def speed3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed3 = value

    @builtins.property
    def speed4(self):
        """Message field 'speed4'."""
        return self._speed4

    @speed4.setter
    def speed4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed4 = value
