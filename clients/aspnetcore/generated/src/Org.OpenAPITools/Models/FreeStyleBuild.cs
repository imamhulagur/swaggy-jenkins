/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class FreeStyleBuild : IEquatable<FreeStyleBuild>
    { 
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets Number
        /// </summary>
        [DataMember(Name="number")]
        public int? Number { get; set; }

        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url")]
        public string Url { get; set; }

        /// <summary>
        /// Gets or Sets Actions
        /// </summary>
        [DataMember(Name="actions")]
        public List<CauseAction> Actions { get; set; }

        /// <summary>
        /// Gets or Sets Building
        /// </summary>
        [DataMember(Name="building")]
        public bool? Building { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description")]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets DisplayName
        /// </summary>
        [DataMember(Name="displayName")]
        public string DisplayName { get; set; }

        /// <summary>
        /// Gets or Sets Duration
        /// </summary>
        [DataMember(Name="duration")]
        public int? Duration { get; set; }

        /// <summary>
        /// Gets or Sets EstimatedDuration
        /// </summary>
        [DataMember(Name="estimatedDuration")]
        public int? EstimatedDuration { get; set; }

        /// <summary>
        /// Gets or Sets Executor
        /// </summary>
        [DataMember(Name="executor")]
        public string Executor { get; set; }

        /// <summary>
        /// Gets or Sets FullDisplayName
        /// </summary>
        [DataMember(Name="fullDisplayName")]
        public string FullDisplayName { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id")]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets KeepLog
        /// </summary>
        [DataMember(Name="keepLog")]
        public bool? KeepLog { get; set; }

        /// <summary>
        /// Gets or Sets QueueId
        /// </summary>
        [DataMember(Name="queueId")]
        public int? QueueId { get; set; }

        /// <summary>
        /// Gets or Sets Result
        /// </summary>
        [DataMember(Name="result")]
        public string Result { get; set; }

        /// <summary>
        /// Gets or Sets Timestamp
        /// </summary>
        [DataMember(Name="timestamp")]
        public int? Timestamp { get; set; }

        /// <summary>
        /// Gets or Sets BuiltOn
        /// </summary>
        [DataMember(Name="builtOn")]
        public string BuiltOn { get; set; }

        /// <summary>
        /// Gets or Sets ChangeSet
        /// </summary>
        [DataMember(Name="changeSet")]
        public EmptyChangeLogSet ChangeSet { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class FreeStyleBuild {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Number: ").Append(Number).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  Building: ").Append(Building).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  Duration: ").Append(Duration).Append("\n");
            sb.Append("  EstimatedDuration: ").Append(EstimatedDuration).Append("\n");
            sb.Append("  Executor: ").Append(Executor).Append("\n");
            sb.Append("  FullDisplayName: ").Append(FullDisplayName).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  KeepLog: ").Append(KeepLog).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  Result: ").Append(Result).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  BuiltOn: ").Append(BuiltOn).Append("\n");
            sb.Append("  ChangeSet: ").Append(ChangeSet).Append("\n");
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
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((FreeStyleBuild)obj);
        }

        /// <summary>
        /// Returns true if FreeStyleBuild instances are equal
        /// </summary>
        /// <param name="other">Instance of FreeStyleBuild to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(FreeStyleBuild other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Class == other.Class ||
                    Class != null &&
                    Class.Equals(other.Class)
                ) && 
                (
                    Number == other.Number ||
                    Number != null &&
                    Number.Equals(other.Number)
                ) && 
                (
                    Url == other.Url ||
                    Url != null &&
                    Url.Equals(other.Url)
                ) && 
                (
                    Actions == other.Actions ||
                    Actions != null &&
                    Actions.SequenceEqual(other.Actions)
                ) && 
                (
                    Building == other.Building ||
                    Building != null &&
                    Building.Equals(other.Building)
                ) && 
                (
                    Description == other.Description ||
                    Description != null &&
                    Description.Equals(other.Description)
                ) && 
                (
                    DisplayName == other.DisplayName ||
                    DisplayName != null &&
                    DisplayName.Equals(other.DisplayName)
                ) && 
                (
                    Duration == other.Duration ||
                    Duration != null &&
                    Duration.Equals(other.Duration)
                ) && 
                (
                    EstimatedDuration == other.EstimatedDuration ||
                    EstimatedDuration != null &&
                    EstimatedDuration.Equals(other.EstimatedDuration)
                ) && 
                (
                    Executor == other.Executor ||
                    Executor != null &&
                    Executor.Equals(other.Executor)
                ) && 
                (
                    FullDisplayName == other.FullDisplayName ||
                    FullDisplayName != null &&
                    FullDisplayName.Equals(other.FullDisplayName)
                ) && 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    KeepLog == other.KeepLog ||
                    KeepLog != null &&
                    KeepLog.Equals(other.KeepLog)
                ) && 
                (
                    QueueId == other.QueueId ||
                    QueueId != null &&
                    QueueId.Equals(other.QueueId)
                ) && 
                (
                    Result == other.Result ||
                    Result != null &&
                    Result.Equals(other.Result)
                ) && 
                (
                    Timestamp == other.Timestamp ||
                    Timestamp != null &&
                    Timestamp.Equals(other.Timestamp)
                ) && 
                (
                    BuiltOn == other.BuiltOn ||
                    BuiltOn != null &&
                    BuiltOn.Equals(other.BuiltOn)
                ) && 
                (
                    ChangeSet == other.ChangeSet ||
                    ChangeSet != null &&
                    ChangeSet.Equals(other.ChangeSet)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Class != null)
                    hashCode = hashCode * 59 + Class.GetHashCode();
                    if (Number != null)
                    hashCode = hashCode * 59 + Number.GetHashCode();
                    if (Url != null)
                    hashCode = hashCode * 59 + Url.GetHashCode();
                    if (Actions != null)
                    hashCode = hashCode * 59 + Actions.GetHashCode();
                    if (Building != null)
                    hashCode = hashCode * 59 + Building.GetHashCode();
                    if (Description != null)
                    hashCode = hashCode * 59 + Description.GetHashCode();
                    if (DisplayName != null)
                    hashCode = hashCode * 59 + DisplayName.GetHashCode();
                    if (Duration != null)
                    hashCode = hashCode * 59 + Duration.GetHashCode();
                    if (EstimatedDuration != null)
                    hashCode = hashCode * 59 + EstimatedDuration.GetHashCode();
                    if (Executor != null)
                    hashCode = hashCode * 59 + Executor.GetHashCode();
                    if (FullDisplayName != null)
                    hashCode = hashCode * 59 + FullDisplayName.GetHashCode();
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    if (KeepLog != null)
                    hashCode = hashCode * 59 + KeepLog.GetHashCode();
                    if (QueueId != null)
                    hashCode = hashCode * 59 + QueueId.GetHashCode();
                    if (Result != null)
                    hashCode = hashCode * 59 + Result.GetHashCode();
                    if (Timestamp != null)
                    hashCode = hashCode * 59 + Timestamp.GetHashCode();
                    if (BuiltOn != null)
                    hashCode = hashCode * 59 + BuiltOn.GetHashCode();
                    if (ChangeSet != null)
                    hashCode = hashCode * 59 + ChangeSet.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(FreeStyleBuild left, FreeStyleBuild right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(FreeStyleBuild left, FreeStyleBuild right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}