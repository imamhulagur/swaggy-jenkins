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
    public partial class HudsonutilClockDifference :  IEquatable<HudsonutilClockDifference>
    {

        /// <summary>
        /// Initializes a new instance of the <see cref="HudsonutilClockDifference" /> class.
        /// </summary>
        /// <param name="Class">Class.</param>
        /// <param name="Diff">Diff.</param>
        public HudsonutilClockDifference(string Class = default(string), int? Diff = default(int?))
        {
            this.Class = Class;
            this.Diff = Diff;
            
        }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }
        /// <summary>
        /// Gets or Sets Diff
        /// </summary>
        [DataMember(Name="diff")]
        public int? Diff { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonutilClockDifference {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Diff: ").Append(Diff).Append("\n");
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
            return Equals((HudsonutilClockDifference)obj);
        }

        /// <summary>
        /// Returns true if HudsonutilClockDifference instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonutilClockDifference to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonutilClockDifference other)
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
                    this.Diff == other.Diff ||
                    this.Diff != null &&
                    this.Diff.Equals(other.Diff)
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
                    if (this.Diff != null)
                    hash = hash * 59 + this.Diff.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(HudsonutilClockDifference left, HudsonutilClockDifference right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(HudsonutilClockDifference left, HudsonutilClockDifference right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}
