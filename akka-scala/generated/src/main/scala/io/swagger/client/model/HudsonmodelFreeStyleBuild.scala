/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class HudsonmodelFreeStyleBuild (
  `class`: Option[String],
  number: Option[Int],
  url: Option[String],
  actions: Option[Seq[HudsonmodelCauseAction]],
  building: Option[Boolean],
  description: Option[String],
  displayName: Option[String],
  duration: Option[Int],
  estimatedDuration: Option[Int],
  executor: Option[String],
  fullDisplayName: Option[String],
  id: Option[String],
  keepLog: Option[Boolean],
  queueId: Option[Int],
  result: Option[String],
  timestamp: Option[Int],
  builtOn: Option[String],
  changeSet: Option[HudsonscmEmptyChangeLogSet]
) extends ApiModel


