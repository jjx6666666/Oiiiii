# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lslidar_msgs:srv/TimeMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TimeMode_Request(type):
    """Metaclass of message 'TimeMode_Request'."""

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
            module = import_type_support('lslidar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lslidar_msgs.srv.TimeMode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__time_mode__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__time_mode__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__time_mode__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__time_mode__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__time_mode__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TimeMode_Request(metaclass=Metaclass_TimeMode_Request):
    """Message class 'TimeMode_Request'."""

    __slots__ = [
        '_time_mode',
        '_ntp_ip',
    ]

    _fields_and_field_types = {
        'time_mode': 'uint8',
        'ntp_ip': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_mode = kwargs.get('time_mode', int())
        self.ntp_ip = kwargs.get('ntp_ip', str())

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
        if self.time_mode != other.time_mode:
            return False
        if self.ntp_ip != other.ntp_ip:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_mode(self):
        """Message field 'time_mode'."""
        return self._time_mode

    @time_mode.setter
    def time_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_mode' field must be an unsigned integer in [0, 255]"
        self._time_mode = value

    @builtins.property
    def ntp_ip(self):
        """Message field 'ntp_ip'."""
        return self._ntp_ip

    @ntp_ip.setter
    def ntp_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ntp_ip' field must be of type 'str'"
        self._ntp_ip = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TimeMode_Response(type):
    """Metaclass of message 'TimeMode_Response'."""

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
            module = import_type_support('lslidar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lslidar_msgs.srv.TimeMode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__time_mode__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__time_mode__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__time_mode__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__time_mode__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__time_mode__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TimeMode_Response(metaclass=Metaclass_TimeMode_Response):
    """Message class 'TimeMode_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_TimeMode(type):
    """Metaclass of service 'TimeMode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lslidar_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lslidar_msgs.srv.TimeMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__time_mode

            from lslidar_msgs.srv import _time_mode
            if _time_mode.Metaclass_TimeMode_Request._TYPE_SUPPORT is None:
                _time_mode.Metaclass_TimeMode_Request.__import_type_support__()
            if _time_mode.Metaclass_TimeMode_Response._TYPE_SUPPORT is None:
                _time_mode.Metaclass_TimeMode_Response.__import_type_support__()


class TimeMode(metaclass=Metaclass_TimeMode):
    from lslidar_msgs.srv._time_mode import TimeMode_Request as Request
    from lslidar_msgs.srv._time_mode import TimeMode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
