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

import io.swagger.client.models.HudsonmodelHudsonMasterComputer_monitorData
import io.swagger.client.models.HudsonmodelHudsonMasterComputerexecutors
import io.swagger.client.models.HudsonmodelLabel1

/**
* 
* @param _class 
* @param displayName 
* @param executors 
* @param icon 
* @param iconClassName 
* @param idle 
* @param jnlpAgent 
* @param launchSupported 
* @param loadStatistics 
* @param manualLaunchAllowed 
* @param monitorData 
* @param numExecutors 
* @param offline 
* @param offlineCause 
* @param offlineCauseReason 
* @param temporarilyOffline 
*/
data class HudsonmodelHudsonMasterComputer (
  val _class: kotlin.String?,
  val displayName: kotlin.String?,
  val executors: kotlin.collections.List<HudsonmodelHudsonMasterComputerexecutors>?,
  val icon: kotlin.String?,
  val iconClassName: kotlin.String?,
  val idle: kotlin.Boolean?,
  val jnlpAgent: kotlin.Boolean?,
  val launchSupported: kotlin.Boolean?,
  val loadStatistics: HudsonmodelLabel1?,
  val manualLaunchAllowed: kotlin.Boolean?,
  val monitorData: HudsonmodelHudsonMasterComputer_monitorData?,
  val numExecutors: kotlin.Int?,
  val offline: kotlin.Boolean?,
  val offlineCause: kotlin.String?,
  val offlineCauseReason: kotlin.String?,
  val temporarilyOffline: kotlin.Boolean?
)
