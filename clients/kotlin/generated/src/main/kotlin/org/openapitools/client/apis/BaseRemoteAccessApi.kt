/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.apis

import org.openapitools.client.models.DefaultCrumbIssuer

import org.openapitools.client.infrastructure.*

class BaseRemoteAccessApi(basePath: kotlin.String = "http://localhost") : ApiClient(basePath) {

    /**
    * 
    * Retrieve CSRF protection token
    * @return DefaultCrumbIssuer
    */
    @Suppress("UNCHECKED_CAST")
    fun getCrumb() : DefaultCrumbIssuer {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: MultiValueMap = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/crumbIssuer/api/json",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<DefaultCrumbIssuer>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as DefaultCrumbIssuer
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

}
