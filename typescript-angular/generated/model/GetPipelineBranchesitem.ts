/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

import * as models from './models';

export interface GetPipelineBranchesitem {
    "displayName"?: string;
    "estimatedDurationInMillis"?: number;
    "name"?: string;
    "weatherScore"?: number;
    "latestRun"?: models.GetPipelineBranchesitemLatestRun;
    "organization"?: string;
    "pullRequest"?: models.GetPipelineBranchesitemPullRequest;
    "totalNumberOfPullRequests"?: number;
    "class"?: string;
}

