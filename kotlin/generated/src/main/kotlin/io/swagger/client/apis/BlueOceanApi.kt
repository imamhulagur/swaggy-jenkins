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
*/
package io.swagger.client.apis

import io.swagger.client.models.GetMultibranchPipeline
import io.swagger.client.models.GetOrganisations
import io.swagger.client.models.GetPipelines
import io.swagger.client.models.IojenkinsblueoceanrestimplpipelineBranchImpl
import io.swagger.client.models.IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl
import io.swagger.client.models.IojenkinsblueoceanserviceembeddedrestPipelineImpl
import io.swagger.client.models.SwaggyjenkinsOrganisation
import io.swagger.client.models.SwaggyjenkinsPipeline
import io.swagger.client.models.SwaggyjenkinsUser

import io.swagger.client.infrastructure.*

class BlueOceanApi(basePath: kotlin.String = "http://localhost") : ApiClient(basePath) {

    /**
    * 
    * Retrieve authenticated user details for an organisation
    * @param organisation Name of the organisation 
    * @return SwaggyjenkinsUser
    */
    @Suppress("UNCHECKED_CAST")
    fun getAuthenticatedUser(organisation: kotlin.String) : SwaggyjenkinsUser {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/user/".replace("{"+"organisation"+"}", "$organisation"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<SwaggyjenkinsUser>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as SwaggyjenkinsUser
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Get a list of class names supported by a given class
    * @param _class Name of the class 
    * @return kotlin.String
    */
    @Suppress("UNCHECKED_CAST")
    fun getClasses(_class: kotlin.String) : kotlin.String {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/classes/{class}".replace("{"+"class"+"}", "$_class"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<kotlin.String>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as kotlin.String
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve organisation details
    * @param organisation Name of the organisation 
    * @return SwaggyjenkinsOrganisation
    */
    @Suppress("UNCHECKED_CAST")
    fun getOrganisation(organisation: kotlin.String) : SwaggyjenkinsOrganisation {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}".replace("{"+"organisation"+"}", "$organisation"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<SwaggyjenkinsOrganisation>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as SwaggyjenkinsOrganisation
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve all organisations details
    * @return GetOrganisations
    */
    @Suppress("UNCHECKED_CAST")
    fun getOrganisations() : GetOrganisations {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<GetOrganisations>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as GetOrganisations
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve branch details for an organisation pipeline
    * @param organisation Name of the organisation 
    * @param pipeline Name of the pipeline 
    * @param branch Name of the branch 
    * @return IojenkinsblueoceanrestimplpipelineBranchImpl
    */
    @Suppress("UNCHECKED_CAST")
    fun getPipelineBranchByOrg(organisation: kotlin.String, pipeline: kotlin.String, branch: kotlin.String) : IojenkinsblueoceanrestimplpipelineBranchImpl {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches/{branch}/".replace("{"+"organisation"+"}", "$organisation").replace("{"+"pipeline"+"}", "$pipeline").replace("{"+"branch"+"}", "$branch"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<IojenkinsblueoceanrestimplpipelineBranchImpl>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as IojenkinsblueoceanrestimplpipelineBranchImpl
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve all branches details for an organisation pipeline
    * @param organisation Name of the organisation 
    * @param pipeline Name of the pipeline 
    * @return GetMultibranchPipeline
    */
    @Suppress("UNCHECKED_CAST")
    fun getPipelineBranchesByOrg(organisation: kotlin.String, pipeline: kotlin.String) : GetMultibranchPipeline {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches".replace("{"+"organisation"+"}", "$organisation").replace("{"+"pipeline"+"}", "$pipeline"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<GetMultibranchPipeline>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as GetMultibranchPipeline
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve pipeline details for an organisation
    * @param organisation Name of the organisation 
    * @param pipeline Name of the pipeline 
    * @return SwaggyjenkinsPipeline
    */
    @Suppress("UNCHECKED_CAST")
    fun getPipelineByOrg(organisation: kotlin.String, pipeline: kotlin.String) : SwaggyjenkinsPipeline {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/pipelines/{pipeline}".replace("{"+"organisation"+"}", "$organisation").replace("{"+"pipeline"+"}", "$pipeline"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<SwaggyjenkinsPipeline>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as SwaggyjenkinsPipeline
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve pipeline folder for an organisation
    * @param organisation Name of the organisation 
    * @param folder Name of the folder 
    * @return IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl
    */
    @Suppress("UNCHECKED_CAST")
    fun getPipelineFolderByOrg(organisation: kotlin.String, folder: kotlin.String) : IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/pipelines/{folder}/".replace("{"+"organisation"+"}", "$organisation").replace("{"+"folder"+"}", "$folder"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve pipeline details for an organisation folder
    * @param organisation Name of the organisation 
    * @param pipeline Name of the pipeline 
    * @param folder Name of the folder 
    * @return IojenkinsblueoceanserviceembeddedrestPipelineImpl
    */
    @Suppress("UNCHECKED_CAST")
    fun getPipelineFolderByOrg_0(organisation: kotlin.String, pipeline: kotlin.String, folder: kotlin.String) : IojenkinsblueoceanserviceembeddedrestPipelineImpl {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/pipelines/{folder}/pipelines/{pipeline}".replace("{"+"organisation"+"}", "$organisation").replace("{"+"pipeline"+"}", "$pipeline").replace("{"+"folder"+"}", "$folder"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<IojenkinsblueoceanserviceembeddedrestPipelineImpl>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as IojenkinsblueoceanserviceembeddedrestPipelineImpl
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve all pipelines details for an organisation
    * @param organisation Name of the organisation 
    * @return GetPipelines
    */
    @Suppress("UNCHECKED_CAST")
    fun getPipelinesByOrg(organisation: kotlin.String) : GetPipelines {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/pipelines/".replace("{"+"organisation"+"}", "$organisation"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<GetPipelines>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as GetPipelines
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve user details for an organisation
    * @param organisation Name of the organisation 
    * @param user Name of the user 
    * @return SwaggyjenkinsUser
    */
    @Suppress("UNCHECKED_CAST")
    fun getUser(organisation: kotlin.String, user: kotlin.String) : SwaggyjenkinsUser {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/users/{user}".replace("{"+"organisation"+"}", "$organisation").replace("{"+"user"+"}", "$user"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<SwaggyjenkinsUser>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as SwaggyjenkinsUser
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Retrieve users details for an organisation
    * @param organisation Name of the organisation 
    * @return SwaggyjenkinsUser
    */
    @Suppress("UNCHECKED_CAST")
    fun getUsers(organisation: kotlin.String) : SwaggyjenkinsUser {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/organizations/{organisation}/users/".replace("{"+"organisation"+"}", "$organisation"),
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<SwaggyjenkinsUser>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as SwaggyjenkinsUser
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Get classes details
    * @param q Query string containing an array of class names 
    * @return kotlin.String
    */
    @Suppress("UNCHECKED_CAST")
    fun search(q: kotlin.String) : kotlin.String {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf("q" to q)
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/classes/",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<kotlin.String>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as kotlin.String
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }

    /**
    * 
    * Search for any resource details
    * @param q Query string 
    * @return kotlin.String
    */
    @Suppress("UNCHECKED_CAST")
    fun search_0(q: kotlin.String) : kotlin.String {
        val localVariableBody: kotlin.Any? = null
        val localVariableQuery: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf("q" to q)
        val localVariableHeaders: kotlin.collections.Map<kotlin.String,kotlin.String> = mapOf()
        val localVariableConfig = RequestConfig(
            RequestMethod.GET,
            "/blue/rest/search/",
            query = localVariableQuery,
            headers = localVariableHeaders
        )
        val response = request<kotlin.String>(
            localVariableConfig,
            localVariableBody
        )

        return when (response.responseType) {
            ResponseType.Success -> (response as Success<*>).data as kotlin.String
            ResponseType.Informational -> TODO()
            ResponseType.Redirection -> TODO()
            ResponseType.ClientError -> throw ClientException((response as ClientError<*>).body as? String ?: "Client error")
            ResponseType.ServerError -> throw ServerException((response as ServerError<*>).message ?: "Server error")
            else -> throw kotlin.IllegalStateException("Undefined ResponseType.")
        }
    }


    private fun collectionDelimiter(collectionFormat: kotlin.String) = when(collectionFormat) {
        "csv" -> ","
        "tsv" -> "\t"
        "pipes" -> "|"
        "ssv" -> " "
        else -> ""
    }
}
