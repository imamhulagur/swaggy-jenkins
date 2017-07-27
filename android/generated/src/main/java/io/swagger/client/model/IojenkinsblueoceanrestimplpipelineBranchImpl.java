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

package io.swagger.client.model;

import io.swagger.client.model.HudsonmodelStringParameterDefinition;
import io.swagger.client.model.IojenkinsblueoceanrestimplpipelineBranchImplPermissions;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class IojenkinsblueoceanrestimplpipelineBranchImpl {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("displayName")
  private String displayName = null;
  @SerializedName("estimatedDurationInMillis")
  private Integer estimatedDurationInMillis = null;
  @SerializedName("fullDisplayName")
  private String fullDisplayName = null;
  @SerializedName("fullName")
  private String fullName = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("organization")
  private String organization = null;
  @SerializedName("parameters")
  private List<HudsonmodelStringParameterDefinition> parameters = null;
  @SerializedName("permissions")
  private IojenkinsblueoceanrestimplpipelineBranchImplPermissions permissions = null;
  @SerializedName("weatherScore")
  private Integer weatherScore = null;
  @SerializedName("pullRequest")
  private String pullRequest = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getClass() {
    return _class;
  }
  public void setClass(String _class) {
    this._class = _class;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getEstimatedDurationInMillis() {
    return estimatedDurationInMillis;
  }
  public void setEstimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getFullDisplayName() {
    return fullDisplayName;
  }
  public void setFullDisplayName(String fullDisplayName) {
    this.fullDisplayName = fullDisplayName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getFullName() {
    return fullName;
  }
  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getOrganization() {
    return organization;
  }
  public void setOrganization(String organization) {
    this.organization = organization;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelStringParameterDefinition> getParameters() {
    return parameters;
  }
  public void setParameters(List<HudsonmodelStringParameterDefinition> parameters) {
    this.parameters = parameters;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public IojenkinsblueoceanrestimplpipelineBranchImplPermissions getPermissions() {
    return permissions;
  }
  public void setPermissions(IojenkinsblueoceanrestimplpipelineBranchImplPermissions permissions) {
    this.permissions = permissions;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getWeatherScore() {
    return weatherScore;
  }
  public void setWeatherScore(Integer weatherScore) {
    this.weatherScore = weatherScore;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getPullRequest() {
    return pullRequest;
  }
  public void setPullRequest(String pullRequest) {
    this.pullRequest = pullRequest;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IojenkinsblueoceanrestimplpipelineBranchImpl iojenkinsblueoceanrestimplpipelineBranchImpl = (IojenkinsblueoceanrestimplpipelineBranchImpl) o;
    return (this._class == null ? iojenkinsblueoceanrestimplpipelineBranchImpl._class == null : this._class.equals(iojenkinsblueoceanrestimplpipelineBranchImpl._class)) &&
        (this.displayName == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.displayName == null : this.displayName.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.displayName)) &&
        (this.estimatedDurationInMillis == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.estimatedDurationInMillis == null : this.estimatedDurationInMillis.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.estimatedDurationInMillis)) &&
        (this.fullDisplayName == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.fullDisplayName == null : this.fullDisplayName.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.fullDisplayName)) &&
        (this.fullName == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.fullName == null : this.fullName.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.fullName)) &&
        (this.name == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.name == null : this.name.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.name)) &&
        (this.organization == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.organization == null : this.organization.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.organization)) &&
        (this.parameters == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.parameters == null : this.parameters.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.parameters)) &&
        (this.permissions == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.permissions == null : this.permissions.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.permissions)) &&
        (this.weatherScore == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.weatherScore == null : this.weatherScore.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.weatherScore)) &&
        (this.pullRequest == null ? iojenkinsblueoceanrestimplpipelineBranchImpl.pullRequest == null : this.pullRequest.equals(iojenkinsblueoceanrestimplpipelineBranchImpl.pullRequest));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.displayName == null ? 0: this.displayName.hashCode());
    result = 31 * result + (this.estimatedDurationInMillis == null ? 0: this.estimatedDurationInMillis.hashCode());
    result = 31 * result + (this.fullDisplayName == null ? 0: this.fullDisplayName.hashCode());
    result = 31 * result + (this.fullName == null ? 0: this.fullName.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.organization == null ? 0: this.organization.hashCode());
    result = 31 * result + (this.parameters == null ? 0: this.parameters.hashCode());
    result = 31 * result + (this.permissions == null ? 0: this.permissions.hashCode());
    result = 31 * result + (this.weatherScore == null ? 0: this.weatherScore.hashCode());
    result = 31 * result + (this.pullRequest == null ? 0: this.pullRequest.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class IojenkinsblueoceanrestimplpipelineBranchImpl {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  displayName: ").append(displayName).append("\n");
    sb.append("  estimatedDurationInMillis: ").append(estimatedDurationInMillis).append("\n");
    sb.append("  fullDisplayName: ").append(fullDisplayName).append("\n");
    sb.append("  fullName: ").append(fullName).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  organization: ").append(organization).append("\n");
    sb.append("  parameters: ").append(parameters).append("\n");
    sb.append("  permissions: ").append(permissions).append("\n");
    sb.append("  weatherScore: ").append(weatherScore).append("\n");
    sb.append("  pullRequest: ").append(pullRequest).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
