# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vrx_gazebo:msg/Task.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Task(type):
    """Metaclass of message 'Task'."""

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
                'vrx_gazebo.msg.Task')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Task(metaclass=Metaclass_Task):
    """Message class 'Task'."""

    __slots__ = [
        '_name',
        '_state',
        '_ready_time',
        '_running_time',
        '_elapsed_time',
        '_remaining_time',
        '_timed_out',
        '_num_collisions',
        '_score',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'state': 'string',
        'ready_time': 'builtin_interfaces/Time',
        'running_time': 'builtin_interfaces/Time',
        'elapsed_time': 'builtin_interfaces/Duration',
        'remaining_time': 'builtin_interfaces/Duration',
        'timed_out': 'boolean',
        'num_collisions': 'uint32',
        'score': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.state = kwargs.get('state', str())
        from builtin_interfaces.msg import Time
        self.ready_time = kwargs.get('ready_time', Time())
        from builtin_interfaces.msg import Time
        self.running_time = kwargs.get('running_time', Time())
        from builtin_interfaces.msg import Duration
        self.elapsed_time = kwargs.get('elapsed_time', Duration())
        from builtin_interfaces.msg import Duration
        self.remaining_time = kwargs.get('remaining_time', Duration())
        self.timed_out = kwargs.get('timed_out', bool())
        self.num_collisions = kwargs.get('num_collisions', int())
        self.score = kwargs.get('score', float())

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
        if self.name != other.name:
            return False
        if self.state != other.state:
            return False
        if self.ready_time != other.ready_time:
            return False
        if self.running_time != other.running_time:
            return False
        if self.elapsed_time != other.elapsed_time:
            return False
        if self.remaining_time != other.remaining_time:
            return False
        if self.timed_out != other.timed_out:
            return False
        if self.num_collisions != other.num_collisions:
            return False
        if self.score != other.score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value

    @property
    def ready_time(self):
        """Message field 'ready_time'."""
        return self._ready_time

    @ready_time.setter
    def ready_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'ready_time' field must be a sub message of type 'Time'"
        self._ready_time = value

    @property
    def running_time(self):
        """Message field 'running_time'."""
        return self._running_time

    @running_time.setter
    def running_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'running_time' field must be a sub message of type 'Time'"
        self._running_time = value

    @property
    def elapsed_time(self):
        """Message field 'elapsed_time'."""
        return self._elapsed_time

    @elapsed_time.setter
    def elapsed_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'elapsed_time' field must be a sub message of type 'Duration'"
        self._elapsed_time = value

    @property
    def remaining_time(self):
        """Message field 'remaining_time'."""
        return self._remaining_time

    @remaining_time.setter
    def remaining_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'remaining_time' field must be a sub message of type 'Duration'"
        self._remaining_time = value

    @property
    def timed_out(self):
        """Message field 'timed_out'."""
        return self._timed_out

    @timed_out.setter
    def timed_out(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'timed_out' field must be of type 'bool'"
        self._timed_out = value

    @property
    def num_collisions(self):
        """Message field 'num_collisions'."""
        return self._num_collisions

    @num_collisions.setter
    def num_collisions(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_collisions' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_collisions' field must be an unsigned integer in [0, 4294967295]"
        self._num_collisions = value

    @property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'score' field must be of type 'float'"
        self._score = value
