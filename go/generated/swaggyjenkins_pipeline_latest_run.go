/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package swagger

type SwaggyjenkinsPipelineLatestRun struct {

	Artifacts []SwaggyjenkinsPipelineLatestRunartifacts `json:"artifacts,omitempty"`

	DurationInMillis int32 `json:"durationInMillis,omitempty"`

	EstimatedDurationInMillis int32 `json:"estimatedDurationInMillis,omitempty"`

	EnQueueTime string `json:"enQueueTime,omitempty"`

	EndTime string `json:"endTime,omitempty"`

	Id string `json:"id,omitempty"`

	Organization string `json:"organization,omitempty"`

	Pipeline string `json:"pipeline,omitempty"`

	Result string `json:"result,omitempty"`

	RunSummary string `json:"runSummary,omitempty"`

	StartTime string `json:"startTime,omitempty"`

	State string `json:"state,omitempty"`

	Type_ string `json:"type,omitempty"`

	CommitId string `json:"commitId,omitempty"`

	Class string `json:"_class,omitempty"`
}
