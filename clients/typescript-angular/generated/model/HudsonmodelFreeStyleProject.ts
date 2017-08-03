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

export interface HudsonmodelFreeStyleProject {
    "class"?: string;
    "name"?: string;
    "url"?: string;
    "color"?: string;
    "actions"?: Array<models.HudsonmodelFreeStyleProjectactions>;
    "description"?: string;
    "displayName"?: string;
    "displayNameOrNull"?: string;
    "fullDisplayName"?: string;
    "fullName"?: string;
    "buildable"?: boolean;
    "builds"?: Array<models.HudsonmodelFreeStyleBuild>;
    "firstBuild"?: models.HudsonmodelFreeStyleBuild;
    "healthReport"?: Array<models.HudsonmodelFreeStyleProjecthealthReport>;
    "inQueue"?: boolean;
    "keepDependencies"?: boolean;
    "lastBuild"?: models.HudsonmodelFreeStyleBuild;
    "lastCompletedBuild"?: models.HudsonmodelFreeStyleBuild;
    "lastFailedBuild"?: string;
    "lastStableBuild"?: models.HudsonmodelFreeStyleBuild;
    "lastSuccessfulBuild"?: models.HudsonmodelFreeStyleBuild;
    "lastUnstableBuild"?: string;
    "lastUnsuccessfulBuild"?: string;
    "nextBuildNumber"?: number;
    "queueItem"?: string;
    "concurrentBuild"?: boolean;
    "scm"?: models.HudsonscmNullSCM;
}
