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
 * IojenkinsblueoceanresthalLink.h
 *
 * 
 */

#ifndef IojenkinsblueoceanresthalLink_H_
#define IojenkinsblueoceanresthalLink_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  IojenkinsblueoceanresthalLink
    : public ModelBase
{
public:
    IojenkinsblueoceanresthalLink();
    virtual ~IojenkinsblueoceanresthalLink();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IojenkinsblueoceanresthalLink members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    void setClass(utility::string_t value);
    bool _classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHref() const;
    void setHref(utility::string_t value);
    bool hrefIsSet() const;
    void unsetHref();

protected:
    utility::string_t m__class;
    bool m__classIsSet;
utility::string_t m_Href;
    bool m_HrefIsSet;
};

}
}
}
}

#endif /* IojenkinsblueoceanresthalLink_H_ */
