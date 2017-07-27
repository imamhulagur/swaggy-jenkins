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



#include "HudsonsecuritycsrfDefaultCrumbIssuer.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HudsonsecuritycsrfDefaultCrumbIssuer::HudsonsecuritycsrfDefaultCrumbIssuer()
{
    m__class = U("");
    m__classIsSet = false;
    m_Crumb = U("");
    m_CrumbIsSet = false;
    m_CrumbRequestField = U("");
    m_CrumbRequestFieldIsSet = false;
    
}

HudsonsecuritycsrfDefaultCrumbIssuer::~HudsonsecuritycsrfDefaultCrumbIssuer()
{
}

void HudsonsecuritycsrfDefaultCrumbIssuer::validate()
{
    // TODO: implement validation
}

web::json::value HudsonsecuritycsrfDefaultCrumbIssuer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_CrumbIsSet)
    {
        val[U("crumb")] = ModelBase::toJson(m_Crumb);
    }
    if(m_CrumbRequestFieldIsSet)
    {
        val[U("crumbRequestField")] = ModelBase::toJson(m_CrumbRequestField);
    }
    

    return val;
}

void HudsonsecuritycsrfDefaultCrumbIssuer::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("crumb")))
    {
        setCrumb(ModelBase::stringFromJson(val[U("crumb")]));
        
    }
    if(val.has_field(U("crumbRequestField")))
    {
        setCrumbRequestField(ModelBase::stringFromJson(val[U("crumbRequestField")]));
        
    }
    
}

void HudsonsecuritycsrfDefaultCrumbIssuer::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_CrumbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("crumb"), m_Crumb));
        
    }
    if(m_CrumbRequestFieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("crumbRequestField"), m_CrumbRequestField));
        
    }
    
}

void HudsonsecuritycsrfDefaultCrumbIssuer::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
        
    }
    if(multipart->hasContent(U("crumb")))
    {
        setCrumb(ModelBase::stringFromHttpContent(multipart->getContent(U("crumb"))));
        
    }
    if(multipart->hasContent(U("crumbRequestField")))
    {
        setCrumbRequestField(ModelBase::stringFromHttpContent(multipart->getContent(U("crumbRequestField"))));
        
    }
    
}


utility::string_t HudsonsecuritycsrfDefaultCrumbIssuer::getClass() const
{
    return m__class;
}
void HudsonsecuritycsrfDefaultCrumbIssuer::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonsecuritycsrfDefaultCrumbIssuer::_classIsSet() const
{
    return m__classIsSet;
}
void HudsonsecuritycsrfDefaultCrumbIssuer::unset_class()
{
    m__classIsSet = false;
}
utility::string_t HudsonsecuritycsrfDefaultCrumbIssuer::getCrumb() const
{
    return m_Crumb;
}
void HudsonsecuritycsrfDefaultCrumbIssuer::setCrumb(utility::string_t value)
{
    m_Crumb = value;
    m_CrumbIsSet = true;
}
bool HudsonsecuritycsrfDefaultCrumbIssuer::crumbIsSet() const
{
    return m_CrumbIsSet;
}
void HudsonsecuritycsrfDefaultCrumbIssuer::unsetCrumb()
{
    m_CrumbIsSet = false;
}
utility::string_t HudsonsecuritycsrfDefaultCrumbIssuer::getCrumbRequestField() const
{
    return m_CrumbRequestField;
}
void HudsonsecuritycsrfDefaultCrumbIssuer::setCrumbRequestField(utility::string_t value)
{
    m_CrumbRequestField = value;
    m_CrumbRequestFieldIsSet = true;
}
bool HudsonsecuritycsrfDefaultCrumbIssuer::crumbRequestFieldIsSet() const
{
    return m_CrumbRequestFieldIsSet;
}
void HudsonsecuritycsrfDefaultCrumbIssuer::unsetCrumbRequestField()
{
    m_CrumbRequestFieldIsSet = false;
}

}
}
}
}

