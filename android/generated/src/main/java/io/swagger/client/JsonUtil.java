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

package io.swagger.client;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonParseException;
import com.google.gson.reflect.TypeToken;
import java.lang.reflect.Type;
import java.util.List;
import java.util.Date;
import io.swagger.client.model.*;

public class JsonUtil {
  public static GsonBuilder gsonBuilder;

  static {
    gsonBuilder = new GsonBuilder();
    gsonBuilder.serializeNulls();
    gsonBuilder.setDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ");
    gsonBuilder.registerTypeAdapter(Date.class, new JsonDeserializer<Date>() {
      public Date deserialize(JsonElement json, Type typeOfT, JsonDeserializationContext context) throws JsonParseException {
        return new Date(json.getAsJsonPrimitive().getAsLong());
      }
    });
  }

  public static Gson getGson() {
    return gsonBuilder.create();
  }

  public static String serialize(Object obj){
    return getGson().toJson(obj);
  }

  public static <T> T deserializeToList(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getListTypeForDeserialization(cls));
  }

  public static <T> T deserializeToObject(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getTypeForDeserialization(cls));
  }

  public static Type getListTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("GetClassesByClass".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetClassesByClass>>(){}.getType();
    }
    
    if ("GetMultibranchPipeline".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetMultibranchPipeline>>(){}.getType();
    }
    
    if ("GetOrganisations".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetOrganisations>>(){}.getType();
    }
    
    if ("GetPipelineBranches".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetPipelineBranches>>(){}.getType();
    }
    
    if ("GetPipelineBranchesitem".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetPipelineBranchesitem>>(){}.getType();
    }
    
    if ("GetPipelineBranchesitemLatestRun".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetPipelineBranchesitemLatestRun>>(){}.getType();
    }
    
    if ("GetPipelineBranchesitemPullRequest".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetPipelineBranchesitemPullRequest>>(){}.getType();
    }
    
    if ("GetPipelineBranchesitemPullRequestLinks".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetPipelineBranchesitemPullRequestLinks>>(){}.getType();
    }
    
    if ("GetPipelines".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetPipelines>>(){}.getType();
    }
    
    if ("GetUsers".equalsIgnoreCase(className)) {
      return new TypeToken<List<GetUsers>>(){}.getType();
    }
    
    if ("HudsonmodelAllView".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelAllView>>(){}.getType();
    }
    
    if ("HudsonmodelCauseAction".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelCauseAction>>(){}.getType();
    }
    
    if ("HudsonmodelCauseUserIdCause".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelCauseUserIdCause>>(){}.getType();
    }
    
    if ("HudsonmodelComputerSet".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelComputerSet>>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleBuild".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelFreeStyleBuild>>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleProject".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelFreeStyleProject>>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleProjectactions".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelFreeStyleProjectactions>>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleProjecthealthReport".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelFreeStyleProjecthealthReport>>(){}.getType();
    }
    
    if ("HudsonmodelHudson".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelHudson>>(){}.getType();
    }
    
    if ("HudsonmodelHudsonMasterComputer".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelHudsonMasterComputer>>(){}.getType();
    }
    
    if ("HudsonmodelHudsonMasterComputerMonitorData".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelHudsonMasterComputerMonitorData>>(){}.getType();
    }
    
    if ("HudsonmodelHudsonMasterComputerexecutors".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelHudsonMasterComputerexecutors>>(){}.getType();
    }
    
    if ("HudsonmodelHudsonassignedLabels".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelHudsonassignedLabels>>(){}.getType();
    }
    
    if ("HudsonmodelLabel1".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelLabel1>>(){}.getType();
    }
    
    if ("HudsonmodelListView".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelListView>>(){}.getType();
    }
    
    if ("HudsonmodelQueue".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelQueue>>(){}.getType();
    }
    
    if ("HudsonmodelQueueBlockedItem".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelQueueBlockedItem>>(){}.getType();
    }
    
    if ("HudsonmodelQueueLeftItem".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelQueueLeftItem>>(){}.getType();
    }
    
    if ("HudsonmodelStringParameterDefinition".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelStringParameterDefinition>>(){}.getType();
    }
    
    if ("HudsonmodelStringParameterValue".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonmodelStringParameterValue>>(){}.getType();
    }
    
    if ("HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace>>(){}.getType();
    }
    
    if ("HudsonnodeMonitorsResponseTimeMonitorData".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonnodeMonitorsResponseTimeMonitorData>>(){}.getType();
    }
    
    if ("HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2>>(){}.getType();
    }
    
    if ("HudsonscmEmptyChangeLogSet".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonscmEmptyChangeLogSet>>(){}.getType();
    }
    
    if ("HudsonscmNullSCM".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonscmNullSCM>>(){}.getType();
    }
    
    if ("HudsonsecuritycsrfDefaultCrumbIssuer".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonsecuritycsrfDefaultCrumbIssuer>>(){}.getType();
    }
    
    if ("HudsonutilClockDifference".equalsIgnoreCase(className)) {
      return new TypeToken<List<HudsonutilClockDifference>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanresthalLink".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanresthalLink>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanrestimplpipelineBranchImpl".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanrestimplpipelineBranchImpl>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanrestimplpipelineBranchImplPermissions".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanrestimplpipelineBranchImplPermissions>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassImpl".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanserviceembeddedrestExtensionClassImpl>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl>>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestPipelineImpl".equalsIgnoreCase(className)) {
      return new TypeToken<List<IojenkinsblueoceanserviceembeddedrestPipelineImpl>>(){}.getType();
    }
    
    if ("JenkinsmodelUnlabeledLoadStatistics".equalsIgnoreCase(className)) {
      return new TypeToken<List<JenkinsmodelUnlabeledLoadStatistics>>(){}.getType();
    }
    
    if ("SwaggyjenkinsOrganisation".equalsIgnoreCase(className)) {
      return new TypeToken<List<SwaggyjenkinsOrganisation>>(){}.getType();
    }
    
    if ("SwaggyjenkinsPipeline".equalsIgnoreCase(className)) {
      return new TypeToken<List<SwaggyjenkinsPipeline>>(){}.getType();
    }
    
    if ("SwaggyjenkinsPipelineLatestRun".equalsIgnoreCase(className)) {
      return new TypeToken<List<SwaggyjenkinsPipelineLatestRun>>(){}.getType();
    }
    
    if ("SwaggyjenkinsPipelineLatestRunartifacts".equalsIgnoreCase(className)) {
      return new TypeToken<List<SwaggyjenkinsPipelineLatestRunartifacts>>(){}.getType();
    }
    
    if ("SwaggyjenkinsUser".equalsIgnoreCase(className)) {
      return new TypeToken<List<SwaggyjenkinsUser>>(){}.getType();
    }
    
    return new TypeToken<List<Object>>(){}.getType();
  }

  public static Type getTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("GetClassesByClass".equalsIgnoreCase(className)) {
      return new TypeToken<GetClassesByClass>(){}.getType();
    }
    
    if ("GetMultibranchPipeline".equalsIgnoreCase(className)) {
      return new TypeToken<GetMultibranchPipeline>(){}.getType();
    }
    
    if ("GetOrganisations".equalsIgnoreCase(className)) {
      return new TypeToken<GetOrganisations>(){}.getType();
    }
    
    if ("GetPipelineBranches".equalsIgnoreCase(className)) {
      return new TypeToken<GetPipelineBranches>(){}.getType();
    }
    
    if ("GetPipelineBranchesitem".equalsIgnoreCase(className)) {
      return new TypeToken<GetPipelineBranchesitem>(){}.getType();
    }
    
    if ("GetPipelineBranchesitemLatestRun".equalsIgnoreCase(className)) {
      return new TypeToken<GetPipelineBranchesitemLatestRun>(){}.getType();
    }
    
    if ("GetPipelineBranchesitemPullRequest".equalsIgnoreCase(className)) {
      return new TypeToken<GetPipelineBranchesitemPullRequest>(){}.getType();
    }
    
    if ("GetPipelineBranchesitemPullRequestLinks".equalsIgnoreCase(className)) {
      return new TypeToken<GetPipelineBranchesitemPullRequestLinks>(){}.getType();
    }
    
    if ("GetPipelines".equalsIgnoreCase(className)) {
      return new TypeToken<GetPipelines>(){}.getType();
    }
    
    if ("GetUsers".equalsIgnoreCase(className)) {
      return new TypeToken<GetUsers>(){}.getType();
    }
    
    if ("HudsonmodelAllView".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelAllView>(){}.getType();
    }
    
    if ("HudsonmodelCauseAction".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelCauseAction>(){}.getType();
    }
    
    if ("HudsonmodelCauseUserIdCause".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelCauseUserIdCause>(){}.getType();
    }
    
    if ("HudsonmodelComputerSet".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelComputerSet>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleBuild".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelFreeStyleBuild>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleProject".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelFreeStyleProject>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleProjectactions".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelFreeStyleProjectactions>(){}.getType();
    }
    
    if ("HudsonmodelFreeStyleProjecthealthReport".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelFreeStyleProjecthealthReport>(){}.getType();
    }
    
    if ("HudsonmodelHudson".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelHudson>(){}.getType();
    }
    
    if ("HudsonmodelHudsonMasterComputer".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelHudsonMasterComputer>(){}.getType();
    }
    
    if ("HudsonmodelHudsonMasterComputerMonitorData".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelHudsonMasterComputerMonitorData>(){}.getType();
    }
    
    if ("HudsonmodelHudsonMasterComputerexecutors".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelHudsonMasterComputerexecutors>(){}.getType();
    }
    
    if ("HudsonmodelHudsonassignedLabels".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelHudsonassignedLabels>(){}.getType();
    }
    
    if ("HudsonmodelLabel1".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelLabel1>(){}.getType();
    }
    
    if ("HudsonmodelListView".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelListView>(){}.getType();
    }
    
    if ("HudsonmodelQueue".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelQueue>(){}.getType();
    }
    
    if ("HudsonmodelQueueBlockedItem".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelQueueBlockedItem>(){}.getType();
    }
    
    if ("HudsonmodelQueueLeftItem".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelQueueLeftItem>(){}.getType();
    }
    
    if ("HudsonmodelStringParameterDefinition".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelStringParameterDefinition>(){}.getType();
    }
    
    if ("HudsonmodelStringParameterValue".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonmodelStringParameterValue>(){}.getType();
    }
    
    if ("HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace>(){}.getType();
    }
    
    if ("HudsonnodeMonitorsResponseTimeMonitorData".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonnodeMonitorsResponseTimeMonitorData>(){}.getType();
    }
    
    if ("HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2>(){}.getType();
    }
    
    if ("HudsonscmEmptyChangeLogSet".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonscmEmptyChangeLogSet>(){}.getType();
    }
    
    if ("HudsonscmNullSCM".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonscmNullSCM>(){}.getType();
    }
    
    if ("HudsonsecuritycsrfDefaultCrumbIssuer".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonsecuritycsrfDefaultCrumbIssuer>(){}.getType();
    }
    
    if ("HudsonutilClockDifference".equalsIgnoreCase(className)) {
      return new TypeToken<HudsonutilClockDifference>(){}.getType();
    }
    
    if ("IojenkinsblueoceanresthalLink".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanresthalLink>(){}.getType();
    }
    
    if ("IojenkinsblueoceanrestimplpipelineBranchImpl".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanrestimplpipelineBranchImpl>(){}.getType();
    }
    
    if ("IojenkinsblueoceanrestimplpipelineBranchImplPermissions".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanrestimplpipelineBranchImplPermissions>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassImpl".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanserviceembeddedrestExtensionClassImpl>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl>(){}.getType();
    }
    
    if ("IojenkinsblueoceanserviceembeddedrestPipelineImpl".equalsIgnoreCase(className)) {
      return new TypeToken<IojenkinsblueoceanserviceembeddedrestPipelineImpl>(){}.getType();
    }
    
    if ("JenkinsmodelUnlabeledLoadStatistics".equalsIgnoreCase(className)) {
      return new TypeToken<JenkinsmodelUnlabeledLoadStatistics>(){}.getType();
    }
    
    if ("SwaggyjenkinsOrganisation".equalsIgnoreCase(className)) {
      return new TypeToken<SwaggyjenkinsOrganisation>(){}.getType();
    }
    
    if ("SwaggyjenkinsPipeline".equalsIgnoreCase(className)) {
      return new TypeToken<SwaggyjenkinsPipeline>(){}.getType();
    }
    
    if ("SwaggyjenkinsPipelineLatestRun".equalsIgnoreCase(className)) {
      return new TypeToken<SwaggyjenkinsPipelineLatestRun>(){}.getType();
    }
    
    if ("SwaggyjenkinsPipelineLatestRunartifacts".equalsIgnoreCase(className)) {
      return new TypeToken<SwaggyjenkinsPipelineLatestRunartifacts>(){}.getType();
    }
    
    if ("SwaggyjenkinsUser".equalsIgnoreCase(className)) {
      return new TypeToken<SwaggyjenkinsUser>(){}.getType();
    }
    
    return new TypeToken<Object>(){}.getType();
  }

};
