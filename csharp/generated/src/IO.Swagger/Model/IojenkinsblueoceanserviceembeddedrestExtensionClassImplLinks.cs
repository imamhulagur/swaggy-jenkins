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
    /// IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks
    /// </summary>
    [DataContract]
    public partial class IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks :  IEquatable<IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks" /> class.
        /// </summary>
        /// <param name="Self">Self.</param>
        /// <param name="_Class">_Class.</param>
        public IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks(IojenkinsblueoceanresthalLink Self = default(IojenkinsblueoceanresthalLink), string _Class = default(string))
        {
            this.Self = Self;
            this._Class = _Class;
        }
        
        /// <summary>
        /// Gets or Sets Self
        /// </summary>
        [DataMember(Name="self", EmitDefaultValue=false)]
        public IojenkinsblueoceanresthalLink Self { get; set; }
        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks {\n");
            sb.Append("  Self: ").Append(Self).Append("\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
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
            return this.Equals(obj as IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks);
        }

        /// <summary>
        /// Returns true if IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks instances are equal
        /// </summary>
        /// <param name="other">Instance of IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Self == other.Self ||
                    this.Self != null &&
                    this.Self.Equals(other.Self)
                ) && 
                (
                    this._Class == other._Class ||
                    this._Class != null &&
                    this._Class.Equals(other._Class)
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
                if (this.Self != null)
                    hash = hash * 59 + this.Self.GetHashCode();
                if (this._Class != null)
                    hash = hash * 59 + this._Class.GetHashCode();
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
