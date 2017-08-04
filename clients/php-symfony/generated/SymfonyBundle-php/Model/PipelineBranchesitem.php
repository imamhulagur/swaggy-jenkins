<?php
/**
 * PipelineBranchesitem
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Server\Model
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Server\Model;

use \ArrayAccess;
use Swagger\Server\Model\PipelineBranchesitempullRequest;
use Swagger\Server\Model\PipelineBranchesitemlatestRun;

/**
 * Class representing the PipelineBranchesitem model.
 *
 * @package Swagger\Server\Model
 * @author  Swagger Codegen team
 */
class PipelineBranchesitem implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $_name = 'PipelineBranchesitem';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var array[]
      */
    protected static $_attributes = [
        'display_name' => ['displayName', 'string', null, 'setDisplayName', 'getDisplayName'],
        'estimated_duration_in_millis' => ['estimatedDurationInMillis', 'int', null, 'setEstimatedDurationInMillis', 'getEstimatedDurationInMillis'],
        'name' => ['name', 'string', null, 'setName', 'getName'],
        'weather_score' => ['weatherScore', 'int', null, 'setWeatherScore', 'getWeatherScore'],
        'latest_run' => ['latestRun', 'Swagger\Server\Model\PipelineBranchesitemlatestRun', null, 'setLatestRun', 'getLatestRun'],
        'organization' => ['organization', 'string', null, 'setOrganization', 'getOrganization'],
        'pull_request' => ['pullRequest', 'Swagger\Server\Model\PipelineBranchesitempullRequest', null, 'setPullRequest', 'getPullRequest'],
        'total_number_of_pull_requests' => ['totalNumberOfPullRequests', 'int', null, 'setTotalNumberOfPullRequests', 'getTotalNumberOfPullRequests'],
        '_class' => ['_class', 'string', null, 'setClass', 'getClass'],
    ];
    

    
    /**     * @var string|null
     */
    protected $display_name;

    /**     * @var int|null
     */
    protected $estimated_duration_in_millis;

    /**     * @var string|null
     */
    protected $name;

    /**     * @var int|null
     */
    protected $weather_score;

    /**     * @var PipelineBranchesitemlatestRun|null
     */
    protected $latest_run;

    /**     * @var string|null
     */
    protected $organization;

    /**     * @var PipelineBranchesitempullRequest|null
     */
    protected $pull_request;

    /**     * @var int|null
     */
    protected $total_number_of_pull_requests;

    /**     * @var string|null
     */
    protected $_class;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->display_name = isset($data['display_name']) ? $data['display_name'] : null;
        $this->estimated_duration_in_millis = isset($data['estimated_duration_in_millis']) ? $data['estimated_duration_in_millis'] : null;
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->weather_score = isset($data['weather_score']) ? $data['weather_score'] : null;
        $this->latest_run = isset($data['latest_run']) ? $data['latest_run'] : null;
        $this->organization = isset($data['organization']) ? $data['organization'] : null;
        $this->pull_request = isset($data['pull_request']) ? $data['pull_request'] : null;
        $this->total_number_of_pull_requests = isset($data['total_number_of_pull_requests']) ? $data['total_number_of_pull_requests'] : null;
        $this->_class = isset($data['_class']) ? $data['_class'] : null;
    }

    /**
     * show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalid_properties = [];

        return $invalid_properties;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function modelName() {
        return self::$_name;
    }

    /**
     * Array of property to mappings.
     *
     * @return array[]
     */
    public function modelAttributes() {
        
        return self::$_attributes;
    }

    /**
     * Validate all the properties in the model
     *
     * Return true if all passed.
     *
     * @return bool True if all properties are valid
     */
    public function isValid()
    {
        return true;
    }


    /**
     * Gets display_name.
     *
     * @return string|null
     */
    public function getDisplayName()
    {
        return $this->display_name;
    }

    /**
     * Sets display_name.
     *
     * @param string|null $display_name
     *
     * @return $this
     */
    public function setDisplayName($display_name = null)
    {
        $this->display_name = $display_name;

        return $this;
    }

    /**
     * Gets estimated_duration_in_millis.
     *
     * @return int|null
     */
    public function getEstimatedDurationInMillis()
    {
        return $this->estimated_duration_in_millis;
    }

    /**
     * Sets estimated_duration_in_millis.
     *
     * @param int|null $estimated_duration_in_millis
     *
     * @return $this
     */
    public function setEstimatedDurationInMillis($estimated_duration_in_millis = null)
    {
        $this->estimated_duration_in_millis = $estimated_duration_in_millis;

        return $this;
    }

    /**
     * Gets name.
     *
     * @return string|null
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Sets name.
     *
     * @param string|null $name
     *
     * @return $this
     */
    public function setName($name = null)
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets weather_score.
     *
     * @return int|null
     */
    public function getWeatherScore()
    {
        return $this->weather_score;
    }

    /**
     * Sets weather_score.
     *
     * @param int|null $weather_score
     *
     * @return $this
     */
    public function setWeatherScore($weather_score = null)
    {
        $this->weather_score = $weather_score;

        return $this;
    }

    /**
     * Gets latest_run.
     *
     * @return PipelineBranchesitemlatestRun|null
     */
    public function getLatestRun()
    {
        return $this->latest_run;
    }

    /**
     * Sets latest_run.
     *
     * @param PipelineBranchesitemlatestRun|null $latest_run
     *
     * @return $this
     */
    public function setLatestRun(PipelineBranchesitemlatestRun $latest_run = null)
    {
        $this->latest_run = $latest_run;

        return $this;
    }

    /**
     * Gets organization.
     *
     * @return string|null
     */
    public function getOrganization()
    {
        return $this->organization;
    }

    /**
     * Sets organization.
     *
     * @param string|null $organization
     *
     * @return $this
     */
    public function setOrganization($organization = null)
    {
        $this->organization = $organization;

        return $this;
    }

    /**
     * Gets pull_request.
     *
     * @return PipelineBranchesitempullRequest|null
     */
    public function getPullRequest()
    {
        return $this->pull_request;
    }

    /**
     * Sets pull_request.
     *
     * @param PipelineBranchesitempullRequest|null $pull_request
     *
     * @return $this
     */
    public function setPullRequest(PipelineBranchesitempullRequest $pull_request = null)
    {
        $this->pull_request = $pull_request;

        return $this;
    }

    /**
     * Gets total_number_of_pull_requests.
     *
     * @return int|null
     */
    public function getTotalNumberOfPullRequests()
    {
        return $this->total_number_of_pull_requests;
    }

    /**
     * Sets total_number_of_pull_requests.
     *
     * @param int|null $total_number_of_pull_requests
     *
     * @return $this
     */
    public function setTotalNumberOfPullRequests($total_number_of_pull_requests = null)
    {
        $this->total_number_of_pull_requests = $total_number_of_pull_requests;

        return $this;
    }

    /**
     * Gets _class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->_class;
    }

    /**
     * Sets _class.
     *
     * @param string|null $_class
     *
     * @return $this
     */
    public function setClass($_class = null)
    {
        $this->_class = $_class;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->$offset);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->$offset) ? $this->$offset : null;
    }

    /**
     * Sets value based on offset.
     * @param  string  $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        $this->$offset = $value;
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        $this->$offset = null;
    }
}

