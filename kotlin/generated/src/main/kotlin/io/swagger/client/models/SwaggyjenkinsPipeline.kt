/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
package io.swagger.client.models

import io.swagger.client.models.SwaggyjenkinsPipeline_latestRun

/**
* 
* @param _class 
* @param organization 
* @param name 
* @param displayName 
* @param fullName 
* @param weatherScore 
* @param estimatedDurationInMillis 
* @param latestRun 
*/
data class SwaggyjenkinsPipeline (
  val _class: kotlin.String?,
  val organization: kotlin.String?,
  val name: kotlin.String?,
  val displayName: kotlin.String?,
  val fullName: kotlin.String?,
  val weatherScore: kotlin.Int?,
  val estimatedDurationInMillis: kotlin.Int?,
  val latestRun: SwaggyjenkinsPipeline_latestRun?
)
