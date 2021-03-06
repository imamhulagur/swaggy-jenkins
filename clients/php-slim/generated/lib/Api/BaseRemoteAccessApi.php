<?php
/**
 * BaseRemoteAccessApi
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */
namespace OpenAPIServer\Api;

use OpenAPIServer\AbstractApiController;

/**
 * BaseRemoteAccessApi Class Doc Comment
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
class BaseRemoteAccessApi extends AbstractApiController {

    /**
     * GET getCrumb
     * Summary: 
     * Notes: Retrieve CSRF protection token
     * Output-Formats: [application/json]
     *
     * @param \Psr\Http\Message\ServerRequestInterface $request  Request
     * @param \Psr\Http\Message\ResponseInterface      $response Response
     * @param array|null                               $args     Path arguments
     */
    public function getCrumb($request, $response, $args) {
        $response->write('How about implementing getCrumb as a GET method ?');
        return $response;
    }
    
}
