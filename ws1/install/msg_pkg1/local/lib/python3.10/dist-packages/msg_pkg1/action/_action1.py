# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_pkg1:action/Action1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Action1_Goal(type):
    """Metaclass of message 'Action1_Goal'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action1_Goal(metaclass=Metaclass_Action1_Goal):
    """Message class 'Action1_Goal'."""

    __slots__ = [
        '_linear_x',
        '_angular_z',
        '_dist',
    ]

    _fields_and_field_types = {
        'linear_x': 'float',
        'angular_z': 'float',
        'dist': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.linear_x = kwargs.get('linear_x', float())
        self.angular_z = kwargs.get('angular_z', float())
        self.dist = kwargs.get('dist', float())

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
        if self.linear_x != other.linear_x:
            return False
        if self.angular_z != other.angular_z:
            return False
        if self.dist != other.dist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def linear_x(self):
        """Message field 'linear_x'."""
        return self._linear_x

    @linear_x.setter
    def linear_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'linear_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._linear_x = value

    @builtins.property
    def angular_z(self):
        """Message field 'angular_z'."""
        return self._angular_z

    @angular_z.setter
    def angular_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_z = value

    @builtins.property
    def dist(self):
        """Message field 'dist'."""
        return self._dist

    @dist.setter
    def dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dist = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Action1_Result(type):
    """Metaclass of message 'Action1_Result'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action1_Result(metaclass=Metaclass_Action1_Result):
    """Message class 'Action1_Result'."""

    __slots__ = [
        '_pos_x',
        '_pos_y',
        '_pos_theta',
        '_result_dist',
    ]

    _fields_and_field_types = {
        'pos_x': 'float',
        'pos_y': 'float',
        'pos_theta': 'float',
        'result_dist': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pos_x = kwargs.get('pos_x', float())
        self.pos_y = kwargs.get('pos_y', float())
        self.pos_theta = kwargs.get('pos_theta', float())
        self.result_dist = kwargs.get('result_dist', float())

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
        if self.pos_x != other.pos_x:
            return False
        if self.pos_y != other.pos_y:
            return False
        if self.pos_theta != other.pos_theta:
            return False
        if self.result_dist != other.result_dist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pos_x(self):
        """Message field 'pos_x'."""
        return self._pos_x

    @pos_x.setter
    def pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_x = value

    @builtins.property
    def pos_y(self):
        """Message field 'pos_y'."""
        return self._pos_y

    @pos_y.setter
    def pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_y = value

    @builtins.property
    def pos_theta(self):
        """Message field 'pos_theta'."""
        return self._pos_theta

    @pos_theta.setter
    def pos_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_theta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_theta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_theta = value

    @builtins.property
    def result_dist(self):
        """Message field 'result_dist'."""
        return self._result_dist

    @result_dist.setter
    def result_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'result_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'result_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._result_dist = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Action1_Feedback(type):
    """Metaclass of message 'Action1_Feedback'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action1_Feedback(metaclass=Metaclass_Action1_Feedback):
    """Message class 'Action1_Feedback'."""

    __slots__ = [
        '_remained_dist',
    ]

    _fields_and_field_types = {
        'remained_dist': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.remained_dist = kwargs.get('remained_dist', float())

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
        if self.remained_dist != other.remained_dist:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def remained_dist(self):
        """Message field 'remained_dist'."""
        return self._remained_dist

    @remained_dist.setter
    def remained_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remained_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'remained_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._remained_dist = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Action1_SendGoal_Request(type):
    """Metaclass of message 'Action1_SendGoal_Request'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__send_goal__request

            from msg_pkg1.action import Action1
            if Action1.Goal.__class__._TYPE_SUPPORT is None:
                Action1.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action1_SendGoal_Request(metaclass=Metaclass_Action1_SendGoal_Request):
    """Message class 'Action1_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'msg_pkg1/Action1_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg_pkg1', 'action'], 'Action1_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from msg_pkg1.action._action1 import Action1_Goal
        self.goal = kwargs.get('goal', Action1_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from msg_pkg1.action._action1 import Action1_Goal
            assert \
                isinstance(value, Action1_Goal), \
                "The 'goal' field must be a sub message of type 'Action1_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Action1_SendGoal_Response(type):
    """Metaclass of message 'Action1_SendGoal_Response'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__send_goal__response

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


class Action1_SendGoal_Response(metaclass=Metaclass_Action1_SendGoal_Response):
    """Message class 'Action1_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_Action1_SendGoal(type):
    """Metaclass of service 'Action1_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__action1__send_goal

            from msg_pkg1.action import _action1
            if _action1.Metaclass_Action1_SendGoal_Request._TYPE_SUPPORT is None:
                _action1.Metaclass_Action1_SendGoal_Request.__import_type_support__()
            if _action1.Metaclass_Action1_SendGoal_Response._TYPE_SUPPORT is None:
                _action1.Metaclass_Action1_SendGoal_Response.__import_type_support__()


class Action1_SendGoal(metaclass=Metaclass_Action1_SendGoal):
    from msg_pkg1.action._action1 import Action1_SendGoal_Request as Request
    from msg_pkg1.action._action1 import Action1_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Action1_GetResult_Request(type):
    """Metaclass of message 'Action1_GetResult_Request'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action1_GetResult_Request(metaclass=Metaclass_Action1_GetResult_Request):
    """Message class 'Action1_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Action1_GetResult_Response(type):
    """Metaclass of message 'Action1_GetResult_Response'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__get_result__response

            from msg_pkg1.action import Action1
            if Action1.Result.__class__._TYPE_SUPPORT is None:
                Action1.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action1_GetResult_Response(metaclass=Metaclass_Action1_GetResult_Response):
    """Message class 'Action1_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'msg_pkg1/Action1_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg_pkg1', 'action'], 'Action1_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from msg_pkg1.action._action1 import Action1_Result
        self.result = kwargs.get('result', Action1_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from msg_pkg1.action._action1 import Action1_Result
            assert \
                isinstance(value, Action1_Result), \
                "The 'result' field must be a sub message of type 'Action1_Result'"
        self._result = value


class Metaclass_Action1_GetResult(type):
    """Metaclass of service 'Action1_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__action1__get_result

            from msg_pkg1.action import _action1
            if _action1.Metaclass_Action1_GetResult_Request._TYPE_SUPPORT is None:
                _action1.Metaclass_Action1_GetResult_Request.__import_type_support__()
            if _action1.Metaclass_Action1_GetResult_Response._TYPE_SUPPORT is None:
                _action1.Metaclass_Action1_GetResult_Response.__import_type_support__()


class Action1_GetResult(metaclass=Metaclass_Action1_GetResult):
    from msg_pkg1.action._action1 import Action1_GetResult_Request as Request
    from msg_pkg1.action._action1 import Action1_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Action1_FeedbackMessage(type):
    """Metaclass of message 'Action1_FeedbackMessage'."""

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
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action1__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action1__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action1__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__action1__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action1__feedback_message

            from msg_pkg1.action import Action1
            if Action1.Feedback.__class__._TYPE_SUPPORT is None:
                Action1.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action1_FeedbackMessage(metaclass=Metaclass_Action1_FeedbackMessage):
    """Message class 'Action1_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'msg_pkg1/Action1_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['msg_pkg1', 'action'], 'Action1_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from msg_pkg1.action._action1 import Action1_Feedback
        self.feedback = kwargs.get('feedback', Action1_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from msg_pkg1.action._action1 import Action1_Feedback
            assert \
                isinstance(value, Action1_Feedback), \
                "The 'feedback' field must be a sub message of type 'Action1_Feedback'"
        self._feedback = value


class Metaclass_Action1(type):
    """Metaclass of action 'Action1'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_pkg1')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_pkg1.action.Action1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__action1

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from msg_pkg1.action import _action1
            if _action1.Metaclass_Action1_SendGoal._TYPE_SUPPORT is None:
                _action1.Metaclass_Action1_SendGoal.__import_type_support__()
            if _action1.Metaclass_Action1_GetResult._TYPE_SUPPORT is None:
                _action1.Metaclass_Action1_GetResult.__import_type_support__()
            if _action1.Metaclass_Action1_FeedbackMessage._TYPE_SUPPORT is None:
                _action1.Metaclass_Action1_FeedbackMessage.__import_type_support__()


class Action1(metaclass=Metaclass_Action1):

    # The goal message defined in the action definition.
    from msg_pkg1.action._action1 import Action1_Goal as Goal
    # The result message defined in the action definition.
    from msg_pkg1.action._action1 import Action1_Result as Result
    # The feedback message defined in the action definition.
    from msg_pkg1.action._action1 import Action1_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from msg_pkg1.action._action1 import Action1_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from msg_pkg1.action._action1 import Action1_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from msg_pkg1.action._action1 import Action1_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
