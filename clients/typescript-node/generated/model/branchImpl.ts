/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { BranchImpllinks } from './branchImpllinks';
import { BranchImplpermissions } from './branchImplpermissions';
import { PipelineRunImpl } from './pipelineRunImpl';
import { StringParameterDefinition } from './stringParameterDefinition';

export class BranchImpl {
    '_class'?: string;
    'displayName'?: string;
    'estimatedDurationInMillis'?: number;
    'fullDisplayName'?: string;
    'fullName'?: string;
    'name'?: string;
    'organization'?: string;
    'parameters'?: Array<StringParameterDefinition>;
    'permissions'?: BranchImplpermissions;
    'weatherScore'?: number;
    'pullRequest'?: string;
    'links'?: BranchImpllinks;
    'latestRun'?: PipelineRunImpl;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "_class",
            "baseName": "_class",
            "type": "string"
        },
        {
            "name": "displayName",
            "baseName": "displayName",
            "type": "string"
        },
        {
            "name": "estimatedDurationInMillis",
            "baseName": "estimatedDurationInMillis",
            "type": "number"
        },
        {
            "name": "fullDisplayName",
            "baseName": "fullDisplayName",
            "type": "string"
        },
        {
            "name": "fullName",
            "baseName": "fullName",
            "type": "string"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "organization",
            "baseName": "organization",
            "type": "string"
        },
        {
            "name": "parameters",
            "baseName": "parameters",
            "type": "Array<StringParameterDefinition>"
        },
        {
            "name": "permissions",
            "baseName": "permissions",
            "type": "BranchImplpermissions"
        },
        {
            "name": "weatherScore",
            "baseName": "weatherScore",
            "type": "number"
        },
        {
            "name": "pullRequest",
            "baseName": "pullRequest",
            "type": "string"
        },
        {
            "name": "links",
            "baseName": "_links",
            "type": "BranchImpllinks"
        },
        {
            "name": "latestRun",
            "baseName": "latestRun",
            "type": "PipelineRunImpl"
        }    ];

    static getAttributeTypeMap() {
        return BranchImpl.attributeTypeMap;
    }
}
