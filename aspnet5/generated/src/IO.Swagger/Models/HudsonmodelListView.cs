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
    public partial class HudsonmodelListView :  IEquatable<HudsonmodelListView>
    {

        /// <summary>
        /// Initializes a new instance of the <see cref="HudsonmodelListView" /> class.
        /// </summary>
        /// <param name="Class">Class.</param>
        /// <param name="Description">Description.</param>
        /// <param name="Jobs">Jobs.</param>
        /// <param name="Name">Name.</param>
        /// <param name="Url">Url.</param>
        public HudsonmodelListView(string Class = default(string), string Description = default(string), List<HudsonmodelFreeStyleProject> Jobs = default(List<HudsonmodelFreeStyleProject>), string Name = default(string), string Url = default(string))
        {
            this.Class = Class;
            this.Description = Description;
            this.Jobs = Jobs;
            this.Name = Name;
            this.Url = Url;
            
        }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }
        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description")]
        public string Description { get; set; }
        /// <summary>
        /// Gets or Sets Jobs
        /// </summary>
        [DataMember(Name="jobs")]
        public List<HudsonmodelFreeStyleProject> Jobs { get; set; }
        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name")]
        public string Name { get; set; }
        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url")]
        public string Url { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonmodelListView {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Jobs: ").Append(Jobs).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
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
            return Equals((HudsonmodelListView)obj);
        }

        /// <summary>
        /// Returns true if HudsonmodelListView instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonmodelListView to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonmodelListView other)
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
                    this.Description == other.Description ||
                    this.Description != null &&
                    this.Description.Equals(other.Description)
                ) && 
                (
                    this.Jobs == other.Jobs ||
                    this.Jobs != null &&
                    this.Jobs.SequenceEqual(other.Jobs)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Url == other.Url ||
                    this.Url != null &&
                    this.Url.Equals(other.Url)
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
                    if (this.Description != null)
                    hash = hash * 59 + this.Description.GetHashCode();
                    if (this.Jobs != null)
                    hash = hash * 59 + this.Jobs.GetHashCode();
                    if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                    if (this.Url != null)
                    hash = hash * 59 + this.Url.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(HudsonmodelListView left, HudsonmodelListView right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(HudsonmodelListView left, HudsonmodelListView right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}
