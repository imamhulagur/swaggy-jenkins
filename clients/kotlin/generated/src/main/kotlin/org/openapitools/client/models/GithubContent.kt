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
package org.openapitools.client.models


/**
 * 
 * @param name 
 * @param sha 
 * @param Underscoreclass 
 * @param repo 
 * @param size 
 * @param owner 
 * @param path 
 * @param base64Data 
 */
data class GithubContent (
    val name: kotlin.String? = null,
    val sha: kotlin.String? = null,
    val Underscoreclass: kotlin.String? = null,
    val repo: kotlin.String? = null,
    val size: kotlin.Int? = null,
    val owner: kotlin.String? = null,
    val path: kotlin.String? = null,
    val base64Data: kotlin.String? = null
) {

}

