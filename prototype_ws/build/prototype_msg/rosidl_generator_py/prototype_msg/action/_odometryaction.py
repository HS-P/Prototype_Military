# generated from rosidl_generator_py/resource/_idl.py.em
# with input from prototype_msg:action/Odometryaction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Odometryaction_Goal(type):
    """Metaclass of message 'Odometryaction_Goal'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Odometryaction_Goal(metaclass=Metaclass_Odometryaction_Goal):
    """Message class 'Odometryaction_Goal'."""

    __slots__ = [
        '_linear_x',
        '_finish_x',
        '_finish_y',
    ]

    _fields_and_field_types = {
        'linear_x': 'float',
        'finish_x': 'float',
        'finish_y': 'float',
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
        self.finish_x = kwargs.get('finish_x', float())
        self.finish_y = kwargs.get('finish_y', float())

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
        if self.finish_x != other.finish_x:
            return False
        if self.finish_y != other.finish_y:
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
    def finish_x(self):
        """Message field 'finish_x'."""
        return self._finish_x

    @finish_x.setter
    def finish_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'finish_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'finish_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._finish_x = value

    @builtins.property
    def finish_y(self):
        """Message field 'finish_y'."""
        return self._finish_y

    @finish_y.setter
    def finish_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'finish_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'finish_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._finish_y = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Odometryaction_Result(type):
    """Metaclass of message 'Odometryaction_Result'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Odometryaction_Result(metaclass=Metaclass_Odometryaction_Result):
    """Message class 'Odometryaction_Result'."""

    __slots__ = [
        '_pos_x',
        '_pos_y',
        '_result_dist',
    ]

    _fields_and_field_types = {
        'pos_x': 'float',
        'pos_y': 'float',
        'result_dist': 'float',
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
        self.pos_x = kwargs.get('pos_x', float())
        self.pos_y = kwargs.get('pos_y', float())
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


class Metaclass_Odometryaction_Feedback(type):
    """Metaclass of message 'Odometryaction_Feedback'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Odometryaction_Feedback(metaclass=Metaclass_Odometryaction_Feedback):
    """Message class 'Odometryaction_Feedback'."""

    __slots__ = [
        '_diff_lin',
        '_diff_ang',
    ]

    _fields_and_field_types = {
        'diff_lin': 'float',
        'diff_ang': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.diff_lin = kwargs.get('diff_lin', float())
        self.diff_ang = kwargs.get('diff_ang', float())

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
        if self.diff_lin != other.diff_lin:
            return False
        if self.diff_ang != other.diff_ang:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def diff_lin(self):
        """Message field 'diff_lin'."""
        return self._diff_lin

    @diff_lin.setter
    def diff_lin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_lin' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'diff_lin' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._diff_lin = value

    @builtins.property
    def diff_ang(self):
        """Message field 'diff_ang'."""
        return self._diff_ang

    @diff_ang.setter
    def diff_ang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'diff_ang' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'diff_ang' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._diff_ang = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Odometryaction_SendGoal_Request(type):
    """Metaclass of message 'Odometryaction_SendGoal_Request'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__send_goal__request

            from prototype_msg.action import Odometryaction
            if Odometryaction.Goal.__class__._TYPE_SUPPORT is None:
                Odometryaction.Goal.__class__.__import_type_support__()

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


class Odometryaction_SendGoal_Request(metaclass=Metaclass_Odometryaction_SendGoal_Request):
    """Message class 'Odometryaction_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'prototype_msg/Odometryaction_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['prototype_msg', 'action'], 'Odometryaction_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from prototype_msg.action._odometryaction import Odometryaction_Goal
        self.goal = kwargs.get('goal', Odometryaction_Goal())

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
            from prototype_msg.action._odometryaction import Odometryaction_Goal
            assert \
                isinstance(value, Odometryaction_Goal), \
                "The 'goal' field must be a sub message of type 'Odometryaction_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Odometryaction_SendGoal_Response(type):
    """Metaclass of message 'Odometryaction_SendGoal_Response'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__send_goal__response

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


class Odometryaction_SendGoal_Response(metaclass=Metaclass_Odometryaction_SendGoal_Response):
    """Message class 'Odometryaction_SendGoal_Response'."""

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


class Metaclass_Odometryaction_SendGoal(type):
    """Metaclass of service 'Odometryaction_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__odometryaction__send_goal

            from prototype_msg.action import _odometryaction
            if _odometryaction.Metaclass_Odometryaction_SendGoal_Request._TYPE_SUPPORT is None:
                _odometryaction.Metaclass_Odometryaction_SendGoal_Request.__import_type_support__()
            if _odometryaction.Metaclass_Odometryaction_SendGoal_Response._TYPE_SUPPORT is None:
                _odometryaction.Metaclass_Odometryaction_SendGoal_Response.__import_type_support__()


class Odometryaction_SendGoal(metaclass=Metaclass_Odometryaction_SendGoal):
    from prototype_msg.action._odometryaction import Odometryaction_SendGoal_Request as Request
    from prototype_msg.action._odometryaction import Odometryaction_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Odometryaction_GetResult_Request(type):
    """Metaclass of message 'Odometryaction_GetResult_Request'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__get_result__request

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


class Odometryaction_GetResult_Request(metaclass=Metaclass_Odometryaction_GetResult_Request):
    """Message class 'Odometryaction_GetResult_Request'."""

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


class Metaclass_Odometryaction_GetResult_Response(type):
    """Metaclass of message 'Odometryaction_GetResult_Response'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__get_result__response

            from prototype_msg.action import Odometryaction
            if Odometryaction.Result.__class__._TYPE_SUPPORT is None:
                Odometryaction.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Odometryaction_GetResult_Response(metaclass=Metaclass_Odometryaction_GetResult_Response):
    """Message class 'Odometryaction_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'prototype_msg/Odometryaction_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['prototype_msg', 'action'], 'Odometryaction_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from prototype_msg.action._odometryaction import Odometryaction_Result
        self.result = kwargs.get('result', Odometryaction_Result())

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
            from prototype_msg.action._odometryaction import Odometryaction_Result
            assert \
                isinstance(value, Odometryaction_Result), \
                "The 'result' field must be a sub message of type 'Odometryaction_Result'"
        self._result = value


class Metaclass_Odometryaction_GetResult(type):
    """Metaclass of service 'Odometryaction_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__odometryaction__get_result

            from prototype_msg.action import _odometryaction
            if _odometryaction.Metaclass_Odometryaction_GetResult_Request._TYPE_SUPPORT is None:
                _odometryaction.Metaclass_Odometryaction_GetResult_Request.__import_type_support__()
            if _odometryaction.Metaclass_Odometryaction_GetResult_Response._TYPE_SUPPORT is None:
                _odometryaction.Metaclass_Odometryaction_GetResult_Response.__import_type_support__()


class Odometryaction_GetResult(metaclass=Metaclass_Odometryaction_GetResult):
    from prototype_msg.action._odometryaction import Odometryaction_GetResult_Request as Request
    from prototype_msg.action._odometryaction import Odometryaction_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Odometryaction_FeedbackMessage(type):
    """Metaclass of message 'Odometryaction_FeedbackMessage'."""

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
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__odometryaction__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__odometryaction__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__odometryaction__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__odometryaction__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__odometryaction__feedback_message

            from prototype_msg.action import Odometryaction
            if Odometryaction.Feedback.__class__._TYPE_SUPPORT is None:
                Odometryaction.Feedback.__class__.__import_type_support__()

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


class Odometryaction_FeedbackMessage(metaclass=Metaclass_Odometryaction_FeedbackMessage):
    """Message class 'Odometryaction_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'prototype_msg/Odometryaction_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['prototype_msg', 'action'], 'Odometryaction_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from prototype_msg.action._odometryaction import Odometryaction_Feedback
        self.feedback = kwargs.get('feedback', Odometryaction_Feedback())

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
            from prototype_msg.action._odometryaction import Odometryaction_Feedback
            assert \
                isinstance(value, Odometryaction_Feedback), \
                "The 'feedback' field must be a sub message of type 'Odometryaction_Feedback'"
        self._feedback = value


class Metaclass_Odometryaction(type):
    """Metaclass of action 'Odometryaction'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('prototype_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'prototype_msg.action.Odometryaction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__odometryaction

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from prototype_msg.action import _odometryaction
            if _odometryaction.Metaclass_Odometryaction_SendGoal._TYPE_SUPPORT is None:
                _odometryaction.Metaclass_Odometryaction_SendGoal.__import_type_support__()
            if _odometryaction.Metaclass_Odometryaction_GetResult._TYPE_SUPPORT is None:
                _odometryaction.Metaclass_Odometryaction_GetResult.__import_type_support__()
            if _odometryaction.Metaclass_Odometryaction_FeedbackMessage._TYPE_SUPPORT is None:
                _odometryaction.Metaclass_Odometryaction_FeedbackMessage.__import_type_support__()


class Odometryaction(metaclass=Metaclass_Odometryaction):

    # The goal message defined in the action definition.
    from prototype_msg.action._odometryaction import Odometryaction_Goal as Goal
    # The result message defined in the action definition.
    from prototype_msg.action._odometryaction import Odometryaction_Result as Result
    # The feedback message defined in the action definition.
    from prototype_msg.action._odometryaction import Odometryaction_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from prototype_msg.action._odometryaction import Odometryaction_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from prototype_msg.action._odometryaction import Odometryaction_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from prototype_msg.action._odometryaction import Odometryaction_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
