/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links.h
 *
 * 
 */

#ifndef IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links_H_
#define IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links_H_


#include "ModelBase.h"

#include "IojenkinsblueoceanresthalLink.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links
    : public ModelBase
{
public:
    IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links();
    virtual ~IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<IojenkinsblueoceanresthalLink> getSelf() const;
    void setSelf(std::shared_ptr<IojenkinsblueoceanresthalLink> value);
    bool selfIsSet() const;
    void unsetSelf();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    void setClass(utility::string_t value);
    bool _classIsSet() const;
    void unset_class();

protected:
    std::shared_ptr<IojenkinsblueoceanresthalLink> m_Self;
    bool m_SelfIsSet;
utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links_H_ */
