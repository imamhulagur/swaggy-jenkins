/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PipelineRunNodes.h
 *
 * 
 */

#ifndef PipelineRunNodes_H_
#define PipelineRunNodes_H_


#include "ModelBase.h"

#include "PipelineRunNode.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRunNodes
    : public ModelBase
{
public:
    PipelineRunNodes();
    virtual ~PipelineRunNodes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineRunNodes members


protected:
};

}
}
}
}

#endif /* PipelineRunNodes_H_ */
