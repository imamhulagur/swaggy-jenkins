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
import Link from './Link';





/**
* The GithubRespositoryContainerlinks model module.
* @module model/GithubRespositoryContainerlinks
* @version 0.0.2
*/
export default class GithubRespositoryContainerlinks {
    /**
    * Constructs a new <code>GithubRespositoryContainerlinks</code>.
    * @alias module:model/GithubRespositoryContainerlinks
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>GithubRespositoryContainerlinks</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/GithubRespositoryContainerlinks} obj Optional instance to populate.
    * @return {module:model/GithubRespositoryContainerlinks} The populated <code>GithubRespositoryContainerlinks</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GithubRespositoryContainerlinks();

            
            
            

            if (data.hasOwnProperty('self')) {
                obj['self'] = Link.constructFromObject(data['self']);
            }
            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
        }
        return obj;
    }

    /**
    * @member {module:model/Link} self
    */
    self = undefined;
    /**
    * @member {String} _class
    */
    _class = undefined;








}

