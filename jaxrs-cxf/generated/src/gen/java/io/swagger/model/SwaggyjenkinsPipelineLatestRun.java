package io.swagger.model;

import io.swagger.model.SwaggyjenkinsPipelineLatestRunartifacts;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;

public class SwaggyjenkinsPipelineLatestRun  {
  
  @ApiModelProperty(value = "")
  private List<SwaggyjenkinsPipelineLatestRunartifacts> artifacts = new ArrayList<SwaggyjenkinsPipelineLatestRunartifacts>();
  @ApiModelProperty(value = "")
  private Integer durationInMillis = null;
  @ApiModelProperty(value = "")
  private Integer estimatedDurationInMillis = null;
  @ApiModelProperty(value = "")
  private String enQueueTime = null;
  @ApiModelProperty(value = "")
  private String endTime = null;
  @ApiModelProperty(value = "")
  private String id = null;
  @ApiModelProperty(value = "")
  private String organization = null;
  @ApiModelProperty(value = "")
  private String pipeline = null;
  @ApiModelProperty(value = "")
  private String result = null;
  @ApiModelProperty(value = "")
  private String runSummary = null;
  @ApiModelProperty(value = "")
  private String startTime = null;
  @ApiModelProperty(value = "")
  private String state = null;
  @ApiModelProperty(value = "")
  private String type = null;
  @ApiModelProperty(value = "")
  private String commitId = null;
  @ApiModelProperty(value = "")
  private String propertyClass = null;

 /**
   * Get artifacts
   * @return artifacts
  **/
  public List<SwaggyjenkinsPipelineLatestRunartifacts> getArtifacts() {
    return artifacts;
  }

  public void setArtifacts(List<SwaggyjenkinsPipelineLatestRunartifacts> artifacts) {
    this.artifacts = artifacts;
  }

  public SwaggyjenkinsPipelineLatestRun artifacts(List<SwaggyjenkinsPipelineLatestRunartifacts> artifacts) {
    this.artifacts = artifacts;
    return this;
  }

  public SwaggyjenkinsPipelineLatestRun addArtifactsItem(SwaggyjenkinsPipelineLatestRunartifacts artifactsItem) {
    this.artifacts.add(artifactsItem);
    return this;
  }

 /**
   * Get durationInMillis
   * @return durationInMillis
  **/
  public Integer getDurationInMillis() {
    return durationInMillis;
  }

  public void setDurationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
  }

  public SwaggyjenkinsPipelineLatestRun durationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
    return this;
  }

 /**
   * Get estimatedDurationInMillis
   * @return estimatedDurationInMillis
  **/
  public Integer getEstimatedDurationInMillis() {
    return estimatedDurationInMillis;
  }

  public void setEstimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
  }

  public SwaggyjenkinsPipelineLatestRun estimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
    return this;
  }

 /**
   * Get enQueueTime
   * @return enQueueTime
  **/
  public String getEnQueueTime() {
    return enQueueTime;
  }

  public void setEnQueueTime(String enQueueTime) {
    this.enQueueTime = enQueueTime;
  }

  public SwaggyjenkinsPipelineLatestRun enQueueTime(String enQueueTime) {
    this.enQueueTime = enQueueTime;
    return this;
  }

 /**
   * Get endTime
   * @return endTime
  **/
  public String getEndTime() {
    return endTime;
  }

  public void setEndTime(String endTime) {
    this.endTime = endTime;
  }

  public SwaggyjenkinsPipelineLatestRun endTime(String endTime) {
    this.endTime = endTime;
    return this;
  }

 /**
   * Get id
   * @return id
  **/
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public SwaggyjenkinsPipelineLatestRun id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Get organization
   * @return organization
  **/
  public String getOrganization() {
    return organization;
  }

  public void setOrganization(String organization) {
    this.organization = organization;
  }

  public SwaggyjenkinsPipelineLatestRun organization(String organization) {
    this.organization = organization;
    return this;
  }

 /**
   * Get pipeline
   * @return pipeline
  **/
  public String getPipeline() {
    return pipeline;
  }

  public void setPipeline(String pipeline) {
    this.pipeline = pipeline;
  }

  public SwaggyjenkinsPipelineLatestRun pipeline(String pipeline) {
    this.pipeline = pipeline;
    return this;
  }

 /**
   * Get result
   * @return result
  **/
  public String getResult() {
    return result;
  }

  public void setResult(String result) {
    this.result = result;
  }

  public SwaggyjenkinsPipelineLatestRun result(String result) {
    this.result = result;
    return this;
  }

 /**
   * Get runSummary
   * @return runSummary
  **/
  public String getRunSummary() {
    return runSummary;
  }

  public void setRunSummary(String runSummary) {
    this.runSummary = runSummary;
  }

  public SwaggyjenkinsPipelineLatestRun runSummary(String runSummary) {
    this.runSummary = runSummary;
    return this;
  }

 /**
   * Get startTime
   * @return startTime
  **/
  public String getStartTime() {
    return startTime;
  }

  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }

  public SwaggyjenkinsPipelineLatestRun startTime(String startTime) {
    this.startTime = startTime;
    return this;
  }

 /**
   * Get state
   * @return state
  **/
  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public SwaggyjenkinsPipelineLatestRun state(String state) {
    this.state = state;
    return this;
  }

 /**
   * Get type
   * @return type
  **/
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public SwaggyjenkinsPipelineLatestRun type(String type) {
    this.type = type;
    return this;
  }

 /**
   * Get commitId
   * @return commitId
  **/
  public String getCommitId() {
    return commitId;
  }

  public void setCommitId(String commitId) {
    this.commitId = commitId;
  }

  public SwaggyjenkinsPipelineLatestRun commitId(String commitId) {
    this.commitId = commitId;
    return this;
  }

 /**
   * Get propertyClass
   * @return propertyClass
  **/
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public SwaggyjenkinsPipelineLatestRun propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SwaggyjenkinsPipelineLatestRun {\n");
    
    sb.append("    artifacts: ").append(toIndentedString(artifacts)).append("\n");
    sb.append("    durationInMillis: ").append(toIndentedString(durationInMillis)).append("\n");
    sb.append("    estimatedDurationInMillis: ").append(toIndentedString(estimatedDurationInMillis)).append("\n");
    sb.append("    enQueueTime: ").append(toIndentedString(enQueueTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    organization: ").append(toIndentedString(organization)).append("\n");
    sb.append("    pipeline: ").append(toIndentedString(pipeline)).append("\n");
    sb.append("    result: ").append(toIndentedString(result)).append("\n");
    sb.append("    runSummary: ").append(toIndentedString(runSummary)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    commitId: ").append(toIndentedString(commitId)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

