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
 *
 */


import ApiClient from '../ApiClient';
import AllView from './AllView';
import FreeStyleProject from './FreeStyleProject';
import HudsonassignedLabels from './HudsonassignedLabels';
import UnlabeledLoadStatistics from './UnlabeledLoadStatistics';





/**
* The Hudson model module.
* @module model/Hudson
* @version 0.0.2
*/
export default class Hudson {
    /**
    * Constructs a new <code>Hudson</code>.
    * @alias module:model/Hudson
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>Hudson</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/Hudson} obj Optional instance to populate.
    * @return {module:model/Hudson} The populated <code>Hudson</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new Hudson();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('assignedLabels')) {
                obj['assignedLabels'] = ApiClient.convertToType(data['assignedLabels'], [HudsonassignedLabels]);
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
                obj['jobs'] = ApiClient.convertToType(data['jobs'], [FreeStyleProject]);
            }
            if (data.hasOwnProperty('primaryView')) {
                obj['primaryView'] = AllView.constructFromObject(data['primaryView']);
            }
            if (data.hasOwnProperty('quietingDown')) {
                obj['quietingDown'] = ApiClient.convertToType(data['quietingDown'], 'Boolean');
            }
            if (data.hasOwnProperty('slaveAgentPort')) {
                obj['slaveAgentPort'] = ApiClient.convertToType(data['slaveAgentPort'], 'Number');
            }
            if (data.hasOwnProperty('unlabeledLoad')) {
                obj['unlabeledLoad'] = UnlabeledLoadStatistics.constructFromObject(data['unlabeledLoad']);
            }
            if (data.hasOwnProperty('useCrumbs')) {
                obj['useCrumbs'] = ApiClient.convertToType(data['useCrumbs'], 'Boolean');
            }
            if (data.hasOwnProperty('useSecurity')) {
                obj['useSecurity'] = ApiClient.convertToType(data['useSecurity'], 'Boolean');
            }
            if (data.hasOwnProperty('views')) {
                obj['views'] = ApiClient.convertToType(data['views'], [AllView]);
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {Array.<module:model/HudsonassignedLabels>} assignedLabels
    */
    assignedLabels = undefined;
    /**
    * @member {String} mode
    */
    mode = undefined;
    /**
    * @member {String} nodeDescription
    */
    nodeDescription = undefined;
    /**
    * @member {String} nodeName
    */
    nodeName = undefined;
    /**
    * @member {Number} numExecutors
    */
    numExecutors = undefined;
    /**
    * @member {String} description
    */
    description = undefined;
    /**
    * @member {Array.<module:model/FreeStyleProject>} jobs
    */
    jobs = undefined;
    /**
    * @member {module:model/AllView} primaryView
    */
    primaryView = undefined;
    /**
    * @member {Boolean} quietingDown
    */
    quietingDown = undefined;
    /**
    * @member {Number} slaveAgentPort
    */
    slaveAgentPort = undefined;
    /**
    * @member {module:model/UnlabeledLoadStatistics} unlabeledLoad
    */
    unlabeledLoad = undefined;
    /**
    * @member {Boolean} useCrumbs
    */
    useCrumbs = undefined;
    /**
    * @member {Boolean} useSecurity
    */
    useSecurity = undefined;
    /**
    * @member {Array.<module:model/AllView>} views
    */
    views = undefined;








}

