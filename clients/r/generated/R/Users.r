# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' Users Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Users <- R6::R6Class(
  'Users',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      UsersObject <- list()

      UsersObject
    },
    fromJSON = function(UsersJson) {
      UsersObject <- jsonlite::fromJSON(UsersJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(UsersJson) {
      UsersObject <- jsonlite::fromJSON(UsersJson)
    }
  )
)