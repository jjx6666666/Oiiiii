# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lslidar_msgs:srv/IpAndPort.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IpAndPort_Request(type):
    """Metaclass of message 'IpAndPort_Request'."""

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
                'lslidar_msgs.srv.IpAndPort_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ip_and_port__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ip_and_port__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ip_and_port__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ip_and_port__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ip_and_port__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IpAndPort_Request(metaclass=Metaclass_IpAndPort_Request):
    """Message class 'IpAndPort_Request'."""

    __slots__ = [
        '_lidar_ip',
        '_destination_ip',
        '_data_port',
        '_dev_port',
    ]

    _fields_and_field_types = {
        'lidar_ip': 'string',
        'destination_ip': 'string',
        'data_port': 'uint16',
        'dev_port': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lidar_ip = kwargs.get('lidar_ip', str())
        self.destination_ip = kwargs.get('destination_ip', str())
        self.data_port = kwargs.get('data_port', int())
        self.dev_port = kwargs.get('dev_port', int())

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
        if self.lidar_ip != other.lidar_ip:
            return False
        if self.destination_ip != other.destination_ip:
            return False
        if self.data_port != other.data_port:
            return False
        if self.dev_port != other.dev_port:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lidar_ip(self):
        """Message field 'lidar_ip'."""
        return self._lidar_ip

    @lidar_ip.setter
    def lidar_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lidar_ip' field must be of type 'str'"
        self._lidar_ip = value

    @builtins.property
    def destination_ip(self):
        """Message field 'destination_ip'."""
        return self._destination_ip

    @destination_ip.setter
    def destination_ip(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'destination_ip' field must be of type 'str'"
        self._destination_ip = value

    @builtins.property
    def data_port(self):
        """Message field 'data_port'."""
        return self._data_port

    @data_port.setter
    def data_port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'data_port' field must be an unsigned integer in [0, 65535]"
        self._data_port = value

    @builtins.property
    def dev_port(self):
        """Message field 'dev_port'."""
        return self._dev_port

    @dev_port.setter
    def dev_port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dev_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'dev_port' field must be an unsigned integer in [0, 65535]"
        self._dev_port = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_IpAndPort_Response(type):
    """Metaclass of message 'IpAndPort_Response'."""

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
                'lslidar_msgs.srv.IpAndPort_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ip_and_port__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ip_and_port__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ip_and_port__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ip_and_port__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ip_and_port__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IpAndPort_Response(metaclass=Metaclass_IpAndPort_Response):
    """Message class 'IpAndPort_Response'."""

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


class Metaclass_IpAndPort(type):
    """Metaclass of service 'IpAndPort'."""

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
                'lslidar_msgs.srv.IpAndPort')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ip_and_port

            from lslidar_msgs.srv import _ip_and_port
            if _ip_and_port.Metaclass_IpAndPort_Request._TYPE_SUPPORT is None:
                _ip_and_port.Metaclass_IpAndPort_Request.__import_type_support__()
            if _ip_and_port.Metaclass_IpAndPort_Response._TYPE_SUPPORT is None:
                _ip_and_port.Metaclass_IpAndPort_Response.__import_type_support__()


class IpAndPort(metaclass=Metaclass_IpAndPort):
    from lslidar_msgs.srv._ip_and_port import IpAndPort_Request as Request
    from lslidar_msgs.srv._ip_and_port import IpAndPort_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
