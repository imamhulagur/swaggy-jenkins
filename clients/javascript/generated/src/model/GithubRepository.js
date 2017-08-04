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
import GithubRepositorylinks from './GithubRepositorylinks';
import GithubRepositorypermissions from './GithubRepositorypermissions';





/**
* The GithubRepository model module.
* @module model/GithubRepository
* @version 0.0.2
*/
export default class GithubRepository {
    /**
    * Constructs a new <code>GithubRepository</code>.
    * @alias module:model/GithubRepository
    * @class
    */

    constructor() {
        

        
        

        

        
    }

    /**
    * Constructs a <code>GithubRepository</code> from a plain JavaScript object, optionally creating a new instance.
    * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
    * @param {Object} data The plain JavaScript object bearing properties of interest.
    * @param {module:model/GithubRepository} obj Optional instance to populate.
    * @return {module:model/GithubRepository} The populated <code>GithubRepository</code> instance.
    */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new GithubRepository();

            
            
            

            if (data.hasOwnProperty('_class')) {
                obj['_class'] = ApiClient.convertToType(data['_class'], 'String');
            }
            if (data.hasOwnProperty('_links')) {
                obj['_links'] = GithubRepositorylinks.constructFromObject(data['_links']);
            }
            if (data.hasOwnProperty('defaultBranch')) {
                obj['defaultBranch'] = ApiClient.convertToType(data['defaultBranch'], 'String');
            }
            if (data.hasOwnProperty('description')) {
                obj['description'] = ApiClient.convertToType(data['description'], 'String');
            }
            if (data.hasOwnProperty('name')) {
                obj['name'] = ApiClient.convertToType(data['name'], 'String');
            }
            if (data.hasOwnProperty('permissions')) {
                obj['permissions'] = GithubRepositorypermissions.constructFromObject(data['permissions']);
            }
            if (data.hasOwnProperty('private')) {
                obj['private'] = ApiClient.convertToType(data['private'], 'Boolean');
            }
            if (data.hasOwnProperty('fullName')) {
                obj['fullName'] = ApiClient.convertToType(data['fullName'], 'String');
            }
        }
        return obj;
    }

    /**
    * @member {String} _class
    */
    _class = undefined;
    /**
    * @member {module:model/GithubRepositorylinks} _links
    */
    _links = undefined;
    /**
    * @member {String} defaultBranch
    */
    defaultBranch = undefined;
    /**
    * @member {String} description
    */
    description = undefined;
    /**
    * @member {String} name
    */
    name = undefined;
    /**
    * @member {module:model/GithubRepositorypermissions} permissions
    */
    permissions = undefined;
    /**
    * @member {Boolean} private
    */
    private = undefined;
    /**
    * @member {String} fullName
    */
    fullName = undefined;








}

