# swaggy_jenkins

SwaggyJenkins - JavaScript client for swaggy_jenkins
Jenkins API clients generated from Swagger / Open API specification
This SDK is automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen) project:

- API version: 0.1.0
- Package version: 0.0.2
- Build package: io.swagger.codegen.languages.JavascriptClientCodegen
For more information, please visit [http://github.com/cliffano/swaggy-jenkins](http://github.com/cliffano/swaggy-jenkins)

## Installation

### For [Node.js](https://nodejs.org/)

#### npm

To publish the library as a [npm](https://www.npmjs.com/),
please follow the procedure in ["Publishing npm packages"](https://docs.npmjs.com/getting-started/publishing-npm-packages).

Then install it via:

```shell
npm install swaggy_jenkins --save
```

#### git
#
If the library is hosted at a git repository, e.g.
https://github.com/cliffano/swaggy-jenkins
then install it via:

```shell
    npm install cliffano/swaggy-jenkins --save
```

### For browser

The library also works in the browser environment via npm and [browserify](http://browserify.org/). After following
the above steps with Node.js and installing browserify with `npm install -g browserify`,
perform the following (assuming *main.js* is your entry file):

```shell
browserify main.js > bundle.js
```

Then include *bundle.js* in the HTML pages.

## Getting Started

Please follow the [installation](#installation) instruction and execute the following JS code:

```javascript
var SwaggyJenkins = require('swaggy_jenkins');

var api = new SwaggyJenkins.BlueOceanApi()

var organisation = "organisation_example"; // {String} Name of the organisation

var pipeline = "pipeline_example"; // {String} Name of the pipeline

var queue = "queue_example"; // {String} Name of the queue item


var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
};
api.deletePipelineQueueItemByOrg(organisation, pipeline, queue, callback);

```

## Documentation for API Endpoints

All URIs are relative to *http://localhost*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*SwaggyJenkins.BlueOceanApi* | [**deletePipelineQueueItemByOrg**](docs/BlueOceanApi.md#deletePipelineQueueItemByOrg) | **DELETE** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/queue/{queue} | 
*SwaggyJenkins.BlueOceanApi* | [**getAuthenticatedUser**](docs/BlueOceanApi.md#getAuthenticatedUser) | **GET** /blue/rest/organizations/{organisation}/user/ | 
*SwaggyJenkins.BlueOceanApi* | [**getClasses**](docs/BlueOceanApi.md#getClasses) | **GET** /blue/rest/classes/{class} | 
*SwaggyJenkins.BlueOceanApi* | [**getOrganisation**](docs/BlueOceanApi.md#getOrganisation) | **GET** /blue/rest/organizations/{organisation} | 
*SwaggyJenkins.BlueOceanApi* | [**getOrganisations**](docs/BlueOceanApi.md#getOrganisations) | **GET** /blue/rest/organizations/ | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineActivitiesByOrg**](docs/BlueOceanApi.md#getPipelineActivitiesByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/activities | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineBranchByOrg**](docs/BlueOceanApi.md#getPipelineBranchByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches/{branch}/ | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineBranchRunByOrg**](docs/BlueOceanApi.md#getPipelineBranchRunByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches/{branch}/runs/{run} | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineBranchesByOrg**](docs/BlueOceanApi.md#getPipelineBranchesByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineByOrg**](docs/BlueOceanApi.md#getPipelineByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline} | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineFolderByOrg**](docs/BlueOceanApi.md#getPipelineFolderByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{folder}/ | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineFolderByOrg_0**](docs/BlueOceanApi.md#getPipelineFolderByOrg_0) | **GET** /blue/rest/organizations/{organisation}/pipelines/{folder}/pipelines/{pipeline} | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineQueueByOrg**](docs/BlueOceanApi.md#getPipelineQueueByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/queue | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunByOrg**](docs/BlueOceanApi.md#getPipelineRunByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run} | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunLogByOrg**](docs/BlueOceanApi.md#getPipelineRunLogByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/log | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunNodeByOrg**](docs/BlueOceanApi.md#getPipelineRunNodeByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/nodes/{node} | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunNodeStepByOrg**](docs/BlueOceanApi.md#getPipelineRunNodeStepByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step} | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunNodeStepLogByOrg**](docs/BlueOceanApi.md#getPipelineRunNodeStepLogByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step}/log | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunNodeStepsByOrg**](docs/BlueOceanApi.md#getPipelineRunNodeStepsByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunNodesByOrg**](docs/BlueOceanApi.md#getPipelineRunNodesByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/nodes | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelineRunsByOrg**](docs/BlueOceanApi.md#getPipelineRunsByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs | 
*SwaggyJenkins.BlueOceanApi* | [**getPipelinesByOrg**](docs/BlueOceanApi.md#getPipelinesByOrg) | **GET** /blue/rest/organizations/{organisation}/pipelines/ | 
*SwaggyJenkins.BlueOceanApi* | [**getSCM**](docs/BlueOceanApi.md#getSCM) | **GET** /blue/rest/organizations/{organisation}/scm/{scm} | 
*SwaggyJenkins.BlueOceanApi* | [**getSCMOrganisationRepositories**](docs/BlueOceanApi.md#getSCMOrganisationRepositories) | **GET** /blue/rest/organizations/{organisation}/scm/{scm}/organizations/{scmOrganisation}/repositories | 
*SwaggyJenkins.BlueOceanApi* | [**getSCMOrganisationRepository**](docs/BlueOceanApi.md#getSCMOrganisationRepository) | **GET** /blue/rest/organizations/{organisation}/scm/{scm}/organizations/{scmOrganisation}/repositories/{repository} | 
*SwaggyJenkins.BlueOceanApi* | [**getSCMOrganisations**](docs/BlueOceanApi.md#getSCMOrganisations) | **GET** /blue/rest/organizations/{organisation}/scm/{scm}/organizations | 
*SwaggyJenkins.BlueOceanApi* | [**getUser**](docs/BlueOceanApi.md#getUser) | **GET** /blue/rest/organizations/{organisation}/users/{user} | 
*SwaggyJenkins.BlueOceanApi* | [**getUserFavorites**](docs/BlueOceanApi.md#getUserFavorites) | **GET** /blue/rest/users/{user}/favorites | 
*SwaggyJenkins.BlueOceanApi* | [**getUsers**](docs/BlueOceanApi.md#getUsers) | **GET** /blue/rest/organizations/{organisation}/users/ | 
*SwaggyJenkins.BlueOceanApi* | [**postPipelineRunByOrg**](docs/BlueOceanApi.md#postPipelineRunByOrg) | **POST** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/replay | 
*SwaggyJenkins.BlueOceanApi* | [**postPipelineRunsByOrg**](docs/BlueOceanApi.md#postPipelineRunsByOrg) | **POST** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs | 
*SwaggyJenkins.BlueOceanApi* | [**putPipelineFavoriteByOrg**](docs/BlueOceanApi.md#putPipelineFavoriteByOrg) | **PUT** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/favorite | 
*SwaggyJenkins.BlueOceanApi* | [**putPipelineRunByOrg**](docs/BlueOceanApi.md#putPipelineRunByOrg) | **PUT** /blue/rest/organizations/{organisation}/pipelines/{pipeline}/runs/{run}/stop | 
*SwaggyJenkins.BlueOceanApi* | [**search**](docs/BlueOceanApi.md#search) | **GET** /blue/rest/search/ | 
*SwaggyJenkins.BlueOceanApi* | [**searchClasses**](docs/BlueOceanApi.md#searchClasses) | **GET** /blue/rest/classes/ | 
*SwaggyJenkins.RemoteAccessApi* | [**getComputer**](docs/RemoteAccessApi.md#getComputer) | **GET** /computer/api/json?depth&#x3D;1 | 
*SwaggyJenkins.RemoteAccessApi* | [**getCrumb**](docs/RemoteAccessApi.md#getCrumb) | **GET** /crumbIssuer/api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**getJenkins**](docs/RemoteAccessApi.md#getJenkins) | **GET** /api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**getJob**](docs/RemoteAccessApi.md#getJob) | **GET** /job/{name}/api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**getJobConfig**](docs/RemoteAccessApi.md#getJobConfig) | **GET** /job/{name}/config.xml | 
*SwaggyJenkins.RemoteAccessApi* | [**getJobLastBuild**](docs/RemoteAccessApi.md#getJobLastBuild) | **GET** /job/{name}/lastBuild/api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**getJobProgressiveText**](docs/RemoteAccessApi.md#getJobProgressiveText) | **GET** /job/{name}/{number}/logText/progressiveText | 
*SwaggyJenkins.RemoteAccessApi* | [**getQueue**](docs/RemoteAccessApi.md#getQueue) | **GET** /queue/api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**getQueueItem**](docs/RemoteAccessApi.md#getQueueItem) | **GET** /queue/item/{number}/api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**getView**](docs/RemoteAccessApi.md#getView) | **GET** /view/{name}/api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**getViewConfig**](docs/RemoteAccessApi.md#getViewConfig) | **GET** /view/{name}/config.xml | 
*SwaggyJenkins.RemoteAccessApi* | [**headJenkins**](docs/RemoteAccessApi.md#headJenkins) | **HEAD** /api/json | 
*SwaggyJenkins.RemoteAccessApi* | [**postCreateItem**](docs/RemoteAccessApi.md#postCreateItem) | **POST** /createItem | 
*SwaggyJenkins.RemoteAccessApi* | [**postCreateView**](docs/RemoteAccessApi.md#postCreateView) | **POST** /createView | 
*SwaggyJenkins.RemoteAccessApi* | [**postJobBuild**](docs/RemoteAccessApi.md#postJobBuild) | **POST** /job/{name}/build | 
*SwaggyJenkins.RemoteAccessApi* | [**postJobConfig**](docs/RemoteAccessApi.md#postJobConfig) | **POST** /job/{name}/config.xml | 
*SwaggyJenkins.RemoteAccessApi* | [**postJobDelete**](docs/RemoteAccessApi.md#postJobDelete) | **POST** /job/{name}/doDelete | 
*SwaggyJenkins.RemoteAccessApi* | [**postJobDisable**](docs/RemoteAccessApi.md#postJobDisable) | **POST** /job/{name}/disable | 
*SwaggyJenkins.RemoteAccessApi* | [**postJobEnable**](docs/RemoteAccessApi.md#postJobEnable) | **POST** /job/{name}/enable | 
*SwaggyJenkins.RemoteAccessApi* | [**postJobLastBuildStop**](docs/RemoteAccessApi.md#postJobLastBuildStop) | **POST** /job/{name}/lastBuild/stop | 
*SwaggyJenkins.RemoteAccessApi* | [**postViewConfig**](docs/RemoteAccessApi.md#postViewConfig) | **POST** /view/{name}/config.xml | 


## Documentation for Models

 - [SwaggyJenkins.Body](docs/Body.md)
 - [SwaggyJenkins.GetClassesByClass](docs/GetClassesByClass.md)
 - [SwaggyJenkins.GetMultibranchPipeline](docs/GetMultibranchPipeline.md)
 - [SwaggyJenkins.GetOrganisations](docs/GetOrganisations.md)
 - [SwaggyJenkins.GetPipelineActivities](docs/GetPipelineActivities.md)
 - [SwaggyJenkins.GetPipelineBranches](docs/GetPipelineBranches.md)
 - [SwaggyJenkins.GetPipelineBranchesitem](docs/GetPipelineBranchesitem.md)
 - [SwaggyJenkins.GetPipelineBranchesitemLatestRun](docs/GetPipelineBranchesitemLatestRun.md)
 - [SwaggyJenkins.GetPipelineBranchesitemPullRequest](docs/GetPipelineBranchesitemPullRequest.md)
 - [SwaggyJenkins.GetPipelineBranchesitemPullRequestLinks](docs/GetPipelineBranchesitemPullRequestLinks.md)
 - [SwaggyJenkins.GetPipelineQueue](docs/GetPipelineQueue.md)
 - [SwaggyJenkins.GetPipelineRunNodeSteps](docs/GetPipelineRunNodeSteps.md)
 - [SwaggyJenkins.GetPipelineRunNodes](docs/GetPipelineRunNodes.md)
 - [SwaggyJenkins.GetPipelineRunSteps](docs/GetPipelineRunSteps.md)
 - [SwaggyJenkins.GetPipelineRuns](docs/GetPipelineRuns.md)
 - [SwaggyJenkins.GetPipelines](docs/GetPipelines.md)
 - [SwaggyJenkins.GetScmOrganisations](docs/GetScmOrganisations.md)
 - [SwaggyJenkins.GetUserFavorites](docs/GetUserFavorites.md)
 - [SwaggyJenkins.GetUsers](docs/GetUsers.md)
 - [SwaggyJenkins.HudsonmodelAllView](docs/HudsonmodelAllView.md)
 - [SwaggyJenkins.HudsonmodelCauseAction](docs/HudsonmodelCauseAction.md)
 - [SwaggyJenkins.HudsonmodelCauseUserIdCause](docs/HudsonmodelCauseUserIdCause.md)
 - [SwaggyJenkins.HudsonmodelComputerSet](docs/HudsonmodelComputerSet.md)
 - [SwaggyJenkins.HudsonmodelFreeStyleBuild](docs/HudsonmodelFreeStyleBuild.md)
 - [SwaggyJenkins.HudsonmodelFreeStyleProject](docs/HudsonmodelFreeStyleProject.md)
 - [SwaggyJenkins.HudsonmodelFreeStyleProjectactions](docs/HudsonmodelFreeStyleProjectactions.md)
 - [SwaggyJenkins.HudsonmodelFreeStyleProjecthealthReport](docs/HudsonmodelFreeStyleProjecthealthReport.md)
 - [SwaggyJenkins.HudsonmodelHudson](docs/HudsonmodelHudson.md)
 - [SwaggyJenkins.HudsonmodelHudsonMasterComputer](docs/HudsonmodelHudsonMasterComputer.md)
 - [SwaggyJenkins.HudsonmodelHudsonMasterComputerMonitorData](docs/HudsonmodelHudsonMasterComputerMonitorData.md)
 - [SwaggyJenkins.HudsonmodelHudsonMasterComputerexecutors](docs/HudsonmodelHudsonMasterComputerexecutors.md)
 - [SwaggyJenkins.HudsonmodelHudsonassignedLabels](docs/HudsonmodelHudsonassignedLabels.md)
 - [SwaggyJenkins.HudsonmodelLabel1](docs/HudsonmodelLabel1.md)
 - [SwaggyJenkins.HudsonmodelListView](docs/HudsonmodelListView.md)
 - [SwaggyJenkins.HudsonmodelQueue](docs/HudsonmodelQueue.md)
 - [SwaggyJenkins.HudsonmodelQueueBlockedItem](docs/HudsonmodelQueueBlockedItem.md)
 - [SwaggyJenkins.HudsonmodelQueueLeftItem](docs/HudsonmodelQueueLeftItem.md)
 - [SwaggyJenkins.HudsonmodelStringParameterDefinition](docs/HudsonmodelStringParameterDefinition.md)
 - [SwaggyJenkins.HudsonmodelStringParameterValue](docs/HudsonmodelStringParameterValue.md)
 - [SwaggyJenkins.HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace](docs/HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.md)
 - [SwaggyJenkins.HudsonnodeMonitorsResponseTimeMonitorData](docs/HudsonnodeMonitorsResponseTimeMonitorData.md)
 - [SwaggyJenkins.HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2](docs/HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2.md)
 - [SwaggyJenkins.HudsonscmEmptyChangeLogSet](docs/HudsonscmEmptyChangeLogSet.md)
 - [SwaggyJenkins.HudsonscmNullSCM](docs/HudsonscmNullSCM.md)
 - [SwaggyJenkins.HudsonsecuritycsrfDefaultCrumbIssuer](docs/HudsonsecuritycsrfDefaultCrumbIssuer.md)
 - [SwaggyJenkins.HudsonutilClockDifference](docs/HudsonutilClockDifference.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubContent](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubContent.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubFile](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubFile.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRepository](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubRepository.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubScm](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubScm.md)
 - [SwaggyJenkins.IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks](docs/IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanresthalLink](docs/IojenkinsblueoceanresthalLink.md)
 - [SwaggyJenkins.IojenkinsblueoceanrestimplpipelineBranchImpl](docs/IojenkinsblueoceanrestimplpipelineBranchImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanrestimplpipelineBranchImplPermissions](docs/IojenkinsblueoceanrestimplpipelineBranchImplPermissions.md)
 - [SwaggyJenkins.IojenkinsblueoceanrestimplpipelineInputStepImpl](docs/IojenkinsblueoceanrestimplpipelineInputStepImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanrestimplpipelineInputStepImplLinks](docs/IojenkinsblueoceanrestimplpipelineInputStepImplLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanrestimplpipelinePipelineStepImpl](docs/IojenkinsblueoceanrestimplpipelinePipelineStepImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks](docs/IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanrestmodelGenericResource](docs/IojenkinsblueoceanrestmodelGenericResource.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestBranchImpl](docs/IojenkinsblueoceanserviceembeddedrestBranchImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestBranchImplLinks](docs/IojenkinsblueoceanserviceembeddedrestBranchImplLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1](docs/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links](docs/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map](docs/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestExtensionClassImpl](docs/IojenkinsblueoceanserviceembeddedrestExtensionClassImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks](docs/IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestFavoriteImpl](docs/IojenkinsblueoceanserviceembeddedrestFavoriteImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks](docs/IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl](docs/IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestPipelineImpl](docs/IojenkinsblueoceanserviceembeddedrestPipelineImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestPipelineImplLinks](docs/IojenkinsblueoceanserviceembeddedrestPipelineImplLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestPipelineRunImpl](docs/IojenkinsblueoceanserviceembeddedrestPipelineRunImpl.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks](docs/IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks.md)
 - [SwaggyJenkins.IojenkinsblueoceanserviceembeddedrestQueueItemImpl](docs/IojenkinsblueoceanserviceembeddedrestQueueItemImpl.md)
 - [SwaggyJenkins.JenkinsmodelUnlabeledLoadStatistics](docs/JenkinsmodelUnlabeledLoadStatistics.md)
 - [SwaggyJenkins.SwaggyjenkinsOrganisation](docs/SwaggyjenkinsOrganisation.md)
 - [SwaggyJenkins.SwaggyjenkinsPipeline](docs/SwaggyjenkinsPipeline.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineActivity](docs/SwaggyjenkinsPipelineActivity.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineActivityartifacts](docs/SwaggyjenkinsPipelineActivityartifacts.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineLatestRun](docs/SwaggyjenkinsPipelineLatestRun.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineLatestRunartifacts](docs/SwaggyjenkinsPipelineLatestRunartifacts.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineRun](docs/SwaggyjenkinsPipelineRun.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineRunNode](docs/SwaggyjenkinsPipelineRunNode.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineRunNodeedges](docs/SwaggyjenkinsPipelineRunNodeedges.md)
 - [SwaggyJenkins.SwaggyjenkinsPipelineRunartifacts](docs/SwaggyjenkinsPipelineRunartifacts.md)
 - [SwaggyJenkins.SwaggyjenkinsUser](docs/SwaggyjenkinsUser.md)


## Documentation for Authorization


### jenkins_auth

- **Type**: HTTP basic authentication
