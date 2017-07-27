/**
 * NOTE: This class is auto generated by the akka-scala (beta) swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * For any issue or feedback, please open a ticket via https://github.com/swagger-api/swagger-codegen/issues/new
 */

package io.swagger.client.model

import io.swagger.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class HudsonmodelQueueBlockedItem (
  `class`: Option[String],
  actions: Option[Seq[HudsonmodelCauseAction]],
  blocked: Option[Boolean],
  buildable: Option[Boolean],
  id: Option[Int],
  inQueueSince: Option[Int],
  params: Option[String],
  stuck: Option[Boolean],
  task: Option[HudsonmodelFreeStyleProject],
  url: Option[String],
  why: Option[String],
  buildableStartMilliseconds: Option[Int]
) extends ApiModel


