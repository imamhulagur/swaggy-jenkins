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

import { FreeStyleBuild } from './freeStyleBuild';
import { FreeStyleProjectactions } from './freeStyleProjectactions';
import { FreeStyleProjecthealthReport } from './freeStyleProjecthealthReport';
import { NullSCM } from './nullSCM';


export interface FreeStyleProject {
    class?: string;

    name?: string;

    url?: string;

    color?: string;

    actions?: Array<FreeStyleProjectactions>;

    description?: string;

    displayName?: string;

    displayNameOrNull?: string;

    fullDisplayName?: string;

    fullName?: string;

    buildable?: boolean;

    builds?: Array<FreeStyleBuild>;

    firstBuild?: FreeStyleBuild;

    healthReport?: Array<FreeStyleProjecthealthReport>;

    inQueue?: boolean;

    keepDependencies?: boolean;

    lastBuild?: FreeStyleBuild;

    lastCompletedBuild?: FreeStyleBuild;

    lastFailedBuild?: string;

    lastStableBuild?: FreeStyleBuild;

    lastSuccessfulBuild?: FreeStyleBuild;

    lastUnstableBuild?: string;

    lastUnsuccessfulBuild?: string;

    nextBuildNumber?: number;

    queueItem?: string;

    concurrentBuild?: boolean;

    scm?: NullSCM;

}