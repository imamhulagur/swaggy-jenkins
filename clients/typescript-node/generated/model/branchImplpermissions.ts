/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


export class BranchImplpermissions {
    'create'?: boolean;
    'read'?: boolean;
    'start'?: boolean;
    'stop'?: boolean;
    '_class'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "create",
            "baseName": "create",
            "type": "boolean"
        },
        {
            "name": "read",
            "baseName": "read",
            "type": "boolean"
        },
        {
            "name": "start",
            "baseName": "start",
            "type": "boolean"
        },
        {
            "name": "stop",
            "baseName": "stop",
            "type": "boolean"
        },
        {
            "name": "_class",
            "baseName": "_class",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BranchImplpermissions.attributeTypeMap;
    }
}

