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
    define(['ApiClient', 'model/HudsonmodelAllView', 'model/HudsonmodelFreeStyleProject', 'model/HudsonmodelHudsonassignedLabels', 'model/JenkinsmodelUnlabeledLoadStatistics'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./HudsonmodelAllView'), require('./HudsonmodelFreeStyleProject'), require('./HudsonmodelHudsonassignedLabels'), require('./JenkinsmodelUnlabeledLoadStatistics'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.HudsonmodelHudson = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.HudsonmodelAllView, root.SwaggyJenkins.HudsonmodelFreeStyleProject, root.SwaggyJenkins.HudsonmodelHudsonassignedLabels, root.SwaggyJenkins.JenkinsmodelUnlabeledLoadStatistics);
  }
}(this, function(ApiClient, HudsonmodelAllView, HudsonmodelFreeStyleProject, HudsonmodelHudsonassignedLabels, JenkinsmodelUnlabeledLoadStatistics) {
  'use strict';




  /**
   * The HudsonmodelHudson model module.
   * @module model/HudsonmodelHudson
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>HudsonmodelHudson</code>.
   * @alias module:model/HudsonmodelHudson
   * @class
   */
  var exports = function() {
    var _this = this;
















  };

  /**
   * Constructs a <code>HudsonmodelHudson</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/HudsonmodelHudson} obj Optional instance to populate.
   * @return {module:model/HudsonmodelHudson} The populated <code>HudsonmodelHudson</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('assignedLabels')) {
        obj['assignedLabels'] = ApiClient.convertToType(data['assignedLabels'], [HudsonmodelHudsonassignedLabels]);
      }
      if (data.hasOwnProperty('mode')) {
        obj['mode'] = ApiClient.convertToType(data['mode'], 'String');
      }
      if (data.hasOwnProperty('nodeDescription')) {
        obj['nodeDescription'] = ApiClient.convertToType(data['nodeDescription'], 'String');
      }
      if (data.hasOwnProperty('nodeName')) {
        obj['nodeName'] = ApiClient.convertToType(data['nodeName'], 'String');
      }
      if (data.hasOwnProperty('numExecutors')) {
        obj['numExecutors'] = ApiClient.convertToType(data['numExecutors'], 'Number');
      }
      if (data.hasOwnProperty('description')) {
        obj['description'] = ApiClient.convertToType(data['description'], 'String');
      }
      if (data.hasOwnProperty('jobs')) {
        obj['jobs'] = ApiClient.convertToType(data['jobs'], [HudsonmodelFreeStyleProject]);
      }
      if (data.hasOwnProperty('primaryView')) {
        obj['primaryView'] = HudsonmodelAllView.constructFromObject(data['primaryView']);
      }
      if (data.hasOwnProperty('quietingDown')) {
        obj['quietingDown'] = ApiClient.convertToType(data['quietingDown'], 'Boolean');
      }
      if (data.hasOwnProperty('slaveAgentPort')) {
        obj['slaveAgentPort'] = ApiClient.convertToType(data['slaveAgentPort'], 'Number');
      }
      if (data.hasOwnProperty('unlabeledLoad')) {
        obj['unlabeledLoad'] = JenkinsmodelUnlabeledLoadStatistics.constructFromObject(data['unlabeledLoad']);
      }
      if (data.hasOwnProperty('useCrumbs')) {
        obj['useCrumbs'] = ApiClient.convertToType(data['useCrumbs'], 'Boolean');
      }
      if (data.hasOwnProperty('useSecurity')) {
        obj['useSecurity'] = ApiClient.convertToType(data['useSecurity'], 'Boolean');
      }
      if (data.hasOwnProperty('views')) {
        obj['views'] = ApiClient.convertToType(data['views'], [HudsonmodelAllView]);
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {Array.<module:model/HudsonmodelHudsonassignedLabels>} assignedLabels
   */
  exports.prototype['assignedLabels'] = undefined;
  /**
   * @member {String} mode
   */
  exports.prototype['mode'] = undefined;
  /**
   * @member {String} nodeDescription
   */
  exports.prototype['nodeDescription'] = undefined;
  /**
   * @member {String} nodeName
   */
  exports.prototype['nodeName'] = undefined;
  /**
   * @member {Number} numExecutors
   */
  exports.prototype['numExecutors'] = undefined;
  /**
   * @member {String} description
   */
  exports.prototype['description'] = undefined;
  /**
   * @member {Array.<module:model/HudsonmodelFreeStyleProject>} jobs
   */
  exports.prototype['jobs'] = undefined;
  /**
   * @member {module:model/HudsonmodelAllView} primaryView
   */
  exports.prototype['primaryView'] = undefined;
  /**
   * @member {Boolean} quietingDown
   */
  exports.prototype['quietingDown'] = undefined;
  /**
   * @member {Number} slaveAgentPort
   */
  exports.prototype['slaveAgentPort'] = undefined;
  /**
   * @member {module:model/JenkinsmodelUnlabeledLoadStatistics} unlabeledLoad
   */
  exports.prototype['unlabeledLoad'] = undefined;
  /**
   * @member {Boolean} useCrumbs
   */
  exports.prototype['useCrumbs'] = undefined;
  /**
   * @member {Boolean} useSecurity
   */
  exports.prototype['useSecurity'] = undefined;
  /**
   * @member {Array.<module:model/HudsonmodelAllView>} views
   */
  exports.prototype['views'] = undefined;



  return exports;
}));


