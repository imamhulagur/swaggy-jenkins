package apimodels;

import java.util.Objects;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import com.fasterxml.jackson.annotation.*;
/**
 * GetClassesByClass
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-07-25T10:44:57.391+10:00")

public class GetClassesByClass   {
  @JsonProperty("classes")
  private List<String> classes = null;

  @JsonProperty("_class")
  private String propertyClass = null;

  public GetClassesByClass classes(List<String> classes) {
    this.classes = classes;
    return this;
  }

  public GetClassesByClass addClassesItem(String classesItem) {
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
    public List<String> getClasses() {
    return classes;
  }

  public void setClasses(List<String> classes) {
    this.classes = classes;
  }

  public GetClassesByClass propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GetClassesByClass getClassesByClass = (GetClassesByClass) o;
    return Objects.equals(this.classes, getClassesByClass.classes) &&
        Objects.equals(this.propertyClass, getClassesByClass.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(classes, propertyClass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetClassesByClass {\n");
    
    sb.append("    classes: ").append(toIndentedString(classes)).append("\n");
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

