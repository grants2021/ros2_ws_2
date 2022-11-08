# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vrx_gazebo:srv/ColorSequence.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ColorSequence_Request(type):
    """Metaclass of message 'ColorSequence_Request'."""

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
            module = import_type_support('vrx_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vrx_gazebo.srv.ColorSequence_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__color_sequence__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__color_sequence__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__color_sequence__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__color_sequence__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__color_sequence__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ColorSequence_Request(metaclass=Metaclass_ColorSequence_Request):
    """Message class 'ColorSequence_Request'."""

    __slots__ = [
        '_color1',
        '_color2',
        '_color3',
    ]

    _fields_and_field_types = {
        'color1': 'string',
        'color2': 'string',
        'color3': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color1 = kwargs.get('color1', str())
        self.color2 = kwargs.get('color2', str())
        self.color3 = kwargs.get('color3', str())

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
        if self.color1 != other.color1:
            return False
        if self.color2 != other.color2:
            return False
        if self.color3 != other.color3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def color1(self):
        """Message field 'color1'."""
        return self._color1

    @color1.setter
    def color1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'color1' field must be of type 'str'"
        self._color1 = value

    @property
    def color2(self):
        """Message field 'color2'."""
        return self._color2

    @color2.setter
    def color2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'color2' field must be of type 'str'"
        self._color2 = value

    @property
    def color3(self):
        """Message field 'color3'."""
        return self._color3

    @color3.setter
    def color3(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'color3' field must be of type 'str'"
        self._color3 = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ColorSequence_Response(type):
    """Metaclass of message 'ColorSequence_Response'."""

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
            module = import_type_support('vrx_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vrx_gazebo.srv.ColorSequence_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__color_sequence__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__color_sequence__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__color_sequence__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__color_sequence__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__color_sequence__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ColorSequence_Response(metaclass=Metaclass_ColorSequence_Response):
    """Message class 'ColorSequence_Response'."""

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

    @property
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


class Metaclass_ColorSequence(type):
    """Metaclass of service 'ColorSequence'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vrx_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vrx_gazebo.srv.ColorSequence')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__color_sequence

            from vrx_gazebo.srv import _color_sequence
            if _color_sequence.Metaclass_ColorSequence_Request._TYPE_SUPPORT is None:
                _color_sequence.Metaclass_ColorSequence_Request.__import_type_support__()
            if _color_sequence.Metaclass_ColorSequence_Response._TYPE_SUPPORT is None:
                _color_sequence.Metaclass_ColorSequence_Response.__import_type_support__()


class ColorSequence(metaclass=Metaclass_ColorSequence):
    from vrx_gazebo.srv._color_sequence import ColorSequence_Request as Request
    from vrx_gazebo.srv._color_sequence import ColorSequence_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
