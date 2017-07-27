package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import io.swagger.model.HudsonmodelStringParameterValue;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * HudsonmodelStringParameterDefinition
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.SpringCodegen", date = "2017-07-25T10:46:28.251+10:00")

public class HudsonmodelStringParameterDefinition   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("defaultParameterValue")
  private HudsonmodelStringParameterValue defaultParameterValue = null;

  @JsonProperty("description")
  private String description = null;

  @JsonProperty("name")
  private String name = null;

  @JsonProperty("type")
  private String type = null;

  public HudsonmodelStringParameterDefinition propertyClass(String propertyClass) {
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

  public HudsonmodelStringParameterDefinition defaultParameterValue(HudsonmodelStringParameterValue defaultParameterValue) {
    this.defaultParameterValue = defaultParameterValue;
    return this;
  }

   /**
   * Get defaultParameterValue
   * @return defaultParameterValue
  **/
  @ApiModelProperty(value = "")

  @Valid

  public HudsonmodelStringParameterValue getDefaultParameterValue() {
    return defaultParameterValue;
  }

  public void setDefaultParameterValue(HudsonmodelStringParameterValue defaultParameterValue) {
    this.defaultParameterValue = defaultParameterValue;
  }

  public HudsonmodelStringParameterDefinition description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Get description
   * @return description
  **/
  @ApiModelProperty(value = "")


  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public HudsonmodelStringParameterDefinition name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(value = "")


  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public HudsonmodelStringParameterDefinition type(String type) {
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @ApiModelProperty(value = "")


  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelStringParameterDefinition hudsonmodelStringParameterDefinition = (HudsonmodelStringParameterDefinition) o;
    return Objects.equals(this.propertyClass, hudsonmodelStringParameterDefinition.propertyClass) &&
        Objects.equals(this.defaultParameterValue, hudsonmodelStringParameterDefinition.defaultParameterValue) &&
        Objects.equals(this.description, hudsonmodelStringParameterDefinition.description) &&
        Objects.equals(this.name, hudsonmodelStringParameterDefinition.name) &&
        Objects.equals(this.type, hudsonmodelStringParameterDefinition.type);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, defaultParameterValue, description, name, type);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelStringParameterDefinition {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    defaultParameterValue: ").append(toIndentedString(defaultParameterValue)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
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

