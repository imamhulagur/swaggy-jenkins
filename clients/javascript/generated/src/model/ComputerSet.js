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
import HudsonMasterComputer from './HudsonMasterComputer';





/**
* The ComputerSet model module.
* @module model/ComputerSet
* @version 0.0.2
*/
export default class ComputerSet {
    /**
    * Constructs a new <code>ComputerSet</code>.
    * @alias module:model/ComputerSet
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>ComputerSet</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/ComputerSet} obj Optional instance to populate.
    * @return {module:model/ComputerSet} The populated <code>ComputerSet</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ComputerSet();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('busyExecutors')) {
                obj['busyExecutors'] = ApiClient.convertToType(data['busyExecutors'], 'Number');
            }
            if (data.hasOwnProperty('computer')) {
                obj['computer'] = ApiClient.convertToType(data['computer'], [HudsonMasterComputer]);
            }
            if (data.hasOwnProperty('displayName')) {
                obj['displayName'] = ApiClient.convertToType(data['displayName'], 'String');
            }
            if (data.hasOwnProperty('totalExecutors')) {
                obj['totalExecutors'] = ApiClient.convertToType(data['totalExecutors'], 'Number');
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {Number} busyExecutors
    */
    busyExecutors = undefined;
    /**
    * @member {Array.<module:model/HudsonMasterComputer>} computer
    */
    computer = undefined;
    /**
    * @member {String} displayName
    */
    displayName = undefined;
    /**
    * @member {Number} totalExecutors
    */
    totalExecutors = undefined;








}

