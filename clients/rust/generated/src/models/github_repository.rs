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
pub struct GithubRepository {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "_links")]
  _links: Option<::models::GithubRepositorylinks>,
  #[serde(rename = "defaultBranch")]
  default_branch: Option<String>,
  #[serde(rename = "description")]
  description: Option<String>,
  #[serde(rename = "name")]
  name: Option<String>,
  #[serde(rename = "permissions")]
  permissions: Option<::models::GithubRepositorypermissions>,
  #[serde(rename = "private")]
  private: Option<bool>,
  #[serde(rename = "fullName")]
  full_name: Option<String>
}

impl GithubRepository {
  pub fn new() -> GithubRepository {
    GithubRepository {
      _class: None,
      _links: None,
      default_branch: None,
      description: None,
      name: None,
      permissions: None,
      private: None,
      full_name: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> GithubRepository {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set__links(&mut self, _links: ::models::GithubRepositorylinks) {
    self._links = Some(_links);
  }

  pub fn with__links(mut self, _links: ::models::GithubRepositorylinks) -> GithubRepository {
    self._links = Some(_links);
    self
  }

  pub fn _links(&self) -> Option<&::models::GithubRepositorylinks> {
    self._links.as_ref()
  }

  pub fn reset__links(&mut self) {
    self._links = None;
  }

  pub fn set_default_branch(&mut self, default_branch: String) {
    self.default_branch = Some(default_branch);
  }

  pub fn with_default_branch(mut self, default_branch: String) -> GithubRepository {
    self.default_branch = Some(default_branch);
    self
  }

  pub fn default_branch(&self) -> Option<&String> {
    self.default_branch.as_ref()
  }

  pub fn reset_default_branch(&mut self) {
    self.default_branch = None;
  }

  pub fn set_description(&mut self, description: String) {
    self.description = Some(description);
  }

  pub fn with_description(mut self, description: String) -> GithubRepository {
    self.description = Some(description);
    self
  }

  pub fn description(&self) -> Option<&String> {
    self.description.as_ref()
  }

  pub fn reset_description(&mut self) {
    self.description = None;
  }

  pub fn set_name(&mut self, name: String) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: String) -> GithubRepository {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&String> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_permissions(&mut self, permissions: ::models::GithubRepositorypermissions) {
    self.permissions = Some(permissions);
  }

  pub fn with_permissions(mut self, permissions: ::models::GithubRepositorypermissions) -> GithubRepository {
    self.permissions = Some(permissions);
    self
  }

  pub fn permissions(&self) -> Option<&::models::GithubRepositorypermissions> {
    self.permissions.as_ref()
  }

  pub fn reset_permissions(&mut self) {
    self.permissions = None;
  }

  pub fn set_private(&mut self, private: bool) {
    self.private = Some(private);
  }

  pub fn with_private(mut self, private: bool) -> GithubRepository {
    self.private = Some(private);
    self
  }

  pub fn private(&self) -> Option<&bool> {
    self.private.as_ref()
  }

  pub fn reset_private(&mut self) {
    self.private = None;
  }

  pub fn set_full_name(&mut self, full_name: String) {
    self.full_name = Some(full_name);
  }

  pub fn with_full_name(mut self, full_name: String) -> GithubRepository {
    self.full_name = Some(full_name);
    self
  }

  pub fn full_name(&self) -> Option<&String> {
    self.full_name.as_ref()
  }

  pub fn reset_full_name(&mut self) {
    self.full_name = None;
  }

}



