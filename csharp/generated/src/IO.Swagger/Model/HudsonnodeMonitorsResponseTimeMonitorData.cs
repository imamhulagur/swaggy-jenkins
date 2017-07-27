/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;

namespace IO.Swagger.Model
{
    /// <summary>
    /// HudsonnodeMonitorsResponseTimeMonitorData
    /// </summary>
    [DataContract]
    public partial class HudsonnodeMonitorsResponseTimeMonitorData :  IEquatable<HudsonnodeMonitorsResponseTimeMonitorData>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="HudsonnodeMonitorsResponseTimeMonitorData" /> class.
        /// </summary>
        /// <param name="_Class">_Class.</param>
        /// <param name="Timestamp">Timestamp.</param>
        /// <param name="Average">Average.</param>
        public HudsonnodeMonitorsResponseTimeMonitorData(string _Class = default(string), int? Timestamp = default(int?), int? Average = default(int?))
        {
            this._Class = _Class;
            this.Timestamp = Timestamp;
            this.Average = Average;
        }
        
        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }
        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp", EmitDefaultValue=false)]
        public int? Timestamp { get; set; }
        /// <summary>
        /// Gets or Sets Average
        /// </summary>
        [DataMember(Name="average", EmitDefaultValue=false)]
        public int? Average { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonnodeMonitorsResponseTimeMonitorData {\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  Average: ").Append(Average).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as HudsonnodeMonitorsResponseTimeMonitorData);
        }

        /// <summary>
        /// Returns true if HudsonnodeMonitorsResponseTimeMonitorData instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonnodeMonitorsResponseTimeMonitorData to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonnodeMonitorsResponseTimeMonitorData other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this._Class == other._Class ||
                    this._Class != null &&
                    this._Class.Equals(other._Class)
                ) && 
                (
                    this.Timestamp == other.Timestamp ||
                    this.Timestamp != null &&
                    this.Timestamp.Equals(other.Timestamp)
                ) && 
                (
                    this.Average == other.Average ||
                    this.Average != null &&
                    this.Average.Equals(other.Average)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this._Class != null)
                    hash = hash * 59 + this._Class.GetHashCode();
                if (this.Timestamp != null)
                    hash = hash * 59 + this.Timestamp.GetHashCode();
                if (this.Average != null)
                    hash = hash * 59 + this.Average.GetHashCode();
                return hash;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
