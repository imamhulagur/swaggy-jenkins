# coding: utf-8

from __future__ import absolute_import
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class GetPipelineBranchesitemLatestRun(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, duration_in_millis: int=None, estimated_duration_in_millis: int=None, en_queue_time: str=None, end_time: str=None, id: str=None, organization: str=None, pipeline: str=None, result: str=None, run_summary: str=None, start_time: str=None, state: str=None, type: str=None, commit_id: str=None, _class: str=None):
        """
        GetPipelineBranchesitemLatestRun - a model defined in Swagger

        :param duration_in_millis: The duration_in_millis of this GetPipelineBranchesitemLatestRun.
        :type duration_in_millis: int
        :param estimated_duration_in_millis: The estimated_duration_in_millis of this GetPipelineBranchesitemLatestRun.
        :type estimated_duration_in_millis: int
        :param en_queue_time: The en_queue_time of this GetPipelineBranchesitemLatestRun.
        :type en_queue_time: str
        :param end_time: The end_time of this GetPipelineBranchesitemLatestRun.
        :type end_time: str
        :param id: The id of this GetPipelineBranchesitemLatestRun.
        :type id: str
        :param organization: The organization of this GetPipelineBranchesitemLatestRun.
        :type organization: str
        :param pipeline: The pipeline of this GetPipelineBranchesitemLatestRun.
        :type pipeline: str
        :param result: The result of this GetPipelineBranchesitemLatestRun.
        :type result: str
        :param run_summary: The run_summary of this GetPipelineBranchesitemLatestRun.
        :type run_summary: str
        :param start_time: The start_time of this GetPipelineBranchesitemLatestRun.
        :type start_time: str
        :param state: The state of this GetPipelineBranchesitemLatestRun.
        :type state: str
        :param type: The type of this GetPipelineBranchesitemLatestRun.
        :type type: str
        :param commit_id: The commit_id of this GetPipelineBranchesitemLatestRun.
        :type commit_id: str
        :param _class: The _class of this GetPipelineBranchesitemLatestRun.
        :type _class: str
        """
        self.swagger_types = {
            'duration_in_millis': int,
            'estimated_duration_in_millis': int,
            'en_queue_time': str,
            'end_time': str,
            'id': str,
            'organization': str,
            'pipeline': str,
            'result': str,
            'run_summary': str,
            'start_time': str,
            'state': str,
            'type': str,
            'commit_id': str,
            '_class': str
        }

        self.attribute_map = {
            'duration_in_millis': 'durationInMillis',
            'estimated_duration_in_millis': 'estimatedDurationInMillis',
            'en_queue_time': 'enQueueTime',
            'end_time': 'endTime',
            'id': 'id',
            'organization': 'organization',
            'pipeline': 'pipeline',
            'result': 'result',
            'run_summary': 'runSummary',
            'start_time': 'startTime',
            'state': 'state',
            'type': 'type',
            'commit_id': 'commitId',
            '_class': '_class'
        }

        self._duration_in_millis = duration_in_millis
        self._estimated_duration_in_millis = estimated_duration_in_millis
        self._en_queue_time = en_queue_time
        self._end_time = end_time
        self._id = id
        self._organization = organization
        self._pipeline = pipeline
        self._result = result
        self._run_summary = run_summary
        self._start_time = start_time
        self._state = state
        self._type = type
        self._commit_id = commit_id
        self.__class = _class

    @classmethod
    def from_dict(cls, dikt) -> 'GetPipelineBranchesitemLatestRun':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The getPipelineBranchesitem_latestRun of this GetPipelineBranchesitemLatestRun.
        :rtype: GetPipelineBranchesitemLatestRun
        """
        return deserialize_model(dikt, cls)

    @property
    def duration_in_millis(self) -> int:
        """
        Gets the duration_in_millis of this GetPipelineBranchesitemLatestRun.

        :return: The duration_in_millis of this GetPipelineBranchesitemLatestRun.
        :rtype: int
        """
        return self._duration_in_millis

    @duration_in_millis.setter
    def duration_in_millis(self, duration_in_millis: int):
        """
        Sets the duration_in_millis of this GetPipelineBranchesitemLatestRun.

        :param duration_in_millis: The duration_in_millis of this GetPipelineBranchesitemLatestRun.
        :type duration_in_millis: int
        """

        self._duration_in_millis = duration_in_millis

    @property
    def estimated_duration_in_millis(self) -> int:
        """
        Gets the estimated_duration_in_millis of this GetPipelineBranchesitemLatestRun.

        :return: The estimated_duration_in_millis of this GetPipelineBranchesitemLatestRun.
        :rtype: int
        """
        return self._estimated_duration_in_millis

    @estimated_duration_in_millis.setter
    def estimated_duration_in_millis(self, estimated_duration_in_millis: int):
        """
        Sets the estimated_duration_in_millis of this GetPipelineBranchesitemLatestRun.

        :param estimated_duration_in_millis: The estimated_duration_in_millis of this GetPipelineBranchesitemLatestRun.
        :type estimated_duration_in_millis: int
        """

        self._estimated_duration_in_millis = estimated_duration_in_millis

    @property
    def en_queue_time(self) -> str:
        """
        Gets the en_queue_time of this GetPipelineBranchesitemLatestRun.

        :return: The en_queue_time of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._en_queue_time

    @en_queue_time.setter
    def en_queue_time(self, en_queue_time: str):
        """
        Sets the en_queue_time of this GetPipelineBranchesitemLatestRun.

        :param en_queue_time: The en_queue_time of this GetPipelineBranchesitemLatestRun.
        :type en_queue_time: str
        """

        self._en_queue_time = en_queue_time

    @property
    def end_time(self) -> str:
        """
        Gets the end_time of this GetPipelineBranchesitemLatestRun.

        :return: The end_time of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._end_time

    @end_time.setter
    def end_time(self, end_time: str):
        """
        Sets the end_time of this GetPipelineBranchesitemLatestRun.

        :param end_time: The end_time of this GetPipelineBranchesitemLatestRun.
        :type end_time: str
        """

        self._end_time = end_time

    @property
    def id(self) -> str:
        """
        Gets the id of this GetPipelineBranchesitemLatestRun.

        :return: The id of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """
        Sets the id of this GetPipelineBranchesitemLatestRun.

        :param id: The id of this GetPipelineBranchesitemLatestRun.
        :type id: str
        """

        self._id = id

    @property
    def organization(self) -> str:
        """
        Gets the organization of this GetPipelineBranchesitemLatestRun.

        :return: The organization of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._organization

    @organization.setter
    def organization(self, organization: str):
        """
        Sets the organization of this GetPipelineBranchesitemLatestRun.

        :param organization: The organization of this GetPipelineBranchesitemLatestRun.
        :type organization: str
        """

        self._organization = organization

    @property
    def pipeline(self) -> str:
        """
        Gets the pipeline of this GetPipelineBranchesitemLatestRun.

        :return: The pipeline of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._pipeline

    @pipeline.setter
    def pipeline(self, pipeline: str):
        """
        Sets the pipeline of this GetPipelineBranchesitemLatestRun.

        :param pipeline: The pipeline of this GetPipelineBranchesitemLatestRun.
        :type pipeline: str
        """

        self._pipeline = pipeline

    @property
    def result(self) -> str:
        """
        Gets the result of this GetPipelineBranchesitemLatestRun.

        :return: The result of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._result

    @result.setter
    def result(self, result: str):
        """
        Sets the result of this GetPipelineBranchesitemLatestRun.

        :param result: The result of this GetPipelineBranchesitemLatestRun.
        :type result: str
        """

        self._result = result

    @property
    def run_summary(self) -> str:
        """
        Gets the run_summary of this GetPipelineBranchesitemLatestRun.

        :return: The run_summary of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._run_summary

    @run_summary.setter
    def run_summary(self, run_summary: str):
        """
        Sets the run_summary of this GetPipelineBranchesitemLatestRun.

        :param run_summary: The run_summary of this GetPipelineBranchesitemLatestRun.
        :type run_summary: str
        """

        self._run_summary = run_summary

    @property
    def start_time(self) -> str:
        """
        Gets the start_time of this GetPipelineBranchesitemLatestRun.

        :return: The start_time of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._start_time

    @start_time.setter
    def start_time(self, start_time: str):
        """
        Sets the start_time of this GetPipelineBranchesitemLatestRun.

        :param start_time: The start_time of this GetPipelineBranchesitemLatestRun.
        :type start_time: str
        """

        self._start_time = start_time

    @property
    def state(self) -> str:
        """
        Gets the state of this GetPipelineBranchesitemLatestRun.

        :return: The state of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state: str):
        """
        Sets the state of this GetPipelineBranchesitemLatestRun.

        :param state: The state of this GetPipelineBranchesitemLatestRun.
        :type state: str
        """

        self._state = state

    @property
    def type(self) -> str:
        """
        Gets the type of this GetPipelineBranchesitemLatestRun.

        :return: The type of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type: str):
        """
        Sets the type of this GetPipelineBranchesitemLatestRun.

        :param type: The type of this GetPipelineBranchesitemLatestRun.
        :type type: str
        """

        self._type = type

    @property
    def commit_id(self) -> str:
        """
        Gets the commit_id of this GetPipelineBranchesitemLatestRun.

        :return: The commit_id of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self._commit_id

    @commit_id.setter
    def commit_id(self, commit_id: str):
        """
        Sets the commit_id of this GetPipelineBranchesitemLatestRun.

        :param commit_id: The commit_id of this GetPipelineBranchesitemLatestRun.
        :type commit_id: str
        """

        self._commit_id = commit_id

    @property
    def _class(self) -> str:
        """
        Gets the _class of this GetPipelineBranchesitemLatestRun.

        :return: The _class of this GetPipelineBranchesitemLatestRun.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this GetPipelineBranchesitemLatestRun.

        :param _class: The _class of this GetPipelineBranchesitemLatestRun.
        :type _class: str
        """

        self.__class = _class

