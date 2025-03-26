# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dynamixel_sdk_custom_interfaces:srv/Movement.idl
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


class Metaclass_Movement_Request(type):
    """Metaclass of message 'Movement_Request'."""

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
            module = import_type_support('dynamixel_sdk_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_custom_interfaces.srv.Movement_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__movement__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__movement__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__movement__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__movement__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__movement__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Movement_Request(metaclass=Metaclass_Movement_Request):
    """Message class 'Movement_Request'."""

    __slots__ = [
        '_movement',
        '_time_period',
        '_twist_dir',
        '_bending_face',
        '_bending_range',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'movement': 'string',
        'time_period': 'int32',
        'twist_dir': 'int32',
        'bending_face': 'int32',
        'bending_range': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.movement = kwargs.get('movement', str())
        self.time_period = kwargs.get('time_period', int())
        self.twist_dir = kwargs.get('twist_dir', int())
        self.bending_face = kwargs.get('bending_face', int())
        self.bending_range = kwargs.get('bending_range', float())

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
        if self.movement != other.movement:
            return False
        if self.time_period != other.time_period:
            return False
        if self.twist_dir != other.twist_dir:
            return False
        if self.bending_face != other.bending_face:
            return False
        if self.bending_range != other.bending_range:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def movement(self):
        """Message field 'movement'."""
        return self._movement

    @movement.setter
    def movement(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'movement' field must be of type 'str'"
        self._movement = value

    @builtins.property
    def time_period(self):
        """Message field 'time_period'."""
        return self._time_period

    @time_period.setter
    def time_period(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'time_period' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'time_period' field must be an integer in [-2147483648, 2147483647]"
        self._time_period = value

    @builtins.property
    def twist_dir(self):
        """Message field 'twist_dir'."""
        return self._twist_dir

    @twist_dir.setter
    def twist_dir(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'twist_dir' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'twist_dir' field must be an integer in [-2147483648, 2147483647]"
        self._twist_dir = value

    @builtins.property
    def bending_face(self):
        """Message field 'bending_face'."""
        return self._bending_face

    @bending_face.setter
    def bending_face(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bending_face' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bending_face' field must be an integer in [-2147483648, 2147483647]"
        self._bending_face = value

    @builtins.property
    def bending_range(self):
        """Message field 'bending_range'."""
        return self._bending_range

    @bending_range.setter
    def bending_range(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bending_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bending_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bending_range = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Movement_Response(type):
    """Metaclass of message 'Movement_Response'."""

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
            module = import_type_support('dynamixel_sdk_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_custom_interfaces.srv.Movement_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__movement__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__movement__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__movement__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__movement__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__movement__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Movement_Response(metaclass=Metaclass_Movement_Response):
    """Message class 'Movement_Response'."""

    __slots__ = [
        '_success',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Movement_Event(type):
    """Metaclass of message 'Movement_Event'."""

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
            module = import_type_support('dynamixel_sdk_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_custom_interfaces.srv.Movement_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__movement__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__movement__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__movement__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__movement__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__movement__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Movement_Event(metaclass=Metaclass_Movement_Event):
    """Message class 'Movement_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<dynamixel_sdk_custom_interfaces/Movement_Request, 1>',
        'response': 'sequence<dynamixel_sdk_custom_interfaces/Movement_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dynamixel_sdk_custom_interfaces', 'srv'], 'Movement_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dynamixel_sdk_custom_interfaces', 'srv'], 'Movement_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from dynamixel_sdk_custom_interfaces.srv import Movement_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, Movement_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'Movement_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from dynamixel_sdk_custom_interfaces.srv import Movement_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, Movement_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'Movement_Response'"
        self._response = value


class Metaclass_Movement(type):
    """Metaclass of service 'Movement'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dynamixel_sdk_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dynamixel_sdk_custom_interfaces.srv.Movement')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__movement

            from dynamixel_sdk_custom_interfaces.srv import _movement
            if _movement.Metaclass_Movement_Request._TYPE_SUPPORT is None:
                _movement.Metaclass_Movement_Request.__import_type_support__()
            if _movement.Metaclass_Movement_Response._TYPE_SUPPORT is None:
                _movement.Metaclass_Movement_Response.__import_type_support__()
            if _movement.Metaclass_Movement_Event._TYPE_SUPPORT is None:
                _movement.Metaclass_Movement_Event.__import_type_support__()


class Movement(metaclass=Metaclass_Movement):
    from dynamixel_sdk_custom_interfaces.srv._movement import Movement_Request as Request
    from dynamixel_sdk_custom_interfaces.srv._movement import Movement_Response as Response
    from dynamixel_sdk_custom_interfaces.srv._movement import Movement_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
