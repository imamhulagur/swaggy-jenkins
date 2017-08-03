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
    public partial class GetPipelineBranchesitemPullRequest :  IEquatable<GetPipelineBranchesitemPullRequest>
    {

        /// <summary>
        /// Initializes a new instance of the <see cref="GetPipelineBranchesitemPullRequest" /> class.
        /// </summary>
        /// <param name="Links">Links.</param>
        /// <param name="Author">Author.</param>
        /// <param name="Id">Id.</param>
        /// <param name="Title">Title.</param>
        /// <param name="Url">Url.</param>
        /// <param name="Class">Class.</param>
        public GetPipelineBranchesitemPullRequest(GetPipelineBranchesitemPullRequestLinks Links = default(GetPipelineBranchesitemPullRequestLinks), string Author = default(string), string Id = default(string), string Title = default(string), string Url = default(string), string Class = default(string))
        {
            this.Links = Links;
            this.Author = Author;
            this.Id = Id;
            this.Title = Title;
            this.Url = Url;
            this.Class = Class;
            
        }

        /// <summary>
        /// Gets or Sets Links
        /// </summary>
        [DataMember(Name="_links")]
        public GetPipelineBranchesitemPullRequestLinks Links { get; set; }
        /// <summary>
        /// Gets or Sets Author
        /// </summary>
        [DataMember(Name="author")]
        public string Author { get; set; }
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id")]
        public string Id { get; set; }
        /// <summary>
        /// Gets or Sets Title
        /// </summary>
        [DataMember(Name="title")]
        public string Title { get; set; }
        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url")]
        public string Url { get; set; }
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GetPipelineBranchesitemPullRequest {\n");
            sb.Append("  Links: ").Append(Links).Append("\n");
            sb.Append("  Author: ").Append(Author).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
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
            return Equals((GetPipelineBranchesitemPullRequest)obj);
        }

        /// <summary>
        /// Returns true if GetPipelineBranchesitemPullRequest instances are equal
        /// </summary>
        /// <param name="other">Instance of GetPipelineBranchesitemPullRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GetPipelineBranchesitemPullRequest other)
        {

            if (ReferenceEquals(null, other)) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    this.Links == other.Links ||
                    this.Links != null &&
                    this.Links.Equals(other.Links)
                ) && 
                (
                    this.Author == other.Author ||
                    this.Author != null &&
                    this.Author.Equals(other.Author)
                ) && 
                (
                    this.Id == other.Id ||
                    this.Id != null &&
                    this.Id.Equals(other.Id)
                ) && 
                (
                    this.Title == other.Title ||
                    this.Title != null &&
                    this.Title.Equals(other.Title)
                ) && 
                (
                    this.Url == other.Url ||
                    this.Url != null &&
                    this.Url.Equals(other.Url)
                ) && 
                (
                    this.Class == other.Class ||
                    this.Class != null &&
                    this.Class.Equals(other.Class)
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
                    if (this.Links != null)
                    hash = hash * 59 + this.Links.GetHashCode();
                    if (this.Author != null)
                    hash = hash * 59 + this.Author.GetHashCode();
                    if (this.Id != null)
                    hash = hash * 59 + this.Id.GetHashCode();
                    if (this.Title != null)
                    hash = hash * 59 + this.Title.GetHashCode();
                    if (this.Url != null)
                    hash = hash * 59 + this.Url.GetHashCode();
                    if (this.Class != null)
                    hash = hash * 59 + this.Class.GetHashCode();
                return hash;
            }
        }

        #region Operators

        public static bool operator ==(GetPipelineBranchesitemPullRequest left, GetPipelineBranchesitemPullRequest right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(GetPipelineBranchesitemPullRequest left, GetPipelineBranchesitemPullRequest right)
        {
            return !Equals(left, right);
        }

        #endregion Operators

    }
}