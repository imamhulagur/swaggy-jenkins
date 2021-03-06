/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 *
 * OpenAPI Generator version: 3.2.1-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/InputStepImpllinks', 'model/StringParameterDefinition'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./InputStepImpllinks'), require('./StringParameterDefinition'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.InputStepImpl = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.InputStepImpllinks, root.SwaggyJenkins.StringParameterDefinition);
  }
}(this, function(ApiClient, InputStepImpllinks, StringParameterDefinition) {
  'use strict';




  /**
   * The InputStepImpl model module.
   * @module model/InputStepImpl
   * @version 1.1.1
   */

  /**
   * Constructs a new <code>InputStepImpl</code>.
   * @alias module:model/InputStepImpl
   * @class
   */
  var exports = function() {
    var _this = this;








  };

  /**
   * Constructs a <code>InputStepImpl</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/InputStepImpl} obj Optional instance to populate.
   * @return {module:model/InputStepImpl} The populated <code>InputStepImpl</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
      if (data.hasOwnProperty('_links')) {
        obj['_links'] = InputStepImpllinks.constructFromObject(data['_links']);
      }
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('message')) {
        obj['message'] = ApiClient.convertToType(data['message'], 'String');
      }
      if (data.hasOwnProperty('ok')) {
        obj['ok'] = ApiClient.convertToType(data['ok'], 'String');
      }
      if (data.hasOwnProperty('parameters')) {
        obj['parameters'] = ApiClient.convertToType(data['parameters'], [StringParameterDefinition]);
      }
      if (data.hasOwnProperty('submitter')) {
        obj['submitter'] = ApiClient.convertToType(data['submitter'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;
  /**
   * @member {module:model/InputStepImpllinks} _links
   */
  exports.prototype['_links'] = undefined;
  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {String} message
   */
  exports.prototype['message'] = undefined;
  /**
   * @member {String} ok
   */
  exports.prototype['ok'] = undefined;
  /**
   * @member {Array.<module:model/StringParameterDefinition>} parameters
   */
  exports.prototype['parameters'] = undefined;
  /**
   * @member {String} submitter
   */
  exports.prototype['submitter'] = undefined;



  return exports;
}));


