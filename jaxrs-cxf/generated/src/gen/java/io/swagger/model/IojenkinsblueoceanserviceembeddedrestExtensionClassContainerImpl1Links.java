package io.swagger.model;

import io.swagger.model.IojenkinsblueoceanresthalLink;
import javax.validation.constraints.*;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;

public class IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links  {
  
  @ApiModelProperty(value = "")
  private IojenkinsblueoceanresthalLink self = null;
  @ApiModelProperty(value = "")
  private String propertyClass = null;

 /**
   * Get self
   * @return self
  **/
  public IojenkinsblueoceanresthalLink getSelf() {
    return self;
  }

  public void setSelf(IojenkinsblueoceanresthalLink self) {
    this.self = self;
  }

  public IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links self(IojenkinsblueoceanresthalLink self) {
    this.self = self;
    return this;
  }

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

  public IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links {\n");
    
    sb.append("    self: ").append(toIndentedString(self)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
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

