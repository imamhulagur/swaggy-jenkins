=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 0.1.0
Contact: blah@cliffano.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.2.3-SNAPSHOT

=end

require "uri"

module SwaggyJenkinsClient
  class BlueOceanApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end

    # 
    # Retrieve authenticated user details for an organisation
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [SwaggyjenkinsUser]
    def get_authenticated_user(organisation, opts = {})
      data, _status_code, _headers = get_authenticated_user_with_http_info(organisation, opts)
      return data
    end

    # 
    # Retrieve authenticated user details for an organisation
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [Array<(SwaggyjenkinsUser, Fixnum, Hash)>] SwaggyjenkinsUser data, response status code and response headers
    def get_authenticated_user_with_http_info(organisation, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_authenticated_user ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_authenticated_user"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/user/".sub('{' + 'organisation' + '}', organisation.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'SwaggyjenkinsUser')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_authenticated_user\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Get a list of class names supported by a given class
    # @param _class Name of the class
    # @param [Hash] opts the optional parameters
    # @return [String]
    def get_classes(_class, opts = {})
      data, _status_code, _headers = get_classes_with_http_info(_class, opts)
      return data
    end

    # 
    # Get a list of class names supported by a given class
    # @param _class Name of the class
    # @param [Hash] opts the optional parameters
    # @return [Array<(String, Fixnum, Hash)>] String data, response status code and response headers
    def get_classes_with_http_info(_class, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_classes ..."
      end
      # verify the required parameter '_class' is set
      if @api_client.config.client_side_validation && _class.nil?
        fail ArgumentError, "Missing the required parameter '_class' when calling BlueOceanApi.get_classes"
      end
      # resource path
      local_var_path = "/blue/rest/classes/{class}".sub('{' + 'class' + '}', _class.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'String')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_classes\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve organisation details
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [SwaggyjenkinsOrganisation]
    def get_organisation(organisation, opts = {})
      data, _status_code, _headers = get_organisation_with_http_info(organisation, opts)
      return data
    end

    # 
    # Retrieve organisation details
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [Array<(SwaggyjenkinsOrganisation, Fixnum, Hash)>] SwaggyjenkinsOrganisation data, response status code and response headers
    def get_organisation_with_http_info(organisation, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_organisation ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_organisation"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}".sub('{' + 'organisation' + '}', organisation.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'SwaggyjenkinsOrganisation')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_organisation\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve all organisations details
    # @param [Hash] opts the optional parameters
    # @return [GetOrganisations]
    def get_organisations(opts = {})
      data, _status_code, _headers = get_organisations_with_http_info(opts)
      return data
    end

    # 
    # Retrieve all organisations details
    # @param [Hash] opts the optional parameters
    # @return [Array<(GetOrganisations, Fixnum, Hash)>] GetOrganisations data, response status code and response headers
    def get_organisations_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_organisations ..."
      end
      # resource path
      local_var_path = "/blue/rest/organizations/"

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'GetOrganisations')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_organisations\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve branch details for an organisation pipeline
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param branch Name of the branch
    # @param [Hash] opts the optional parameters
    # @return [IojenkinsblueoceanrestimplpipelineBranchImpl]
    def get_pipeline_branch_by_org(organisation, pipeline, branch, opts = {})
      data, _status_code, _headers = get_pipeline_branch_by_org_with_http_info(organisation, pipeline, branch, opts)
      return data
    end

    # 
    # Retrieve branch details for an organisation pipeline
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param branch Name of the branch
    # @param [Hash] opts the optional parameters
    # @return [Array<(IojenkinsblueoceanrestimplpipelineBranchImpl, Fixnum, Hash)>] IojenkinsblueoceanrestimplpipelineBranchImpl data, response status code and response headers
    def get_pipeline_branch_by_org_with_http_info(organisation, pipeline, branch, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_pipeline_branch_by_org ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_pipeline_branch_by_org"
      end
      # verify the required parameter 'pipeline' is set
      if @api_client.config.client_side_validation && pipeline.nil?
        fail ArgumentError, "Missing the required parameter 'pipeline' when calling BlueOceanApi.get_pipeline_branch_by_org"
      end
      # verify the required parameter 'branch' is set
      if @api_client.config.client_side_validation && branch.nil?
        fail ArgumentError, "Missing the required parameter 'branch' when calling BlueOceanApi.get_pipeline_branch_by_org"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches/{branch}/".sub('{' + 'organisation' + '}', organisation.to_s).sub('{' + 'pipeline' + '}', pipeline.to_s).sub('{' + 'branch' + '}', branch.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'IojenkinsblueoceanrestimplpipelineBranchImpl')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_pipeline_branch_by_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve all branches details for an organisation pipeline
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param [Hash] opts the optional parameters
    # @return [GetMultibranchPipeline]
    def get_pipeline_branches_by_org(organisation, pipeline, opts = {})
      data, _status_code, _headers = get_pipeline_branches_by_org_with_http_info(organisation, pipeline, opts)
      return data
    end

    # 
    # Retrieve all branches details for an organisation pipeline
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param [Hash] opts the optional parameters
    # @return [Array<(GetMultibranchPipeline, Fixnum, Hash)>] GetMultibranchPipeline data, response status code and response headers
    def get_pipeline_branches_by_org_with_http_info(organisation, pipeline, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_pipeline_branches_by_org ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_pipeline_branches_by_org"
      end
      # verify the required parameter 'pipeline' is set
      if @api_client.config.client_side_validation && pipeline.nil?
        fail ArgumentError, "Missing the required parameter 'pipeline' when calling BlueOceanApi.get_pipeline_branches_by_org"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/pipelines/{pipeline}/branches".sub('{' + 'organisation' + '}', organisation.to_s).sub('{' + 'pipeline' + '}', pipeline.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'GetMultibranchPipeline')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_pipeline_branches_by_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve pipeline details for an organisation
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param [Hash] opts the optional parameters
    # @return [SwaggyjenkinsPipeline]
    def get_pipeline_by_org(organisation, pipeline, opts = {})
      data, _status_code, _headers = get_pipeline_by_org_with_http_info(organisation, pipeline, opts)
      return data
    end

    # 
    # Retrieve pipeline details for an organisation
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param [Hash] opts the optional parameters
    # @return [Array<(SwaggyjenkinsPipeline, Fixnum, Hash)>] SwaggyjenkinsPipeline data, response status code and response headers
    def get_pipeline_by_org_with_http_info(organisation, pipeline, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_pipeline_by_org ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_pipeline_by_org"
      end
      # verify the required parameter 'pipeline' is set
      if @api_client.config.client_side_validation && pipeline.nil?
        fail ArgumentError, "Missing the required parameter 'pipeline' when calling BlueOceanApi.get_pipeline_by_org"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/pipelines/{pipeline}".sub('{' + 'organisation' + '}', organisation.to_s).sub('{' + 'pipeline' + '}', pipeline.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'SwaggyjenkinsPipeline')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_pipeline_by_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve pipeline folder for an organisation
    # @param organisation Name of the organisation
    # @param folder Name of the folder
    # @param [Hash] opts the optional parameters
    # @return [IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl]
    def get_pipeline_folder_by_org(organisation, folder, opts = {})
      data, _status_code, _headers = get_pipeline_folder_by_org_with_http_info(organisation, folder, opts)
      return data
    end

    # 
    # Retrieve pipeline folder for an organisation
    # @param organisation Name of the organisation
    # @param folder Name of the folder
    # @param [Hash] opts the optional parameters
    # @return [Array<(IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl, Fixnum, Hash)>] IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl data, response status code and response headers
    def get_pipeline_folder_by_org_with_http_info(organisation, folder, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_pipeline_folder_by_org ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_pipeline_folder_by_org"
      end
      # verify the required parameter 'folder' is set
      if @api_client.config.client_side_validation && folder.nil?
        fail ArgumentError, "Missing the required parameter 'folder' when calling BlueOceanApi.get_pipeline_folder_by_org"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/pipelines/{folder}/".sub('{' + 'organisation' + '}', organisation.to_s).sub('{' + 'folder' + '}', folder.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_pipeline_folder_by_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve pipeline details for an organisation folder
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param folder Name of the folder
    # @param [Hash] opts the optional parameters
    # @return [IojenkinsblueoceanserviceembeddedrestPipelineImpl]
    def get_pipeline_folder_by_org_0(organisation, pipeline, folder, opts = {})
      data, _status_code, _headers = get_pipeline_folder_by_org_0_with_http_info(organisation, pipeline, folder, opts)
      return data
    end

    # 
    # Retrieve pipeline details for an organisation folder
    # @param organisation Name of the organisation
    # @param pipeline Name of the pipeline
    # @param folder Name of the folder
    # @param [Hash] opts the optional parameters
    # @return [Array<(IojenkinsblueoceanserviceembeddedrestPipelineImpl, Fixnum, Hash)>] IojenkinsblueoceanserviceembeddedrestPipelineImpl data, response status code and response headers
    def get_pipeline_folder_by_org_0_with_http_info(organisation, pipeline, folder, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_pipeline_folder_by_org_0 ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_pipeline_folder_by_org_0"
      end
      # verify the required parameter 'pipeline' is set
      if @api_client.config.client_side_validation && pipeline.nil?
        fail ArgumentError, "Missing the required parameter 'pipeline' when calling BlueOceanApi.get_pipeline_folder_by_org_0"
      end
      # verify the required parameter 'folder' is set
      if @api_client.config.client_side_validation && folder.nil?
        fail ArgumentError, "Missing the required parameter 'folder' when calling BlueOceanApi.get_pipeline_folder_by_org_0"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/pipelines/{folder}/pipelines/{pipeline}".sub('{' + 'organisation' + '}', organisation.to_s).sub('{' + 'pipeline' + '}', pipeline.to_s).sub('{' + 'folder' + '}', folder.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'IojenkinsblueoceanserviceembeddedrestPipelineImpl')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_pipeline_folder_by_org_0\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve all pipelines details for an organisation
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [GetPipelines]
    def get_pipelines_by_org(organisation, opts = {})
      data, _status_code, _headers = get_pipelines_by_org_with_http_info(organisation, opts)
      return data
    end

    # 
    # Retrieve all pipelines details for an organisation
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [Array<(GetPipelines, Fixnum, Hash)>] GetPipelines data, response status code and response headers
    def get_pipelines_by_org_with_http_info(organisation, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_pipelines_by_org ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_pipelines_by_org"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/pipelines/".sub('{' + 'organisation' + '}', organisation.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'GetPipelines')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_pipelines_by_org\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve user details for an organisation
    # @param organisation Name of the organisation
    # @param user Name of the user
    # @param [Hash] opts the optional parameters
    # @return [SwaggyjenkinsUser]
    def get_user(organisation, user, opts = {})
      data, _status_code, _headers = get_user_with_http_info(organisation, user, opts)
      return data
    end

    # 
    # Retrieve user details for an organisation
    # @param organisation Name of the organisation
    # @param user Name of the user
    # @param [Hash] opts the optional parameters
    # @return [Array<(SwaggyjenkinsUser, Fixnum, Hash)>] SwaggyjenkinsUser data, response status code and response headers
    def get_user_with_http_info(organisation, user, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_user ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_user"
      end
      # verify the required parameter 'user' is set
      if @api_client.config.client_side_validation && user.nil?
        fail ArgumentError, "Missing the required parameter 'user' when calling BlueOceanApi.get_user"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/users/{user}".sub('{' + 'organisation' + '}', organisation.to_s).sub('{' + 'user' + '}', user.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'SwaggyjenkinsUser')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_user\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Retrieve users details for an organisation
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [SwaggyjenkinsUser]
    def get_users(organisation, opts = {})
      data, _status_code, _headers = get_users_with_http_info(organisation, opts)
      return data
    end

    # 
    # Retrieve users details for an organisation
    # @param organisation Name of the organisation
    # @param [Hash] opts the optional parameters
    # @return [Array<(SwaggyjenkinsUser, Fixnum, Hash)>] SwaggyjenkinsUser data, response status code and response headers
    def get_users_with_http_info(organisation, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.get_users ..."
      end
      # verify the required parameter 'organisation' is set
      if @api_client.config.client_side_validation && organisation.nil?
        fail ArgumentError, "Missing the required parameter 'organisation' when calling BlueOceanApi.get_users"
      end
      # resource path
      local_var_path = "/blue/rest/organizations/{organisation}/users/".sub('{' + 'organisation' + '}', organisation.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'SwaggyjenkinsUser')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#get_users\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Get classes details
    # @param q Query string containing an array of class names
    # @param [Hash] opts the optional parameters
    # @return [String]
    def search(q, opts = {})
      data, _status_code, _headers = search_with_http_info(q, opts)
      return data
    end

    # 
    # Get classes details
    # @param q Query string containing an array of class names
    # @param [Hash] opts the optional parameters
    # @return [Array<(String, Fixnum, Hash)>] String data, response status code and response headers
    def search_with_http_info(q, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.search ..."
      end
      # verify the required parameter 'q' is set
      if @api_client.config.client_side_validation && q.nil?
        fail ArgumentError, "Missing the required parameter 'q' when calling BlueOceanApi.search"
      end
      # resource path
      local_var_path = "/blue/rest/classes/"

      # query parameters
      query_params = {}
      query_params[:'q'] = q

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'String')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#search\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # Search for any resource details
    # @param q Query string
    # @param [Hash] opts the optional parameters
    # @return [String]
    def search_0(q, opts = {})
      data, _status_code, _headers = search_0_with_http_info(q, opts)
      return data
    end

    # 
    # Search for any resource details
    # @param q Query string
    # @param [Hash] opts the optional parameters
    # @return [Array<(String, Fixnum, Hash)>] String data, response status code and response headers
    def search_0_with_http_info(q, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: BlueOceanApi.search_0 ..."
      end
      # verify the required parameter 'q' is set
      if @api_client.config.client_side_validation && q.nil?
        fail ArgumentError, "Missing the required parameter 'q' when calling BlueOceanApi.search_0"
      end
      # resource path
      local_var_path = "/blue/rest/search/"

      # query parameters
      query_params = {}
      query_params[:'q'] = q

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'String')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: BlueOceanApi#search_0\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end