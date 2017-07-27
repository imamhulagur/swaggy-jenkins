package apimodels;

import java.util.Objects;
import javax.validation.constraints.*;
import com.fasterxml.jackson.annotation.*;
/**
 * HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-07-25T10:44:57.391+10:00")

public class HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("timestamp")
  private Integer timestamp = null;

  @JsonProperty("path")
  private String path = null;

  @JsonProperty("size")
  private Integer size = null;

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace propertyClass(String propertyClass) {
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

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace timestamp(Integer timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
    public Integer getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(Integer timestamp) {
    this.timestamp = timestamp;
  }

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace path(String path) {
    this.path = path;
    return this;
  }

   /**
   * Get path
   * @return path
  **/
    public String getPath() {
    return path;
  }

  public void setPath(String path) {
    this.path = path;
  }

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace size(Integer size) {
    this.size = size;
    return this;
  }

   /**
   * Get size
   * @return size
  **/
    public Integer getSize() {
    return size;
  }

  public void setSize(Integer size) {
    this.size = size;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace = (HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace) o;
    return Objects.equals(this.propertyClass, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.propertyClass) &&
        Objects.equals(this.timestamp, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.timestamp) &&
        Objects.equals(this.path, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.path) &&
        Objects.equals(this.size, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.size);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, timestamp, path, size);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    path: ").append(toIndentedString(path)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
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

