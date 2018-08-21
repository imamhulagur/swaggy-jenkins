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

import java.util.*;
import org.openapitools.client.model.AllView;
import org.openapitools.client.model.FreeStyleProject;
import org.openapitools.client.model.HudsonassignedLabels;
import org.openapitools.client.model.UnlabeledLoadStatistics;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class Hudson {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("assignedLabels")
  private List<HudsonassignedLabels> assignedLabels = null;
  @SerializedName("mode")
  private String mode = null;
  @SerializedName("nodeDescription")
  private String nodeDescription = null;
  @SerializedName("nodeName")
  private String nodeName = null;
  @SerializedName("numExecutors")
  private Integer numExecutors = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("jobs")
  private List<FreeStyleProject> jobs = null;
  @SerializedName("primaryView")
  private AllView primaryView = null;
  @SerializedName("quietingDown")
  private Boolean quietingDown = null;
  @SerializedName("slaveAgentPort")
  private Integer slaveAgentPort = null;
  @SerializedName("unlabeledLoad")
  private UnlabeledLoadStatistics unlabeledLoad = null;
  @SerializedName("useCrumbs")
  private Boolean useCrumbs = null;
  @SerializedName("useSecurity")
  private Boolean useSecurity = null;
  @SerializedName("views")
  private List<AllView> views = null;

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
  public List<HudsonassignedLabels> getAssignedLabels() {
    return assignedLabels;
  }
  public void setAssignedLabels(List<HudsonassignedLabels> assignedLabels) {
    this.assignedLabels = assignedLabels;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getMode() {
    return mode;
  }
  public void setMode(String mode) {
    this.mode = mode;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getNodeDescription() {
    return nodeDescription;
  }
  public void setNodeDescription(String nodeDescription) {
    this.nodeDescription = nodeDescription;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getNodeName() {
    return nodeName;
  }
  public void setNodeName(String nodeName) {
    this.nodeName = nodeName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getNumExecutors() {
    return numExecutors;
  }
  public void setNumExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
  }

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
  public List<FreeStyleProject> getJobs() {
    return jobs;
  }
  public void setJobs(List<FreeStyleProject> jobs) {
    this.jobs = jobs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public AllView getPrimaryView() {
    return primaryView;
  }
  public void setPrimaryView(AllView primaryView) {
    this.primaryView = primaryView;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getQuietingDown() {
    return quietingDown;
  }
  public void setQuietingDown(Boolean quietingDown) {
    this.quietingDown = quietingDown;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getSlaveAgentPort() {
    return slaveAgentPort;
  }
  public void setSlaveAgentPort(Integer slaveAgentPort) {
    this.slaveAgentPort = slaveAgentPort;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public UnlabeledLoadStatistics getUnlabeledLoad() {
    return unlabeledLoad;
  }
  public void setUnlabeledLoad(UnlabeledLoadStatistics unlabeledLoad) {
    this.unlabeledLoad = unlabeledLoad;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUseCrumbs() {
    return useCrumbs;
  }
  public void setUseCrumbs(Boolean useCrumbs) {
    this.useCrumbs = useCrumbs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUseSecurity() {
    return useSecurity;
  }
  public void setUseSecurity(Boolean useSecurity) {
    this.useSecurity = useSecurity;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<AllView> getViews() {
    return views;
  }
  public void setViews(List<AllView> views) {
    this.views = views;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Hudson hudson = (Hudson) o;
    return (this._class == null ? hudson._class == null : this._class.equals(hudson._class)) &&
        (this.assignedLabels == null ? hudson.assignedLabels == null : this.assignedLabels.equals(hudson.assignedLabels)) &&
        (this.mode == null ? hudson.mode == null : this.mode.equals(hudson.mode)) &&
        (this.nodeDescription == null ? hudson.nodeDescription == null : this.nodeDescription.equals(hudson.nodeDescription)) &&
        (this.nodeName == null ? hudson.nodeName == null : this.nodeName.equals(hudson.nodeName)) &&
        (this.numExecutors == null ? hudson.numExecutors == null : this.numExecutors.equals(hudson.numExecutors)) &&
        (this.description == null ? hudson.description == null : this.description.equals(hudson.description)) &&
        (this.jobs == null ? hudson.jobs == null : this.jobs.equals(hudson.jobs)) &&
        (this.primaryView == null ? hudson.primaryView == null : this.primaryView.equals(hudson.primaryView)) &&
        (this.quietingDown == null ? hudson.quietingDown == null : this.quietingDown.equals(hudson.quietingDown)) &&
        (this.slaveAgentPort == null ? hudson.slaveAgentPort == null : this.slaveAgentPort.equals(hudson.slaveAgentPort)) &&
        (this.unlabeledLoad == null ? hudson.unlabeledLoad == null : this.unlabeledLoad.equals(hudson.unlabeledLoad)) &&
        (this.useCrumbs == null ? hudson.useCrumbs == null : this.useCrumbs.equals(hudson.useCrumbs)) &&
        (this.useSecurity == null ? hudson.useSecurity == null : this.useSecurity.equals(hudson.useSecurity)) &&
        (this.views == null ? hudson.views == null : this.views.equals(hudson.views));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.assignedLabels == null ? 0: this.assignedLabels.hashCode());
    result = 31 * result + (this.mode == null ? 0: this.mode.hashCode());
    result = 31 * result + (this.nodeDescription == null ? 0: this.nodeDescription.hashCode());
    result = 31 * result + (this.nodeName == null ? 0: this.nodeName.hashCode());
    result = 31 * result + (this.numExecutors == null ? 0: this.numExecutors.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.jobs == null ? 0: this.jobs.hashCode());
    result = 31 * result + (this.primaryView == null ? 0: this.primaryView.hashCode());
    result = 31 * result + (this.quietingDown == null ? 0: this.quietingDown.hashCode());
    result = 31 * result + (this.slaveAgentPort == null ? 0: this.slaveAgentPort.hashCode());
    result = 31 * result + (this.unlabeledLoad == null ? 0: this.unlabeledLoad.hashCode());
    result = 31 * result + (this.useCrumbs == null ? 0: this.useCrumbs.hashCode());
    result = 31 * result + (this.useSecurity == null ? 0: this.useSecurity.hashCode());
    result = 31 * result + (this.views == null ? 0: this.views.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Hudson {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  assignedLabels: ").append(assignedLabels).append("\n");
    sb.append("  mode: ").append(mode).append("\n");
    sb.append("  nodeDescription: ").append(nodeDescription).append("\n");
    sb.append("  nodeName: ").append(nodeName).append("\n");
    sb.append("  numExecutors: ").append(numExecutors).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  jobs: ").append(jobs).append("\n");
    sb.append("  primaryView: ").append(primaryView).append("\n");
    sb.append("  quietingDown: ").append(quietingDown).append("\n");
    sb.append("  slaveAgentPort: ").append(slaveAgentPort).append("\n");
    sb.append("  unlabeledLoad: ").append(unlabeledLoad).append("\n");
    sb.append("  useCrumbs: ").append(useCrumbs).append("\n");
    sb.append("  useSecurity: ").append(useSecurity).append("\n");
    sb.append("  views: ").append(views).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}