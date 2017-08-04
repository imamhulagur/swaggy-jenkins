# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification

    OpenAPI spec version: 0.1.0
    Contact: blah@cliffano.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class PipelineRunImpllinks(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """


    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'nodes': 'Link',
        'log': 'Link',
        '_self': 'Link',
        'actions': 'Link',
        'steps': 'Link',
        '_class': 'str'
    }

    attribute_map = {
        'nodes': 'nodes',
        'log': 'log',
        '_self': 'self',
        'actions': 'actions',
        'steps': 'steps',
        '_class': '_class'
    }

    def __init__(self, nodes=None, log=None, _self=None, actions=None, steps=None, _class=None):
        """
        PipelineRunImpllinks - a model defined in Swagger
        """

        self._nodes = None
        self._log = None
        self.__self = None
        self._actions = None
        self._steps = None
        self.__class = None
        self.discriminator = None

        if nodes is not None:
          self.nodes = nodes
        if log is not None:
          self.log = log
        if _self is not None:
          self._self = _self
        if actions is not None:
          self.actions = actions
        if steps is not None:
          self.steps = steps
        if _class is not None:
          self._class = _class

    @property
    def nodes(self):
        """
        Gets the nodes of this PipelineRunImpllinks.

        :return: The nodes of this PipelineRunImpllinks.
        :rtype: Link
        """
        return self._nodes

    @nodes.setter
    def nodes(self, nodes):
        """
        Sets the nodes of this PipelineRunImpllinks.

        :param nodes: The nodes of this PipelineRunImpllinks.
        :type: Link
        """

        self._nodes = nodes

    @property
    def log(self):
        """
        Gets the log of this PipelineRunImpllinks.

        :return: The log of this PipelineRunImpllinks.
        :rtype: Link
        """
        return self._log

    @log.setter
    def log(self, log):
        """
        Sets the log of this PipelineRunImpllinks.

        :param log: The log of this PipelineRunImpllinks.
        :type: Link
        """

        self._log = log

    @property
    def _self(self):
        """
        Gets the _self of this PipelineRunImpllinks.

        :return: The _self of this PipelineRunImpllinks.
        :rtype: Link
        """
        return self.__self

    @_self.setter
    def _self(self, _self):
        """
        Sets the _self of this PipelineRunImpllinks.

        :param _self: The _self of this PipelineRunImpllinks.
        :type: Link
        """

        self.__self = _self

    @property
    def actions(self):
        """
        Gets the actions of this PipelineRunImpllinks.

        :return: The actions of this PipelineRunImpllinks.
        :rtype: Link
        """
        return self._actions

    @actions.setter
    def actions(self, actions):
        """
        Sets the actions of this PipelineRunImpllinks.

        :param actions: The actions of this PipelineRunImpllinks.
        :type: Link
        """

        self._actions = actions

    @property
    def steps(self):
        """
        Gets the steps of this PipelineRunImpllinks.

        :return: The steps of this PipelineRunImpllinks.
        :rtype: Link
        """
        return self._steps

    @steps.setter
    def steps(self, steps):
        """
        Sets the steps of this PipelineRunImpllinks.

        :param steps: The steps of this PipelineRunImpllinks.
        :type: Link
        """

        self._steps = steps

    @property
    def _class(self):
        """
        Gets the _class of this PipelineRunImpllinks.

        :return: The _class of this PipelineRunImpllinks.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this PipelineRunImpllinks.

        :param _class: The _class of this PipelineRunImpllinks.
        :type: str
        """

        self.__class = _class

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, PipelineRunImpllinks):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other