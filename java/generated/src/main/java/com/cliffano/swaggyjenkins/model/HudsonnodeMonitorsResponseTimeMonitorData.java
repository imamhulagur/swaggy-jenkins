/*
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


package com.cliffano.swaggyjenkins.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * HudsonnodeMonitorsResponseTimeMonitorData
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-07-25T10:44:17.724+10:00")
public class HudsonnodeMonitorsResponseTimeMonitorData {
  @SerializedName("_class")
  private String propertyClass = null;

  @SerializedName("timestamp")
  private Integer timestamp = null;

  @SerializedName("average")
  private Integer average = null;

  public HudsonnodeMonitorsResponseTimeMonitorData propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
  @ApiModelProperty(value = "")
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public HudsonnodeMonitorsResponseTimeMonitorData timestamp(Integer timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(value = "")
  public Integer getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(Integer timestamp) {
    this.timestamp = timestamp;
  }

  public HudsonnodeMonitorsResponseTimeMonitorData average(Integer average) {
    this.average = average;
    return this;
  }

   /**
   * Get average
   * @return average
  **/
  @ApiModelProperty(value = "")
  public Integer getAverage() {
    return average;
  }

  public void setAverage(Integer average) {
    this.average = average;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonnodeMonitorsResponseTimeMonitorData hudsonnodeMonitorsResponseTimeMonitorData = (HudsonnodeMonitorsResponseTimeMonitorData) o;
    return Objects.equals(this.propertyClass, hudsonnodeMonitorsResponseTimeMonitorData.propertyClass) &&
        Objects.equals(this.timestamp, hudsonnodeMonitorsResponseTimeMonitorData.timestamp) &&
        Objects.equals(this.average, hudsonnodeMonitorsResponseTimeMonitorData.average);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, timestamp, average);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonnodeMonitorsResponseTimeMonitorData {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    average: ").append(toIndentedString(average)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
  
}

