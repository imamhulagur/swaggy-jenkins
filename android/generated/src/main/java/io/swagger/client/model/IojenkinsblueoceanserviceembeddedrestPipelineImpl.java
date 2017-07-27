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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class IojenkinsblueoceanserviceembeddedrestPipelineImpl {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("displayName")
  private String displayName = null;
  @SerializedName("estimatedDurationInMillis")
  private Integer estimatedDurationInMillis = null;
  @SerializedName("fullName")
  private String fullName = null;
  @SerializedName("latestRun")
  private String latestRun = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("organization")
  private String organization = null;
  @SerializedName("weatherScore")
  private Integer weatherScore = null;

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
  public String getFullName() {
    return fullName;
  }
  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getLatestRun() {
    return latestRun;
  }
  public void setLatestRun(String latestRun) {
    this.latestRun = latestRun;
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
  public Integer getWeatherScore() {
    return weatherScore;
  }
  public void setWeatherScore(Integer weatherScore) {
    this.weatherScore = weatherScore;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IojenkinsblueoceanserviceembeddedrestPipelineImpl iojenkinsblueoceanserviceembeddedrestPipelineImpl = (IojenkinsblueoceanserviceembeddedrestPipelineImpl) o;
    return (this._class == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl._class == null : this._class.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl._class)) &&
        (this.displayName == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl.displayName == null : this.displayName.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl.displayName)) &&
        (this.estimatedDurationInMillis == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl.estimatedDurationInMillis == null : this.estimatedDurationInMillis.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl.estimatedDurationInMillis)) &&
        (this.fullName == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl.fullName == null : this.fullName.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl.fullName)) &&
        (this.latestRun == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl.latestRun == null : this.latestRun.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl.latestRun)) &&
        (this.name == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl.name == null : this.name.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl.name)) &&
        (this.organization == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl.organization == null : this.organization.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl.organization)) &&
        (this.weatherScore == null ? iojenkinsblueoceanserviceembeddedrestPipelineImpl.weatherScore == null : this.weatherScore.equals(iojenkinsblueoceanserviceembeddedrestPipelineImpl.weatherScore));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.displayName == null ? 0: this.displayName.hashCode());
    result = 31 * result + (this.estimatedDurationInMillis == null ? 0: this.estimatedDurationInMillis.hashCode());
    result = 31 * result + (this.fullName == null ? 0: this.fullName.hashCode());
    result = 31 * result + (this.latestRun == null ? 0: this.latestRun.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.organization == null ? 0: this.organization.hashCode());
    result = 31 * result + (this.weatherScore == null ? 0: this.weatherScore.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class IojenkinsblueoceanserviceembeddedrestPipelineImpl {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  displayName: ").append(displayName).append("\n");
    sb.append("  estimatedDurationInMillis: ").append(estimatedDurationInMillis).append("\n");
    sb.append("  fullName: ").append(fullName).append("\n");
    sb.append("  latestRun: ").append(latestRun).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  organization: ").append(organization).append("\n");
    sb.append("  weatherScore: ").append(weatherScore).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
