# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lslidar_msgs:msg/LslidarInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LslidarInformation(type):
    """Metaclass of message 'LslidarInformation'."""

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
                'lslidar_msgs.msg.LslidarInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lslidar_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lslidar_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lslidar_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lslidar_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lslidar_information

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LslidarInformation(metaclass=Metaclass_LslidarInformation):
    """Message class 'LslidarInformation'."""

    __slots__ = [
        '_lidar_ip',
        '_destination_ip',
        '_lidar_mac_address',
        '_msop_port',
        '_difop_port',
        '_lidar_serial_number',
        '_fpga_board_2_program',
        '_fpga_board_3_program',
    ]

    _fields_and_field_types = {
        'lidar_ip': 'string',
        'destination_ip': 'string',
        'lidar_mac_address': 'string',
        'msop_port': 'uint16',
        'difop_port': 'uint16',
        'lidar_serial_number': 'string',
        'fpga_board_2_program': 'string',
        'fpga_board_3_program': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lidar_ip = kwargs.get('lidar_ip', str())
        self.destination_ip = kwargs.get('destination_ip', str())
        self.lidar_mac_address = kwargs.get('lidar_mac_address', str())
        self.msop_port = kwargs.get('msop_port', int())
        self.difop_port = kwargs.get('difop_port', int())
        self.lidar_serial_number = kwargs.get('lidar_serial_number', str())
        self.fpga_board_2_program = kwargs.get('fpga_board_2_program', str())
        self.fpga_board_3_program = kwargs.get('fpga_board_3_program', str())

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
        if self.lidar_mac_address != other.lidar_mac_address:
            return False
        if self.msop_port != other.msop_port:
            return False
        if self.difop_port != other.difop_port:
            return False
        if self.lidar_serial_number != other.lidar_serial_number:
            return False
        if self.fpga_board_2_program != other.fpga_board_2_program:
            return False
        if self.fpga_board_3_program != other.fpga_board_3_program:
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
    def lidar_mac_address(self):
        """Message field 'lidar_mac_address'."""
        return self._lidar_mac_address

    @lidar_mac_address.setter
    def lidar_mac_address(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lidar_mac_address' field must be of type 'str'"
        self._lidar_mac_address = value

    @builtins.property
    def msop_port(self):
        """Message field 'msop_port'."""
        return self._msop_port

    @msop_port.setter
    def msop_port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msop_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'msop_port' field must be an unsigned integer in [0, 65535]"
        self._msop_port = value

    @builtins.property
    def difop_port(self):
        """Message field 'difop_port'."""
        return self._difop_port

    @difop_port.setter
    def difop_port(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'difop_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'difop_port' field must be an unsigned integer in [0, 65535]"
        self._difop_port = value

    @builtins.property
    def lidar_serial_number(self):
        """Message field 'lidar_serial_number'."""
        return self._lidar_serial_number

    @lidar_serial_number.setter
    def lidar_serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lidar_serial_number' field must be of type 'str'"
        self._lidar_serial_number = value

    @builtins.property
    def fpga_board_2_program(self):
        """Message field 'fpga_board_2_program'."""
        return self._fpga_board_2_program

    @fpga_board_2_program.setter
    def fpga_board_2_program(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fpga_board_2_program' field must be of type 'str'"
        self._fpga_board_2_program = value

    @builtins.property
    def fpga_board_3_program(self):
        """Message field 'fpga_board_3_program'."""
        return self._fpga_board_3_program

    @fpga_board_3_program.setter
    def fpga_board_3_program(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fpga_board_3_program' field must be of type 'str'"
        self._fpga_board_3_program = value
