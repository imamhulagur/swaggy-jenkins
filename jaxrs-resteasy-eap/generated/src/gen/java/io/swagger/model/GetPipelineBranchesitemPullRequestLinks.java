package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.annotations.*;


@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaResteasyEapServerCodegen", date = "2017-07-25T10:45:10.773+10:00")
public class GetPipelineBranchesitemPullRequestLinks   {
  
  private String self = null;
  private String propertyClass = null;

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("self")
  public String getSelf() {
    return self;
  }
  public void setSelf(String self) {
    this.self = self;
  }

  /**
   **/
  
  @ApiModelProperty(value = "")
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GetPipelineBranchesitemPullRequestLinks getPipelineBranchesitemPullRequestLinks = (GetPipelineBranchesitemPullRequestLinks) o;
    return Objects.equals(self, getPipelineBranchesitemPullRequestLinks.self) &&
        Objects.equals(propertyClass, getPipelineBranchesitemPullRequestLinks.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(self, propertyClass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetPipelineBranchesitemPullRequestLinks {\n");
    
    sb.append("    self: ").append(toIndentedString(self)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

