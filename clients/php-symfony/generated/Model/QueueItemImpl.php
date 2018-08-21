<?php
/**
 * QueueItemImpl
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the QueueItemImpl model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class QueueItemImpl 
{
        /**
     * @var string|null
     * @SerializedName("_class")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $class;

    /**
     * @var int|null
     * @SerializedName("expectedBuildNumber")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $expectedBuildNumber;

    /**
     * @var string|null
     * @SerializedName("id")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $id;

    /**
     * @var string|null
     * @SerializedName("pipeline")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $pipeline;

    /**
     * @var int|null
     * @SerializedName("queuedTime")
     * @Assert\Type("int")
     * @Type("int")
     */
    protected $queuedTime;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->class = isset($data['class']) ? $data['class'] : null;
        $this->expectedBuildNumber = isset($data['expectedBuildNumber']) ? $data['expectedBuildNumber'] : null;
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->pipeline = isset($data['pipeline']) ? $data['pipeline'] : null;
        $this->queuedTime = isset($data['queuedTime']) ? $data['queuedTime'] : null;
    }

    /**
     * Gets class.
     *
     * @return string|null
     */
    public function getClass()
    {
        return $this->class;
    }

    /**
     * Sets class.
     *
     * @param string|null $class
     *
     * @return $this
     */
    public function setClass($class = null)
    {
        $this->class = $class;

        return $this;
    }

    /**
     * Gets expectedBuildNumber.
     *
     * @return int|null
     */
    public function getExpectedBuildNumber()
    {
        return $this->expectedBuildNumber;
    }

    /**
     * Sets expectedBuildNumber.
     *
     * @param int|null $expectedBuildNumber
     *
     * @return $this
     */
    public function setExpectedBuildNumber($expectedBuildNumber = null)
    {
        $this->expectedBuildNumber = $expectedBuildNumber;

        return $this;
    }

    /**
     * Gets id.
     *
     * @return string|null
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string|null $id
     *
     * @return $this
     */
    public function setId($id = null)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets pipeline.
     *
     * @return string|null
     */
    public function getPipeline()
    {
        return $this->pipeline;
    }

    /**
     * Sets pipeline.
     *
     * @param string|null $pipeline
     *
     * @return $this
     */
    public function setPipeline($pipeline = null)
    {
        $this->pipeline = $pipeline;

        return $this;
    }

    /**
     * Gets queuedTime.
     *
     * @return int|null
     */
    public function getQueuedTime()
    {
        return $this->queuedTime;
    }

    /**
     * Sets queuedTime.
     *
     * @param int|null $queuedTime
     *
     * @return $this
     */
    public function setQueuedTime($queuedTime = null)
    {
        $this->queuedTime = $queuedTime;

        return $this;
    }
}

