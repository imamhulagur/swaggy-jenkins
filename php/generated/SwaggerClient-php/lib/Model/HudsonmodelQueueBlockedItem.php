<?php
/**
 * HudsonmodelQueueBlockedItem
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swaagger Codegen team
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

namespace Swagger\Client\Model;

use \ArrayAccess;

/**
 * HudsonmodelQueueBlockedItem Class Doc Comment
 *
 * @category    Class
 * @package     Swagger\Client
 * @author      Swagger Codegen team
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class HudsonmodelQueueBlockedItem implements ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      * @var string
      */
    protected static $swaggerModelName = 'hudsonmodelQueueBlockedItem';

    /**
      * Array of property to type mappings. Used for (de)serialization
      * @var string[]
      */
    protected static $swaggerTypes = [
        '_class' => 'string',
        'actions' => '\Swagger\Client\Model\HudsonmodelCauseAction[]',
        'blocked' => 'bool',
        'buildable' => 'bool',
        'id' => 'int',
        'in_queue_since' => 'int',
        'params' => 'string',
        'stuck' => 'bool',
        'task' => '\Swagger\Client\Model\HudsonmodelFreeStyleProject',
        'url' => 'string',
        'why' => 'string',
        'buildable_start_milliseconds' => 'int'
    ];

    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of attributes where the key is the local name, and the value is the original name
     * @var string[]
     */
    protected static $attributeMap = [
        '_class' => '_class',
        'actions' => 'actions',
        'blocked' => 'blocked',
        'buildable' => 'buildable',
        'id' => 'id',
        'in_queue_since' => 'inQueueSince',
        'params' => 'params',
        'stuck' => 'stuck',
        'task' => 'task',
        'url' => 'url',
        'why' => 'why',
        'buildable_start_milliseconds' => 'buildableStartMilliseconds'
    ];


    /**
     * Array of attributes to setter functions (for deserialization of responses)
     * @var string[]
     */
    protected static $setters = [
        '_class' => 'setClass',
        'actions' => 'setActions',
        'blocked' => 'setBlocked',
        'buildable' => 'setBuildable',
        'id' => 'setId',
        'in_queue_since' => 'setInQueueSince',
        'params' => 'setParams',
        'stuck' => 'setStuck',
        'task' => 'setTask',
        'url' => 'setUrl',
        'why' => 'setWhy',
        'buildable_start_milliseconds' => 'setBuildableStartMilliseconds'
    ];


    /**
     * Array of attributes to getter functions (for serialization of requests)
     * @var string[]
     */
    protected static $getters = [
        '_class' => 'getClass',
        'actions' => 'getActions',
        'blocked' => 'getBlocked',
        'buildable' => 'getBuildable',
        'id' => 'getId',
        'in_queue_since' => 'getInQueueSince',
        'params' => 'getParams',
        'stuck' => 'getStuck',
        'task' => 'getTask',
        'url' => 'getUrl',
        'why' => 'getWhy',
        'buildable_start_milliseconds' => 'getBuildableStartMilliseconds'
    ];

    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    public static function setters()
    {
        return self::$setters;
    }

    public static function getters()
    {
        return self::$getters;
    }

    

    

    /**
     * Associative array for storing property values
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['_class'] = isset($data['_class']) ? $data['_class'] : null;
        $this->container['actions'] = isset($data['actions']) ? $data['actions'] : null;
        $this->container['blocked'] = isset($data['blocked']) ? $data['blocked'] : null;
        $this->container['buildable'] = isset($data['buildable']) ? $data['buildable'] : null;
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['in_queue_since'] = isset($data['in_queue_since']) ? $data['in_queue_since'] : null;
        $this->container['params'] = isset($data['params']) ? $data['params'] : null;
        $this->container['stuck'] = isset($data['stuck']) ? $data['stuck'] : null;
        $this->container['task'] = isset($data['task']) ? $data['task'] : null;
        $this->container['url'] = isset($data['url']) ? $data['url'] : null;
        $this->container['why'] = isset($data['why']) ? $data['why'] : null;
        $this->container['buildable_start_milliseconds'] = isset($data['buildable_start_milliseconds']) ? $data['buildable_start_milliseconds'] : null;
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
     * validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {

        return true;
    }


    /**
     * Gets _class
     * @return string
     */
    public function getClass()
    {
        return $this->container['_class'];
    }

    /**
     * Sets _class
     * @param string $_class
     * @return $this
     */
    public function setClass($_class)
    {
        $this->container['_class'] = $_class;

        return $this;
    }

    /**
     * Gets actions
     * @return \Swagger\Client\Model\HudsonmodelCauseAction[]
     */
    public function getActions()
    {
        return $this->container['actions'];
    }

    /**
     * Sets actions
     * @param \Swagger\Client\Model\HudsonmodelCauseAction[] $actions
     * @return $this
     */
    public function setActions($actions)
    {
        $this->container['actions'] = $actions;

        return $this;
    }

    /**
     * Gets blocked
     * @return bool
     */
    public function getBlocked()
    {
        return $this->container['blocked'];
    }

    /**
     * Sets blocked
     * @param bool $blocked
     * @return $this
     */
    public function setBlocked($blocked)
    {
        $this->container['blocked'] = $blocked;

        return $this;
    }

    /**
     * Gets buildable
     * @return bool
     */
    public function getBuildable()
    {
        return $this->container['buildable'];
    }

    /**
     * Sets buildable
     * @param bool $buildable
     * @return $this
     */
    public function setBuildable($buildable)
    {
        $this->container['buildable'] = $buildable;

        return $this;
    }

    /**
     * Gets id
     * @return int
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     * @param int $id
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets in_queue_since
     * @return int
     */
    public function getInQueueSince()
    {
        return $this->container['in_queue_since'];
    }

    /**
     * Sets in_queue_since
     * @param int $in_queue_since
     * @return $this
     */
    public function setInQueueSince($in_queue_since)
    {
        $this->container['in_queue_since'] = $in_queue_since;

        return $this;
    }

    /**
     * Gets params
     * @return string
     */
    public function getParams()
    {
        return $this->container['params'];
    }

    /**
     * Sets params
     * @param string $params
     * @return $this
     */
    public function setParams($params)
    {
        $this->container['params'] = $params;

        return $this;
    }

    /**
     * Gets stuck
     * @return bool
     */
    public function getStuck()
    {
        return $this->container['stuck'];
    }

    /**
     * Sets stuck
     * @param bool $stuck
     * @return $this
     */
    public function setStuck($stuck)
    {
        $this->container['stuck'] = $stuck;

        return $this;
    }

    /**
     * Gets task
     * @return \Swagger\Client\Model\HudsonmodelFreeStyleProject
     */
    public function getTask()
    {
        return $this->container['task'];
    }

    /**
     * Sets task
     * @param \Swagger\Client\Model\HudsonmodelFreeStyleProject $task
     * @return $this
     */
    public function setTask($task)
    {
        $this->container['task'] = $task;

        return $this;
    }

    /**
     * Gets url
     * @return string
     */
    public function getUrl()
    {
        return $this->container['url'];
    }

    /**
     * Sets url
     * @param string $url
     * @return $this
     */
    public function setUrl($url)
    {
        $this->container['url'] = $url;

        return $this;
    }

    /**
     * Gets why
     * @return string
     */
    public function getWhy()
    {
        return $this->container['why'];
    }

    /**
     * Sets why
     * @param string $why
     * @return $this
     */
    public function setWhy($why)
    {
        $this->container['why'] = $why;

        return $this;
    }

    /**
     * Gets buildable_start_milliseconds
     * @return int
     */
    public function getBuildableStartMilliseconds()
    {
        return $this->container['buildable_start_milliseconds'];
    }

    /**
     * Sets buildable_start_milliseconds
     * @param int $buildable_start_milliseconds
     * @return $this
     */
    public function setBuildableStartMilliseconds($buildable_start_milliseconds)
    {
        $this->container['buildable_start_milliseconds'] = $buildable_start_milliseconds;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     * @param  integer $offset Offset
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     * @param  integer $offset Offset
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     * @param  integer $offset Offset
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this), JSON_PRETTY_PRINT);
        }

        return json_encode(\Swagger\Client\ObjectSerializer::sanitizeForSerialization($this));
    }
}


