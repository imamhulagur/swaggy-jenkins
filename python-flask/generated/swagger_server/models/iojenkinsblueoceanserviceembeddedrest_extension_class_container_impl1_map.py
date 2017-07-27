# coding: utf-8

from __future__ import absolute_import
from swagger_server.models.iojenkinsblueoceanserviceembeddedrest_extension_class_impl import IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, io_jenkins_blueocean_service_embedded_rest_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl=None, io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl=None, _class: str=None):
        """
        IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map - a model defined in Swagger

        :param io_jenkins_blueocean_service_embedded_rest_pipeline_impl: The io_jenkins_blueocean_service_embedded_rest_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :type io_jenkins_blueocean_service_embedded_rest_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
        :param io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: The io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :type io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
        :param _class: The _class of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :type _class: str
        """
        self.swagger_types = {
            'io_jenkins_blueocean_service_embedded_rest_pipeline_impl': IojenkinsblueoceanserviceembeddedrestExtensionClassImpl,
            'io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl': IojenkinsblueoceanserviceembeddedrestExtensionClassImpl,
            '_class': str
        }

        self.attribute_map = {
            'io_jenkins_blueocean_service_embedded_rest_pipeline_impl': 'io.jenkins.blueocean.service.embedded.rest.PipelineImpl',
            'io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl': 'io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl',
            '_class': '_class'
        }

        self._io_jenkins_blueocean_service_embedded_rest_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_pipeline_impl
        self._io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The iojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :rtype: IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map
        """
        return deserialize_model(dikt, cls)

    @property
    def io_jenkins_blueocean_service_embedded_rest_pipeline_impl(self) -> IojenkinsblueoceanserviceembeddedrestExtensionClassImpl:
        """
        Gets the io_jenkins_blueocean_service_embedded_rest_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.

        :return: The io_jenkins_blueocean_service_embedded_rest_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :rtype: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
        """
        return self._io_jenkins_blueocean_service_embedded_rest_pipeline_impl

    @io_jenkins_blueocean_service_embedded_rest_pipeline_impl.setter
    def io_jenkins_blueocean_service_embedded_rest_pipeline_impl(self, io_jenkins_blueocean_service_embedded_rest_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl):
        """
        Sets the io_jenkins_blueocean_service_embedded_rest_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.

        :param io_jenkins_blueocean_service_embedded_rest_pipeline_impl: The io_jenkins_blueocean_service_embedded_rest_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :type io_jenkins_blueocean_service_embedded_rest_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
        """

        self._io_jenkins_blueocean_service_embedded_rest_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_pipeline_impl

    @property
    def io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl(self) -> IojenkinsblueoceanserviceembeddedrestExtensionClassImpl:
        """
        Gets the io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.

        :return: The io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :rtype: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
        """
        return self._io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl

    @io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl.setter
    def io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl(self, io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl):
        """
        Sets the io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.

        :param io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: The io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :type io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
        """

        self._io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl

    @property
    def _class(self) -> str:
        """
        Gets the _class of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.

        :return: The _class of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.

        :param _class: The _class of this IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.
        :type _class: str
        """

        self.__class = _class

