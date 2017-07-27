/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.2.3-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.GetMultibranchPipeline = factory(root.SwaggyJenkins.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';




  /**
   * The GetMultibranchPipeline model module.
   * @module model/GetMultibranchPipeline
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>GetMultibranchPipeline</code>.
   * @alias module:model/GetMultibranchPipeline
   * @class
   */
  var exports = function() {
    var _this = this;















  };

  /**
   * Constructs a <code>GetMultibranchPipeline</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/GetMultibranchPipeline} obj Optional instance to populate.
   * @return {module:model/GetMultibranchPipeline} The populated <code>GetMultibranchPipeline</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('displayName')) {
        obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
      }
      if (data.hasOwnProperty('estimatedDurationInMillis')) {
        obj['estimatedDurationInMillis'] = ApiClient.convertToType(data['estimatedDurationInMillis'], 'Number');
      }
      if (data.hasOwnProperty('latestRun')) {
        obj['latestRun'] = ApiClient.convertToType(data['latestRun'], 'String');
      }
      if (data.hasOwnProperty('name')) {
        obj['name'] = ApiClient.convertToType(data['name'], 'String');
      }
      if (data.hasOwnProperty('organization')) {
        obj['organization'] = ApiClient.convertToType(data['organization'], 'String');
      }
      if (data.hasOwnProperty('weatherScore')) {
        obj['weatherScore'] = ApiClient.convertToType(data['weatherScore'], 'Number');
      }
      if (data.hasOwnProperty('branchNames')) {
        obj['branchNames'] = ApiClient.convertToType(data['branchNames'], ['String']);
      }
      if (data.hasOwnProperty('numberOfFailingBranches')) {
        obj['numberOfFailingBranches'] = ApiClient.convertToType(data['numberOfFailingBranches'], 'Number');
      }
      if (data.hasOwnProperty('numberOfFailingPullRequests')) {
        obj['numberOfFailingPullRequests'] = ApiClient.convertToType(data['numberOfFailingPullRequests'], 'Number');
      }
      if (data.hasOwnProperty('numberOfSuccessfulBranches')) {
        obj['numberOfSuccessfulBranches'] = ApiClient.convertToType(data['numberOfSuccessfulBranches'], 'Number');
      }
      if (data.hasOwnProperty('numberOfSuccessfulPullRequests')) {
        obj['numberOfSuccessfulPullRequests'] = ApiClient.convertToType(data['numberOfSuccessfulPullRequests'], 'Number');
      }
      if (data.hasOwnProperty('totalNumberOfBranches')) {
        obj['totalNumberOfBranches'] = ApiClient.convertToType(data['totalNumberOfBranches'], 'Number');
      }
      if (data.hasOwnProperty('totalNumberOfPullRequests')) {
        obj['totalNumberOfPullRequests'] = ApiClient.convertToType(data['totalNumberOfPullRequests'], 'Number');
      }
      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} displayName
   */
  exports.prototype['displayName'] = undefined;
  /**
   * @member {Number} estimatedDurationInMillis
   */
  exports.prototype['estimatedDurationInMillis'] = undefined;
  /**
   * @member {String} latestRun
   */
  exports.prototype['latestRun'] = undefined;
  /**
   * @member {String} name
   */
  exports.prototype['name'] = undefined;
  /**
   * @member {String} organization
   */
  exports.prototype['organization'] = undefined;
  /**
   * @member {Number} weatherScore
   */
  exports.prototype['weatherScore'] = undefined;
  /**
   * @member {Array.<String>} branchNames
   */
  exports.prototype['branchNames'] = undefined;
  /**
   * @member {Number} numberOfFailingBranches
   */
  exports.prototype['numberOfFailingBranches'] = undefined;
  /**
   * @member {Number} numberOfFailingPullRequests
   */
  exports.prototype['numberOfFailingPullRequests'] = undefined;
  /**
   * @member {Number} numberOfSuccessfulBranches
   */
  exports.prototype['numberOfSuccessfulBranches'] = undefined;
  /**
   * @member {Number} numberOfSuccessfulPullRequests
   */
  exports.prototype['numberOfSuccessfulPullRequests'] = undefined;
  /**
   * @member {Number} totalNumberOfBranches
   */
  exports.prototype['totalNumberOfBranches'] = undefined;
  /**
   * @member {Number} totalNumberOfPullRequests
   */
  exports.prototype['totalNumberOfPullRequests'] = undefined;
  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;



  return exports;
}));


