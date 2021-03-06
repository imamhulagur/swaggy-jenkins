/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct FreeStyleBuild {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "number")]
  number: Option<i32>,
  #[serde(rename = "url")]
  url: Option<String>,
  #[serde(rename = "actions")]
  actions: Option<Vec<::models::CauseAction>>,
  #[serde(rename = "building")]
  building: Option<bool>,
  #[serde(rename = "description")]
  description: Option<String>,
  #[serde(rename = "displayName")]
  display_name: Option<String>,
  #[serde(rename = "duration")]
  duration: Option<i32>,
  #[serde(rename = "estimatedDuration")]
  estimated_duration: Option<i32>,
  #[serde(rename = "executor")]
  executor: Option<String>,
  #[serde(rename = "fullDisplayName")]
  full_display_name: Option<String>,
  #[serde(rename = "id")]
  id: Option<String>,
  #[serde(rename = "keepLog")]
  keep_log: Option<bool>,
  #[serde(rename = "queueId")]
  queue_id: Option<i32>,
  #[serde(rename = "result")]
  result: Option<String>,
  #[serde(rename = "timestamp")]
  timestamp: Option<i32>,
  #[serde(rename = "builtOn")]
  built_on: Option<String>,
  #[serde(rename = "changeSet")]
  change_set: Option<::models::EmptyChangeLogSet>
}

