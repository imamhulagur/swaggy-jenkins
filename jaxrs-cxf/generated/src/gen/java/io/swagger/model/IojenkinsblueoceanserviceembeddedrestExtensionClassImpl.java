package io.swagger.model;

import io.swagger.model.IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;

public class IojenkinsblueoceanserviceembeddedrestExtensionClassImpl  {
  
  @ApiModelProperty(value = "")
  private String propertyClass = null;
  @ApiModelProperty(value = "")
  private IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks links = null;
  @ApiModelProperty(value = "")
  private List<String> classes = new ArrayList<String>();

 /**
   * Get propertyClass
   * @return propertyClass
  **/
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

 /**
   * Get links
   * @return links
  **/
  public IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks getLinks() {
    return links;
  }

  public void setLinks(IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks links) {
    this.links = links;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl links(IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks links) {
    this.links = links;
    return this;
  }

 /**
   * Get classes
   * @return classes
  **/
  public List<String> getClasses() {
    return classes;
  }

  public void setClasses(List<String> classes) {
    this.classes = classes;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl classes(List<String> classes) {
    this.classes = classes;
    return this;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassImpl addClassesItem(String classesItem) {
    this.classes.add(classesItem);
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

