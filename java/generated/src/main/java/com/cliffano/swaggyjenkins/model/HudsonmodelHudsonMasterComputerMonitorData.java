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
import com.cliffano.swaggyjenkins.model.HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace;
import com.cliffano.swaggyjenkins.model.HudsonnodeMonitorsResponseTimeMonitorData;
import com.cliffano.swaggyjenkins.model.HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2;
import com.cliffano.swaggyjenkins.model.HudsonutilClockDifference;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * HudsonmodelHudsonMasterComputerMonitorData
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-07-25T10:44:17.724+10:00")
public class HudsonmodelHudsonMasterComputerMonitorData {
  @SerializedName("hudson.node_monitors.SwapSpaceMonitor")
  private HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 hudsonNodeMonitorsSwapSpaceMonitor = null;

  @SerializedName("hudson.node_monitors.TemporarySpaceMonitor")
  private HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonNodeMonitorsTemporarySpaceMonitor = null;

  @SerializedName("hudson.node_monitors.DiskSpaceMonitor")
  private HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonNodeMonitorsDiskSpaceMonitor = null;

  @SerializedName("hudson.node_monitors.ArchitectureMonitor")
  private String hudsonNodeMonitorsArchitectureMonitor = null;

  @SerializedName("hudson.node_monitors.ResponseTimeMonitor")
  private HudsonnodeMonitorsResponseTimeMonitorData hudsonNodeMonitorsResponseTimeMonitor = null;

  @SerializedName("hudson.node_monitors.ClockMonitor")
  private HudsonutilClockDifference hudsonNodeMonitorsClockMonitor = null;

  @SerializedName("_class")
  private String propertyClass = null;

  public HudsonmodelHudsonMasterComputerMonitorData hudsonNodeMonitorsSwapSpaceMonitor(HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 hudsonNodeMonitorsSwapSpaceMonitor) {
    this.hudsonNodeMonitorsSwapSpaceMonitor = hudsonNodeMonitorsSwapSpaceMonitor;
    return this;
  }

   /**
   * Get hudsonNodeMonitorsSwapSpaceMonitor
   * @return hudsonNodeMonitorsSwapSpaceMonitor
  **/
  @ApiModelProperty(value = "")
  public HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 getHudsonNodeMonitorsSwapSpaceMonitor() {
    return hudsonNodeMonitorsSwapSpaceMonitor;
  }

  public void setHudsonNodeMonitorsSwapSpaceMonitor(HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 hudsonNodeMonitorsSwapSpaceMonitor) {
    this.hudsonNodeMonitorsSwapSpaceMonitor = hudsonNodeMonitorsSwapSpaceMonitor;
  }

  public HudsonmodelHudsonMasterComputerMonitorData hudsonNodeMonitorsTemporarySpaceMonitor(HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonNodeMonitorsTemporarySpaceMonitor) {
    this.hudsonNodeMonitorsTemporarySpaceMonitor = hudsonNodeMonitorsTemporarySpaceMonitor;
    return this;
  }

   /**
   * Get hudsonNodeMonitorsTemporarySpaceMonitor
   * @return hudsonNodeMonitorsTemporarySpaceMonitor
  **/
  @ApiModelProperty(value = "")
  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace getHudsonNodeMonitorsTemporarySpaceMonitor() {
    return hudsonNodeMonitorsTemporarySpaceMonitor;
  }

  public void setHudsonNodeMonitorsTemporarySpaceMonitor(HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonNodeMonitorsTemporarySpaceMonitor) {
    this.hudsonNodeMonitorsTemporarySpaceMonitor = hudsonNodeMonitorsTemporarySpaceMonitor;
  }

  public HudsonmodelHudsonMasterComputerMonitorData hudsonNodeMonitorsDiskSpaceMonitor(HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonNodeMonitorsDiskSpaceMonitor) {
    this.hudsonNodeMonitorsDiskSpaceMonitor = hudsonNodeMonitorsDiskSpaceMonitor;
    return this;
  }

   /**
   * Get hudsonNodeMonitorsDiskSpaceMonitor
   * @return hudsonNodeMonitorsDiskSpaceMonitor
  **/
  @ApiModelProperty(value = "")
  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace getHudsonNodeMonitorsDiskSpaceMonitor() {
    return hudsonNodeMonitorsDiskSpaceMonitor;
  }

  public void setHudsonNodeMonitorsDiskSpaceMonitor(HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonNodeMonitorsDiskSpaceMonitor) {
    this.hudsonNodeMonitorsDiskSpaceMonitor = hudsonNodeMonitorsDiskSpaceMonitor;
  }

  public HudsonmodelHudsonMasterComputerMonitorData hudsonNodeMonitorsArchitectureMonitor(String hudsonNodeMonitorsArchitectureMonitor) {
    this.hudsonNodeMonitorsArchitectureMonitor = hudsonNodeMonitorsArchitectureMonitor;
    return this;
  }

   /**
   * Get hudsonNodeMonitorsArchitectureMonitor
   * @return hudsonNodeMonitorsArchitectureMonitor
  **/
  @ApiModelProperty(value = "")
  public String getHudsonNodeMonitorsArchitectureMonitor() {
    return hudsonNodeMonitorsArchitectureMonitor;
  }

