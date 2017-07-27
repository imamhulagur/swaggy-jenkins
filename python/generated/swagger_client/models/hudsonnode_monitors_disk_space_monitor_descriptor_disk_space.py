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


class HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace(object):
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
        'timestamp': 'int',
        'path': 'str',
        'size': 'int'
    }

    attribute_map = {
        '_class': '_class',
        'timestamp': 'timestamp',
        'path': 'path',
        'size': 'size'
    }

    def __init__(self, _class=None, timestamp=None, path=None, size=None):
        """
        HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace - a model defined in Swagger
        """

        self.__class = None
        self._timestamp = None
        self._path = None
        self._size = None

        if _class is not None:
          self._class = _class
        if timestamp is not None:
          self.timestamp = timestamp
        if path is not None:
          self.path = path
        if size is not None:
          self.size = size

    @property
    def _class(self):
        """
        Gets the _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """
        Sets the _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param _class: The _class of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type: str
        """

        self.__class = _class

    @property
    def timestamp(self):
        """
        Gets the timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: int
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp):
        """
        Sets the timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param timestamp: The timestamp of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type: int
        """

        self._timestamp = timestamp

    @property
    def path(self):
        """
        Gets the path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: str
        """
        return self._path

    @path.setter
    def path(self, path):
        """
        Sets the path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param path: The path of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type: str
        """

        self._path = path

    @property
    def size(self):
        """
        Gets the size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :return: The size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :rtype: int
        """
        return self._size

    @size.setter
    def size(self, size):
        """
        Sets the size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.

        :param size: The size of this HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.
        :type: int
        """

        self._size = size

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
        if not isinstance(other, HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
