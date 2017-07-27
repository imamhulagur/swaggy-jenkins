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
    define(['ApiClient', 'model/HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace', 'model/HudsonnodeMonitorsResponseTimeMonitorData', 'model/HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2', 'model/HudsonutilClockDifference'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace'), require('./HudsonnodeMonitorsResponseTimeMonitorData'), require('./HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2'), require('./HudsonutilClockDifference'));
  } else {
    // Browser globals (root is window)
    if (!root.SwaggyJenkins) {
      root.SwaggyJenkins = {};
    }
    root.SwaggyJenkins.HudsonmodelHudsonMasterComputerMonitorData = factory(root.SwaggyJenkins.ApiClient, root.SwaggyJenkins.HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace, root.SwaggyJenkins.HudsonnodeMonitorsResponseTimeMonitorData, root.SwaggyJenkins.HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2, root.SwaggyJenkins.HudsonutilClockDifference);
  }
}(this, function(ApiClient, HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace, HudsonnodeMonitorsResponseTimeMonitorData, HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2, HudsonutilClockDifference) {
  'use strict';




  /**
   * The HudsonmodelHudsonMasterComputerMonitorData model module.
   * @module model/HudsonmodelHudsonMasterComputerMonitorData
   * @version 0.0.2
   */

  /**
   * Constructs a new <code>HudsonmodelHudsonMasterComputerMonitorData</code>.
   * @alias module:model/HudsonmodelHudsonMasterComputerMonitorData
   * @class
   */
  var exports = function() {
    var _this = this;








  };

  /**
   * Constructs a <code>HudsonmodelHudsonMasterComputerMonitorData</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/HudsonmodelHudsonMasterComputerMonitorData} obj Optional instance to populate.
   * @return {module:model/HudsonmodelHudsonMasterComputerMonitorData} The populated <code>HudsonmodelHudsonMasterComputerMonitorData</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();

      if (data.hasOwnProperty('hudson.node_monitors.SwapSpaceMonitor')) {
        obj['hudson.node_monitors.SwapSpaceMonitor'] = HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2.constructFromObject(data['hudson.node_monitors.SwapSpaceMonitor']);
      }
      if (data.hasOwnProperty('hudson.node_monitors.TemporarySpaceMonitor')) {
        obj['hudson.node_monitors.TemporarySpaceMonitor'] = HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.constructFromObject(data['hudson.node_monitors.TemporarySpaceMonitor']);
      }
      if (data.hasOwnProperty('hudson.node_monitors.DiskSpaceMonitor')) {
        obj['hudson.node_monitors.DiskSpaceMonitor'] = HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.constructFromObject(data['hudson.node_monitors.DiskSpaceMonitor']);
      }
      if (data.hasOwnProperty('hudson.node_monitors.ArchitectureMonitor')) {
        obj['hudson.node_monitors.ArchitectureMonitor'] = ApiClient.convertToType(data['hudson.node_monitors.ArchitectureMonitor'], 'String');
      }
      if (data.hasOwnProperty('hudson.node_monitors.ResponseTimeMonitor')) {
        obj['hudson.node_monitors.ResponseTimeMonitor'] = HudsonnodeMonitorsResponseTimeMonitorData.constructFromObject(data['hudson.node_monitors.ResponseTimeMonitor']);
      }
      if (data.hasOwnProperty('hudson.node_monitors.ClockMonitor')) {
        obj['hudson.node_monitors.ClockMonitor'] = HudsonutilClockDifference.constructFromObject(data['hudson.node_monitors.ClockMonitor']);
      }
      if (data.hasOwnProperty('_class')) {
        obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {module:model/HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2} hudson.node_monitors.SwapSpaceMonitor
   */
  exports.prototype['hudson.node_monitors.SwapSpaceMonitor'] = undefined;
  /**
   * @member {module:model/HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace} hudson.node_monitors.TemporarySpaceMonitor
   */
  exports.prototype['hudson.node_monitors.TemporarySpaceMonitor'] = undefined;
  /**
   * @member {module:model/HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace} hudson.node_monitors.DiskSpaceMonitor
   */
  exports.prototype['hudson.node_monitors.DiskSpaceMonitor'] = undefined;
  /**
   * @member {String} hudson.node_monitors.ArchitectureMonitor
   */
  exports.prototype['hudson.node_monitors.ArchitectureMonitor'] = undefined;
  /**
   * @member {module:model/HudsonnodeMonitorsResponseTimeMonitorData} hudson.node_monitors.ResponseTimeMonitor
   */
  exports.prototype['hudson.node_monitors.ResponseTimeMonitor'] = undefined;
  /**
   * @member {module:model/HudsonutilClockDifference} hudson.node_monitors.ClockMonitor
   */
  exports.prototype['hudson.node_monitors.ClockMonitor'] = undefined;
  /**
   * @member {String} _class
   */
  exports.prototype['_class'] = undefined;



  return exports;
}));


