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
public class HudsonmodelFreeStyleProjecthealthReport {
  
  @SerializedName("description")
  private String description = null;
  @SerializedName("iconClassName")
  private String iconClassName = null;
  @SerializedName("iconUrl")
  private String iconUrl = null;
  @SerializedName("score")
  private Integer score = null;
  @SerializedName("_class")
  private String _class = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getIconClassName() {
    return iconClassName;
  }
  public void setIconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getIconUrl() {
    return iconUrl;
  }
  public void setIconUrl(String iconUrl) {
    this.iconUrl = iconUrl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getScore() {
    return score;
  }
  public void setScore(Integer score) {
    this.score = score;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getClass() {
    return _class;
  }
  public void setClass(String _class) {
    this._class = _class;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelFreeStyleProjecthealthReport hudsonmodelFreeStyleProjecthealthReport = (HudsonmodelFreeStyleProjecthealthReport) o;
    return (this.description == null ? hudsonmodelFreeStyleProjecthealthReport.description == null : this.description.equals(hudsonmodelFreeStyleProjecthealthReport.description)) &&
        (this.iconClassName == null ? hudsonmodelFreeStyleProjecthealthReport.iconClassName == null : this.iconClassName.equals(hudsonmodelFreeStyleProjecthealthReport.iconClassName)) &&
        (this.iconUrl == null ? hudsonmodelFreeStyleProjecthealthReport.iconUrl == null : this.iconUrl.equals(hudsonmodelFreeStyleProjecthealthReport.iconUrl)) &&
        (this.score == null ? hudsonmodelFreeStyleProjecthealthReport.score == null : this.score.equals(hudsonmodelFreeStyleProjecthealthReport.score)) &&
        (this._class == null ? hudsonmodelFreeStyleProjecthealthReport._class == null : this._class.equals(hudsonmodelFreeStyleProjecthealthReport._class));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.iconClassName == null ? 0: this.iconClassName.hashCode());
    result = 31 * result + (this.iconUrl == null ? 0: this.iconUrl.hashCode());
    result = 31 * result + (this.score == null ? 0: this.score.hashCode());
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelFreeStyleProjecthealthReport {\n");
    
    sb.append("  description: ").append(description).append("\n");
    sb.append("  iconClassName: ").append(iconClassName).append("\n");
    sb.append("  iconUrl: ").append(iconUrl).append("\n");
    sb.append("  score: ").append(score).append("\n");
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
