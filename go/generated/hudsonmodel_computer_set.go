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

type HudsonmodelComputerSet struct {

	Class string `json:"_class,omitempty"`

	BusyExecutors int32 `json:"busyExecutors,omitempty"`

	Computer []HudsonmodelHudsonMasterComputer `json:"computer,omitempty"`

	DisplayName string `json:"displayName,omitempty"`

	TotalExecutors int32 `json:"totalExecutors,omitempty"`
}
