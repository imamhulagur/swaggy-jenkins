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
    public partial class HudsonmodelStringParameterDefinition :  IEquatable<HudsonmodelStringParameterDefinition>
    {

        /// <summary>
        /// Initializes a new instance of the <see cref="HudsonmodelStringParameterDefinition" /> class.
        /// </summary>
        /// <param name="Class">Class.</param>
        /// <param name="DefaultParameterValue">DefaultParameterValue.</param>
        /// <param name="Description">Description.</param>
        /// <param name="Name">Name.</param>
        /// <param name="Type">Type.</param>
        public HudsonmodelStringParameterDefinition(string Class = default(string), HudsonmodelStringParameterValue DefaultParameterValue = default(HudsonmodelStringParameterValue), string Description = default(string), string Name = default(string), string Type = default(string))
        {
            this.Class = Class;
            this.DefaultParameterValue = DefaultParameterValue;
            this.Description = Description;
            this.Name = Name;
            this.Type = Type;
            
        }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }
        /// <summary>
        /// Gets or Sets DefaultParameterValue
        /// </summary>
        [DataMember(Name="defaultParameterValue")]
        public HudsonmodelStringParameterValue DefaultParameterValue { get; set; }
        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description")]
        public string Description { get; set; }
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name")]
        public string Name { get; set; }
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type")]
        public string Type { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonmodelStringParameterDefinition {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  DefaultParameterValue: ").Append(DefaultParameterValue).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
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
            return Equals((HudsonmodelStringParameterDefinition)obj);
        }

        /// <summary>
        /// Returns true if HudsonmodelStringParameterDefinition instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonmodelStringParameterDefinition to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonmodelStringParameterDefinition other)
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
                    this.DefaultParameterValue == other.DefaultParameterValue ||
                    this.DefaultParameterValue != null &&
                    this.DefaultParameterValue.Equals(other.DefaultParameterValue)
                ) && 
                (
                    this.Description == other.Description ||
                    this.Description != null &&
                    this.Description.Equals(other.Description)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Type == other.Type ||
                    this.Type != null &&
                    this.Type.Equals(other.Type)
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
                    if (this.DefaultParameterValue != null)
                    hash = hash * 59 + this.DefaultParameterValue.GetHashCode();
                    if (this.Description != null)
                    hash = hash * 59 + this.Description.GetHashCode();
                    if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                    if (this.Type != null)
                    hash = hash * 59 + this.Type.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(HudsonmodelStringParameterDefinition left, HudsonmodelStringParameterDefinition right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(HudsonmodelStringParameterDefinition left, HudsonmodelStringParameterDefinition right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}
