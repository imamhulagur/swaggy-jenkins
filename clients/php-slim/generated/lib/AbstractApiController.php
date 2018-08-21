<?php
/**
 * Abstract Api Controller
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */
namespace OpenAPIServer;

/**
 * ApiServer Class Doc Comment
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
abstract class AbstractApiController {

    /**
     * @var \Interop\Container\ContainerInterface Slim app container instance
     */
    protected $container;

    /**
     * Route Controller constructor receives container
     *
     * @param \Interop\Container\ContainerInterface $container Slim app container instance
     */
    public function __construct($container) {
        $this->container = $container;
    }

}