  public void setHudsonNodeMonitorsArchitectureMonitor(String hudsonNodeMonitorsArchitectureMonitor) {
    this.hudsonNodeMonitorsArchitectureMonitor = hudsonNodeMonitorsArchitectureMonitor;
  }

  public HudsonmodelHudsonMasterComputerMonitorData hudsonNodeMonitorsResponseTimeMonitor(HudsonnodeMonitorsResponseTimeMonitorData hudsonNodeMonitorsResponseTimeMonitor) {
    this.hudsonNodeMonitorsResponseTimeMonitor = hudsonNodeMonitorsResponseTimeMonitor;
    return this;
  }

   /**
   * Get hudsonNodeMonitorsResponseTimeMonitor
   * @return hudsonNodeMonitorsResponseTimeMonitor
  **/
  @ApiModelProperty(value = "")
  public HudsonnodeMonitorsResponseTimeMonitorData getHudsonNodeMonitorsResponseTimeMonitor() {
    return hudsonNodeMonitorsResponseTimeMonitor;
  }

  public void setHudsonNodeMonitorsResponseTimeMonitor(HudsonnodeMonitorsResponseTimeMonitorData hudsonNodeMonitorsResponseTimeMonitor) {
    this.hudsonNodeMonitorsResponseTimeMonitor = hudsonNodeMonitorsResponseTimeMonitor;
  }

  public HudsonmodelHudsonMasterComputerMonitorData hudsonNodeMonitorsClockMonitor(HudsonutilClockDifference hudsonNodeMonitorsClockMonitor) {
    this.hudsonNodeMonitorsClockMonitor = hudsonNodeMonitorsClockMonitor;
    return this;
  }

   /**
   * Get hudsonNodeMonitorsClockMonitor
   * @return hudsonNodeMonitorsClockMonitor
  **/
  @ApiModelProperty(value = "")
  public HudsonutilClockDifference getHudsonNodeMonitorsClockMonitor() {
    return hudsonNodeMonitorsClockMonitor;
  }

  public void setHudsonNodeMonitorsClockMonitor(HudsonutilClockDifference hudsonNodeMonitorsClockMonitor) {
    this.hudsonNodeMonitorsClockMonitor = hudsonNodeMonitorsClockMonitor;
  }

  public HudsonmodelHudsonMasterComputerMonitorData propertyClass(String propertyClass) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelHudsonMasterComputerMonitorData hudsonmodelHudsonMasterComputerMonitorData = (HudsonmodelHudsonMasterComputerMonitorData) o;
    return Objects.equals(this.hudsonNodeMonitorsSwapSpaceMonitor, hudsonmodelHudsonMasterComputerMonitorData.hudsonNodeMonitorsSwapSpaceMonitor) &&
        Objects.equals(this.hudsonNodeMonitorsTemporarySpaceMonitor, hudsonmodelHudsonMasterComputerMonitorData.hudsonNodeMonitorsTemporarySpaceMonitor) &&
        Objects.equals(this.hudsonNodeMonitorsDiskSpaceMonitor, hudsonmodelHudsonMasterComputerMonitorData.hudsonNodeMonitorsDiskSpaceMonitor) &&
        Objects.equals(this.hudsonNodeMonitorsArchitectureMonitor, hudsonmodelHudsonMasterComputerMonitorData.hudsonNodeMonitorsArchitectureMonitor) &&
        Objects.equals(this.hudsonNodeMonitorsResponseTimeMonitor, hudsonmodelHudsonMasterComputerMonitorData.hudsonNodeMonitorsResponseTimeMonitor) &&
        Objects.equals(this.hudsonNodeMonitorsClockMonitor, hudsonmodelHudsonMasterComputerMonitorData.hudsonNodeMonitorsClockMonitor) &&
        Objects.equals(this.propertyClass, hudsonmodelHudsonMasterComputerMonitorData.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(hudsonNodeMonitorsSwapSpaceMonitor, hudsonNodeMonitorsTemporarySpaceMonitor, hudsonNodeMonitorsDiskSpaceMonitor, hudsonNodeMonitorsArchitectureMonitor, hudsonNodeMonitorsResponseTimeMonitor, hudsonNodeMonitorsClockMonitor, propertyClass);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelHudsonMasterComputerMonitorData {\n");
    
    sb.append("    hudsonNodeMonitorsSwapSpaceMonitor: ").append(toIndentedString(hudsonNodeMonitorsSwapSpaceMonitor)).append("\n");
    sb.append("    hudsonNodeMonitorsTemporarySpaceMonitor: ").append(toIndentedString(hudsonNodeMonitorsTemporarySpaceMonitor)).append("\n");
    sb.append("    hudsonNodeMonitorsDiskSpaceMonitor: ").append(toIndentedString(hudsonNodeMonitorsDiskSpaceMonitor)).append("\n");
    sb.append("    hudsonNodeMonitorsArchitectureMonitor: ").append(toIndentedString(hudsonNodeMonitorsArchitectureMonitor)).append("\n");
    sb.append("    hudsonNodeMonitorsResponseTimeMonitor: ").append(toIndentedString(hudsonNodeMonitorsResponseTimeMonitor)).append("\n");
    sb.append("    hudsonNodeMonitorsClockMonitor: ").append(toIndentedString(hudsonNodeMonitorsClockMonitor)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
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

