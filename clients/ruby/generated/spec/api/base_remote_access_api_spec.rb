=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.0.1
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 3.2.1-SNAPSHOT

=end

require 'spec_helper'
require 'json'

# Unit tests for SwaggyJenkinsClient::BaseRemoteAccessApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'BaseRemoteAccessApi' do
  before do
    # run before each test
    @instance = SwaggyJenkinsClient::BaseRemoteAccessApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of BaseRemoteAccessApi' do
    it 'should create an instance of BaseRemoteAccessApi' do
      expect(@instance).to be_instance_of(SwaggyJenkinsClient::BaseRemoteAccessApi)
    end
  end

  # unit tests for get_crumb
  # Retrieve CSRF protection token
  # @param [Hash] opts the optional parameters
  # @return [DefaultCrumbIssuer]
  describe 'get_crumb test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
