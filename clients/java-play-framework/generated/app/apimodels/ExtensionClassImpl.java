package apimodels;

import java.util.Objects;
import apimodels.ExtensionClassImpllinks;
import java.util.ArrayList;
import java.util.List;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import javax.validation.constraints.*;
/**
 * ExtensionClassImpl
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-08-03T23:33:33.060Z")

public class ExtensionClassImpl   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("_links")
  private ExtensionClassImpllinks links = null;

  @JsonProperty("classes")
  private List<String> classes = null;

  public ExtensionClassImpl propertyClass(String propertyClass) {
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

  public ExtensionClassImpl links(ExtensionClassImpllinks links) {
    this.links = links;
    return this;
  }

   /**
   * Get links
   * @return links
  **/
  @Valid
  public ExtensionClassImpllinks getLinks() {
    return links;
  }

  public void setLinks(ExtensionClassImpllinks links) {
    this.links = links;
  }

  public ExtensionClassImpl classes(List<String> classes) {
    this.classes = classes;
    return this;
  }

  public ExtensionClassImpl addClassesItem(String classesItem) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ExtensionClassImpl extensionClassImpl = (ExtensionClassImpl) o;
    return Objects.equals(this.propertyClass, extensionClassImpl.propertyClass) &&
        Objects.equals(this.links, extensionClassImpl.links) &&
        Objects.equals(this.classes, extensionClassImpl.classes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, links, classes);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ExtensionClassImpl {\n");
    
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

  public void validate() {
    ValidatorFactory factory = Validation.buildDefaultValidatorFactory();
    Validator validator = factory.getValidator();
    Set<ConstraintViolation<ExtensionClassImpl>> constraintViolations = validator.validate(this);
    if (constraintViolations.size() > 0) {
      StringBuilder errors = new StringBuilder();
      for (ConstraintViolation<ExtensionClassImpl> contraintes : constraintViolations) {
        errors.append(String.format("%s.%s %s\n",
            contraintes.getRootBeanClass().getSimpleName(),
            contraintes.getPropertyPath(),
            contraintes.getMessage()));
      }
      throw new RuntimeException("Bean validation : " + errors);
    }
  }
}
