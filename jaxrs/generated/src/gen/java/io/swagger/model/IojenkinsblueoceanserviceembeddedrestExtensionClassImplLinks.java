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


package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.IojenkinsblueoceanresthalLink;
import javax.validation.constraints.*;

/**
 * IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaJerseyServerCodegen", date = "2017-07-25T10:45:00.143+10:00")
public class IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks   {
  @JsonProperty("self")
  private IojenkinsblueoceanresthalLink self = null;

  @JsonProperty("_class")
  private String propertyClass = null;

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks self(IojenkinsblueoceanresthalLink self) {
    this.self = self;
    return this;
  }

   /**
   * Get self
   * @return self
  **/
  @JsonProperty("self")
  @ApiModelProperty(value = "")
  public IojenkinsblueoceanresthalLink getSelf() {
    return self;
  }

  public void setSelf(IojenkinsblueoceanresthalLink self) {
    this.self = self;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
  @JsonProperty("_class")
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
    IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks iojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks = (IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks) o;
    return Objects.equals(this.self, iojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks.self) &&
        Objects.equals(this.propertyClass, iojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(self, propertyClass);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks {\n");
    
    sb.append("    self: ").append(toIndentedString(self)).append("\n");
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

