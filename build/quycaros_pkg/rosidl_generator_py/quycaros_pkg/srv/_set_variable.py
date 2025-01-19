# generated from rosidl_generator_py/resource/_idl.py.em
# with input from quycaros_pkg:srv/SetVariable.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetVariable_Request(type):
    """Metaclass of message 'SetVariable_Request'."""

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
            module = import_type_support('quycaros_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'quycaros_pkg.srv.SetVariable_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_variable__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_variable__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_variable__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_variable__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_variable__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetVariable_Request(metaclass=Metaclass_SetVariable_Request):
    """Message class 'SetVariable_Request'."""

    __slots__ = [
        '_variable_name',
        '_value_x',
        '_value_y',
    ]

    _fields_and_field_types = {
        'variable_name': 'string',
        'value_x': 'int32',
        'value_y': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.variable_name = kwargs.get('variable_name', str())
        self.value_x = kwargs.get('value_x', int())
        self.value_y = kwargs.get('value_y', int())

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
        if self.variable_name != other.variable_name:
            return False
        if self.value_x != other.value_x:
            return False
        if self.value_y != other.value_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def variable_name(self):
        """Message field 'variable_name'."""
        return self._variable_name

    @variable_name.setter
    def variable_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'variable_name' field must be of type 'str'"
        self._variable_name = value

    @builtins.property
    def value_x(self):
        """Message field 'value_x'."""
        return self._value_x

    @value_x.setter
    def value_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value_x' field must be an integer in [-2147483648, 2147483647]"
        self._value_x = value

    @builtins.property
    def value_y(self):
        """Message field 'value_y'."""
        return self._value_y

    @value_y.setter
    def value_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'value_y' field must be an integer in [-2147483648, 2147483647]"
        self._value_y = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetVariable_Response(type):
    """Metaclass of message 'SetVariable_Response'."""

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
            module = import_type_support('quycaros_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'quycaros_pkg.srv.SetVariable_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_variable__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_variable__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_variable__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_variable__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_variable__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetVariable_Response(metaclass=Metaclass_SetVariable_Response):
    """Message class 'SetVariable_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetVariable(type):
    """Metaclass of service 'SetVariable'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('quycaros_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'quycaros_pkg.srv.SetVariable')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_variable

            from quycaros_pkg.srv import _set_variable
            if _set_variable.Metaclass_SetVariable_Request._TYPE_SUPPORT is None:
                _set_variable.Metaclass_SetVariable_Request.__import_type_support__()
            if _set_variable.Metaclass_SetVariable_Response._TYPE_SUPPORT is None:
                _set_variable.Metaclass_SetVariable_Response.__import_type_support__()


class SetVariable(metaclass=Metaclass_SetVariable):
    from quycaros_pkg.srv._set_variable import SetVariable_Request as Request
    from quycaros_pkg.srv._set_variable import SetVariable_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
