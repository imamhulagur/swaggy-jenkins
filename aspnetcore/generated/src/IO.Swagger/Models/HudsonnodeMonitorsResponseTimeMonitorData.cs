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
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Models
{

    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class HudsonnodeMonitorsResponseTimeMonitorData :  IEquatable<HudsonnodeMonitorsResponseTimeMonitorData>
    {

        /// <summary>
        /// Initializes a new instance of the <see cref="HudsonnodeMonitorsResponseTimeMonitorData" /> class.
        /// </summary>
        /// <param name="Class">Class.</param>
        /// <param name="Timestamp">Timestamp.</param>
        /// <param name="Average">Average.</param>
        public HudsonnodeMonitorsResponseTimeMonitorData(string Class = default(string), int? Timestamp = default(int?), int? Average = default(int?))
        {
            this.Class = Class;
            this.Timestamp = Timestamp;
            this.Average = Average;
            
        }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }
        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp")]
        public int? Timestamp { get; set; }
        /// <summary>
        /// Gets or Sets Average
        /// </summary>
        [DataMember(Name="average")]
        public int? Average { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonnodeMonitorsResponseTimeMonitorData {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
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
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            if (obj.GetType() != GetType()) return false;
            return Equals((HudsonnodeMonitorsResponseTimeMonitorData)obj);
        }

        /// <summary>
        /// Returns true if HudsonnodeMonitorsResponseTimeMonitorData instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonnodeMonitorsResponseTimeMonitorData to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonnodeMonitorsResponseTimeMonitorData other)
        {

            if (ReferenceEquals(null, other)) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    this.Class == other.Class ||
                    this.Class != null &&
                    this.Class.Equals(other.Class)
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
                    if (this.Class != null)
                    hash = hash * 59 + this.Class.GetHashCode();
                    if (this.Timestamp != null)
                    hash = hash * 59 + this.Timestamp.GetHashCode();
                    if (this.Average != null)
                    hash = hash * 59 + this.Average.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(HudsonnodeMonitorsResponseTimeMonitorData left, HudsonnodeMonitorsResponseTimeMonitorData right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(HudsonnodeMonitorsResponseTimeMonitorData left, HudsonnodeMonitorsResponseTimeMonitorData right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}
