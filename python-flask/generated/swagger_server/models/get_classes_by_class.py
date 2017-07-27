# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class GetClassesByClass(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, classes: List[str]=None, _class: str=None):
        """
        GetClassesByClass - a model defined in Swagger

        :param classes: The classes of this GetClassesByClass.
        :type classes: List[str]
        :param _class: The _class of this GetClassesByClass.
        :type _class: str
        """
        self.swagger_types = {
            'classes': List[str],
            '_class': str
        }

        self.attribute_map = {
            'classes': 'classes',
            '_class': '_class'
        }

        self._classes = classes
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'GetClassesByClass':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The getClassesByClass of this GetClassesByClass.
        :rtype: GetClassesByClass
        """
        return deserialize_model(dikt, cls)

    @property
    def classes(self) -> List[str]:
        """
        Gets the classes of this GetClassesByClass.

        :return: The classes of this GetClassesByClass.
        :rtype: List[str]
        """
        return self._classes

    @classes.setter
    def classes(self, classes: List[str]):
        """
        Sets the classes of this GetClassesByClass.

        :param classes: The classes of this GetClassesByClass.
        :type classes: List[str]
        """

        self._classes = classes

    @property
    def _class(self) -> str:
        """
        Gets the _class of this GetClassesByClass.

        :return: The _class of this GetClassesByClass.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this GetClassesByClass.

        :param _class: The _class of this GetClassesByClass.
        :type _class: str
        """

        self.__class = _class

