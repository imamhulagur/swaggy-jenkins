/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PipelineStepImpllinks.h
 *
 * 
 */

#ifndef PipelineStepImpllinks_H_
#define PipelineStepImpllinks_H_


#include "ModelBase.h"

#include <string>
#include "Link.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineStepImpllinks
    : public ModelBase
{
public:
    PipelineStepImpllinks();
    virtual ~PipelineStepImpllinks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineStepImpllinks members

    /// <summary>
    /// 
    /// </summary>
    Link getSelf() const;
    void setSelf(Link const& value);
    bool selfIsSet() const;
    void unsetSelf();
    /// <summary>
    /// 
    /// </summary>
    Link getActions() const;
    void setActions(Link const& value);
    bool actionsIsSet() const;
    void unsetActions();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();

protected:
    Link m_Self;
    bool m_SelfIsSet;
    Link m_Actions;
    bool m_ActionsIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelineStepImpllinks_H_ */