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

type GetPipelineBranchesitemPullRequest struct {

	Links GetPipelineBranchesitemPullRequestLinks `json:"_links,omitempty"`

	Author string `json:"author,omitempty"`

	Id string `json:"id,omitempty"`

	Title string `json:"title,omitempty"`

	Url string `json:"url,omitempty"`

	Class string `json:"_class,omitempty"`
}
