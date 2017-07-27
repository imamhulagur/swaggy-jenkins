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
import com.cliffano.swaggyjenkins.model.IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;

/**
 * IojenkinsblueoceanserviceembeddedrestExtensionClassImpl
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-07-25T10:44:17.724+10:00")
public class IojenkinsblueoceanserviceembeddedrestExtensionClassImpl {
  @SerializedName("_class")
  private String propertyClass = null;

  @SerializedName("_links")
  private IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks links = null;

  @SerializedName("classes")
  private List<String> classes = null;

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl propertyClass(String propertyClass) {
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

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl links(IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks links) {
    this.links = links;
    return this;
  }

   /**
   * Get links
   * @return links
  **/
  @ApiModelProperty(value = "")
  public IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks getLinks() {
    return links;
  }

  public void setLinks(IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks links) {
    this.links = links;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl classes(List<String> classes) {
    this.classes = classes;
    return this;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl addClassesItem(String classesItem) {
    if (this.classes == null) {
      this.classes = new ArrayList<String>();
    }
    this.classes.add(classesItem);
    return this;
  }

   /**
   * Get classes
   * @return classes
  **/
  @ApiModelProperty(value = "")
  public List<String> getClasses() {
    return classes;
  }

  public void setClasses(List<String> classes) {
    this.classes = classes;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IojenkinsblueoceanserviceembeddedrestExtensionClassImpl iojenkinsblueoceanserviceembeddedrestExtensionClassImpl = (IojenkinsblueoceanserviceembeddedrestExtensionClassImpl) o;
    return Objects.equals(this.propertyClass, iojenkinsblueoceanserviceembeddedrestExtensionClassImpl.propertyClass) &&
        Objects.equals(this.links, iojenkinsblueoceanserviceembeddedrestExtensionClassImpl.links) &&
        Objects.equals(this.classes, iojenkinsblueoceanserviceembeddedrestExtensionClassImpl.classes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, links, classes);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IojenkinsblueoceanserviceembeddedrestExtensionClassImpl {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    classes: ").append(toIndentedString(classes)).append("\n");
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

