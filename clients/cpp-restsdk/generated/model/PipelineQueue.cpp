/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "PipelineQueue.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelineQueue::PipelineQueue()
{
}

PipelineQueue::~PipelineQueue()
{
}

void PipelineQueue::validate()
{
    // TODO: implement validation
}

web::json::value PipelineQueue::toJson() const
{
    web::json::value val = this->null<QueueItemImpl>::toJson();


    return val;
}

void PipelineQueue::fromJson(web::json::value& val)
{
    this->null<QueueItemImpl>::fromJson(val);

}

void PipelineQueue::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void PipelineQueue::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

}
}
}
}

