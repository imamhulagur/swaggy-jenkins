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

import io.swagger.client.models.HudsonmodelHudsonMasterComputer

/**
* 
* @param _class 
* @param busyExecutors 
* @param computer 
* @param displayName 
* @param totalExecutors 
*/
data class HudsonmodelComputerSet (
  val _class: kotlin.String?,
  val busyExecutors: kotlin.Int?,
  val computer: kotlin.collections.List<HudsonmodelHudsonMasterComputer>?,
  val displayName: kotlin.String?,
  val totalExecutors: kotlin.Int?
)