impl FreeStyleBuild {
  pub fn new() -> FreeStyleBuild {
    FreeStyleBuild {
      _class: None,
      number: None,
      url: None,
      actions: None,
      building: None,
      description: None,
      display_name: None,
      duration: None,
      estimated_duration: None,
      executor: None,
      full_display_name: None,
      id: None,
      keep_log: None,
      queue_id: None,
      result: None,
      timestamp: None,
      built_on: None,
      change_set: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> FreeStyleBuild {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_number(&mut self, number: i32) {
    self.number = Some(number);
  }

  pub fn with_number(mut self, number: i32) -> FreeStyleBuild {
    self.number = Some(number);
    self
  }

  pub fn number(&self) -> Option<&i32> {
    self.number.as_ref()
  }

  pub fn reset_number(&mut self) {
    self.number = None;
  }

  pub fn set_url(&mut self, url: String) {
    self.url = Some(url);
  }

  pub fn with_url(mut self, url: String) -> FreeStyleBuild {
    self.url = Some(url);
    self
  }

  pub fn url(&self) -> Option<&String> {
    self.url.as_ref()
  }

  pub fn reset_url(&mut self) {
    self.url = None;
  }

  pub fn set_actions(&mut self, actions: Vec<::models::CauseAction>) {
    self.actions = Some(actions);
  }

  pub fn with_actions(mut self, actions: Vec<::models::CauseAction>) -> FreeStyleBuild {
    self.actions = Some(actions);
    self
  }

  pub fn actions(&self) -> Option<&Vec<::models::CauseAction>> {
    self.actions.as_ref()
  }

  pub fn reset_actions(&mut self) {
    self.actions = None;
  }

  pub fn set_building(&mut self, building: bool) {
    self.building = Some(building);
  }

  pub fn with_building(mut self, building: bool) -> FreeStyleBuild {
    self.building = Some(building);
    self
  }

  pub fn building(&self) -> Option<&bool> {
    self.building.as_ref()
  }

  pub fn reset_building(&mut self) {
    self.building = None;
  }

  pub fn set_description(&mut self, description: String) {
    self.description = Some(description);
  }

  pub fn with_description(mut self, description: String) -> FreeStyleBuild {
    self.description = Some(description);
    self
  }

  pub fn description(&self) -> Option<&String> {
    self.description.as_ref()
  }

  pub fn reset_description(&mut self) {
    self.description = None;
  }

  pub fn set_display_name(&mut self, display_name: String) {
    self.display_name = Some(display_name);
  }

  pub fn with_display_name(mut self, display_name: String) -> FreeStyleBuild {
    self.display_name = Some(display_name);
    self
  }

  pub fn display_name(&self) -> Option<&String> {
    self.display_name.as_ref()
  }

  pub fn reset_display_name(&mut self) {
    self.display_name = None;
  }

  pub fn set_duration(&mut self, duration: i32) {
    self.duration = Some(duration);
  }

  pub fn with_duration(mut self, duration: i32) -> FreeStyleBuild {
    self.duration = Some(duration);
    self
  }

  pub fn duration(&self) -> Option<&i32> {
    self.duration.as_ref()
  }

  pub fn reset_duration(&mut self) {
    self.duration = None;
  }

  pub fn set_estimated_duration(&mut self, estimated_duration: i32) {
    self.estimated_duration = Some(estimated_duration);
  }

  pub fn with_estimated_duration(mut self, estimated_duration: i32) -> FreeStyleBuild {
    self.estimated_duration = Some(estimated_duration);
    self
  }

  pub fn estimated_duration(&self) -> Option<&i32> {
    self.estimated_duration.as_ref()
  }

  pub fn reset_estimated_duration(&mut self) {
    self.estimated_duration = None;
  }

  pub fn set_executor(&mut self, executor: String) {
    self.executor = Some(executor);
  }

  pub fn with_executor(mut self, executor: String) -> FreeStyleBuild {
    self.executor = Some(executor);
    self
  }

  pub fn executor(&self) -> Option<&String> {
    self.executor.as_ref()
  }

  pub fn reset_executor(&mut self) {
    self.executor = None;
  }

  pub fn set_full_display_name(&mut self, full_display_name: String) {
    self.full_display_name = Some(full_display_name);
  }

  pub fn with_full_display_name(mut self, full_display_name: String) -> FreeStyleBuild {
    self.full_display_name = Some(full_display_name);
    self
  }

  pub fn full_display_name(&self) -> Option<&String> {
    self.full_display_name.as_ref()
  }

  pub fn reset_full_display_name(&mut self) {
    self.full_display_name = None;
  }

  pub fn set_id(&mut self, id: String) {
    self.id = Some(id);
  }

  pub fn with_id(mut self, id: String) -> FreeStyleBuild {
    self.id = Some(id);
    self
  }

  pub fn id(&self) -> Option<&String> {
    self.id.as_ref()
  }

  pub fn reset_id(&mut self) {
    self.id = None;
  }

  pub fn set_keep_log(&mut self, keep_log: bool) {
    self.keep_log = Some(keep_log);
  }

  pub fn with_keep_log(mut self, keep_log: bool) -> FreeStyleBuild {
    self.keep_log = Some(keep_log);
    self
  }

  pub fn keep_log(&self) -> Option<&bool> {
    self.keep_log.as_ref()
  }

  pub fn reset_keep_log(&mut self) {
    self.keep_log = None;
  }

  pub fn set_queue_id(&mut self, queue_id: i32) {
    self.queue_id = Some(queue_id);
  }

  pub fn with_queue_id(mut self, queue_id: i32) -> FreeStyleBuild {
    self.queue_id = Some(queue_id);
    self
  }

  pub fn queue_id(&self) -> Option<&i32> {
    self.queue_id.as_ref()
  }

  pub fn reset_queue_id(&mut self) {
    self.queue_id = None;
  }

  pub fn set_result(&mut self, result: String) {
    self.result = Some(result);
  }

  pub fn with_result(mut self, result: String) -> FreeStyleBuild {
    self.result = Some(result);
    self
  }

  pub fn result(&self) -> Option<&String> {
    self.result.as_ref()
  }

  pub fn reset_result(&mut self) {
    self.result = None;
  }

  pub fn set_timestamp(&mut self, timestamp: i32) {
    self.timestamp = Some(timestamp);
  }

  pub fn with_timestamp(mut self, timestamp: i32) -> FreeStyleBuild {
    self.timestamp = Some(timestamp);
    self
  }

  pub fn timestamp(&self) -> Option<&i32> {
    self.timestamp.as_ref()
  }

  pub fn reset_timestamp(&mut self) {
    self.timestamp = None;
  }

  pub fn set_built_on(&mut self, built_on: String) {
    self.built_on = Some(built_on);
  }

  pub fn with_built_on(mut self, built_on: String) -> FreeStyleBuild {
    self.built_on = Some(built_on);
    self
  }

  pub fn built_on(&self) -> Option<&String> {
    self.built_on.as_ref()
  }

  pub fn reset_built_on(&mut self) {
    self.built_on = None;
  }

  pub fn set_change_set(&mut self, change_set: ::models::EmptyChangeLogSet) {
    self.change_set = Some(change_set);
  }

  pub fn with_change_set(mut self, change_set: ::models::EmptyChangeLogSet) -> FreeStyleBuild {
    self.change_set = Some(change_set);
    self
  }

  pub fn change_set(&self) -> Option<&::models::EmptyChangeLogSet> {
    self.change_set.as_ref()
  }

  pub fn reset_change_set(&mut self) {
    self.change_set = None;
  }

}



