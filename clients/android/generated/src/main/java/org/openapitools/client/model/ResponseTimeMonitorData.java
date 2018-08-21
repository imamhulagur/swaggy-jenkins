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

package org.openapitools.client.model;

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseTimeMonitorData {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("timestamp")
  private Integer timestamp = null;
  @SerializedName("average")
  private Integer average = null;

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
  public Integer getTimestamp() {
    return timestamp;
  }
  public void setTimestamp(Integer timestamp) {
    this.timestamp = timestamp;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getAverage() {
    return average;
  }
  public void setAverage(Integer average) {
    this.average = average;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeMonitorData responseTimeMonitorData = (ResponseTimeMonitorData) o;
    return (this._class == null ? responseTimeMonitorData._class == null : this._class.equals(responseTimeMonitorData._class)) &&
        (this.timestamp == null ? responseTimeMonitorData.timestamp == null : this.timestamp.equals(responseTimeMonitorData.timestamp)) &&
        (this.average == null ? responseTimeMonitorData.average == null : this.average.equals(responseTimeMonitorData.average));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.timestamp == null ? 0: this.timestamp.hashCode());
    result = 31 * result + (this.average == null ? 0: this.average.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeMonitorData {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  timestamp: ").append(timestamp).append("\n");
    sb.append("  average: ").append(average).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}