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


class QueueItemImpl(object):
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
        '_class': 'str',
        'expected_build_number': 'int',
        'id': 'str',
        'pipeline': 'str',
        'queued_time': 'int'
    }

    attribute_map = {
        '_class': '_class',
        'expected_build_number': 'expectedBuildNumber',
        'id': 'id',
        'pipeline': 'pipeline',
        'queued_time': 'queuedTime'
    }

    def __init__(self, _class=None, expected_build_number=None, id=None, pipeline=None, queued_time=None):
        """
        QueueItemImpl - a model defined in Swagger
        """

        self.__class = None
        self._expected_build_number = None
        self._id = None
        self._pipeline = None
        self._queued_time = None
        self.discriminator = None

        if _class is not None:
          self._class = _class
        if expected_build_number is not None:
          self.expected_build_number = expected_build_number
        if id is not None:
          self.id = id
        if pipeline is not None:
          self.pipeline = pipeline
        if queued_time is not None:
          self.queued_time = queued_time

    @property
    def _class(self):
        """
        Gets the _class of this QueueItemImpl.

        :return: The _class of this QueueItemImpl.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this QueueItemImpl.

        :param _class: The _class of this QueueItemImpl.
        :type: str
        """

        self.__class = _class

    @property
    def expected_build_number(self):
        """
        Gets the expected_build_number of this QueueItemImpl.

        :return: The expected_build_number of this QueueItemImpl.
        :rtype: int
        """
        return self._expected_build_number

    @expected_build_number.setter
    def expected_build_number(self, expected_build_number):
        """
        Sets the expected_build_number of this QueueItemImpl.

        :param expected_build_number: The expected_build_number of this QueueItemImpl.
        :type: int
        """

        self._expected_build_number = expected_build_number

    @property
    def id(self):
        """
        Gets the id of this QueueItemImpl.

        :return: The id of this QueueItemImpl.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this QueueItemImpl.

        :param id: The id of this QueueItemImpl.
        :type: str
        """

        self._id = id

    @property
    def pipeline(self):
        """
        Gets the pipeline of this QueueItemImpl.

        :return: The pipeline of this QueueItemImpl.
        :rtype: str
        """
        return self._pipeline

    @pipeline.setter
    def pipeline(self, pipeline):
        """
        Sets the pipeline of this QueueItemImpl.

        :param pipeline: The pipeline of this QueueItemImpl.
        :type: str
        """

        self._pipeline = pipeline

    @property
    def queued_time(self):
        """
        Gets the queued_time of this QueueItemImpl.

        :return: The queued_time of this QueueItemImpl.
        :rtype: int
        """
        return self._queued_time

    @queued_time.setter
    def queued_time(self, queued_time):
        """
        Sets the queued_time of this QueueItemImpl.

        :param queued_time: The queued_time of this QueueItemImpl.
        :type: int
        """

        self._queued_time = queued_time

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
        if not isinstance(other, QueueItemImpl):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other