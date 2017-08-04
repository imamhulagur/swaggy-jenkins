# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class Link(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, href: str=None):
        """
        Link - a model defined in Swagger

        :param _class: The _class of this Link.
        :type _class: str
        :param href: The href of this Link.
        :type href: str
        """
        self.swagger_types = {
            '_class': str,
            'href': str
        }

        self.attribute_map = {
            '_class': '_class',
            'href': 'href'
        }

        self.__class = _class
        self._href = href

    @classmethod
    def from_dict(cls, dikt) -> 'Link':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The Link of this Link.
        :rtype: Link
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this Link.

        :return: The _class of this Link.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this Link.

        :param _class: The _class of this Link.
        :type _class: str
        """

        self.__class = _class

    @property
    def href(self) -> str:
        """
        Gets the href of this Link.

        :return: The href of this Link.
        :rtype: str
        """
        return self._href

    @href.setter
    def href(self, href: str):
        """
        Sets the href of this Link.

        :param href: The href of this Link.
        :type href: str
        """

        self._href = href
