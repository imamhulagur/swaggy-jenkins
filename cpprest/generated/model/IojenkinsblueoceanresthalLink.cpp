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



#include "IojenkinsblueoceanresthalLink.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IojenkinsblueoceanresthalLink::IojenkinsblueoceanresthalLink()
{
    m__class = U("");
    m__classIsSet = false;
    m_Href = U("");
    m_HrefIsSet = false;
    
}

IojenkinsblueoceanresthalLink::~IojenkinsblueoceanresthalLink()
{
}

void IojenkinsblueoceanresthalLink::validate()
{
    // TODO: implement validation
}

web::json::value IojenkinsblueoceanresthalLink::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_HrefIsSet)
    {
        val[U("href")] = ModelBase::toJson(m_Href);
    }
    

    return val;
}

void IojenkinsblueoceanresthalLink::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("href")))
    {
        setHref(ModelBase::stringFromJson(val[U("href")]));
        
    }
    
}

void IojenkinsblueoceanresthalLink::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_HrefIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("href"), m_Href));
        
    }
    
}

void IojenkinsblueoceanresthalLink::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("href")))
    {
        setHref(ModelBase::stringFromHttpContent(multipart->getContent(U("href"))));
        
    }
    
}


utility::string_t IojenkinsblueoceanresthalLink::getClass() const
{
    return m__class;
}
void IojenkinsblueoceanresthalLink::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool IojenkinsblueoceanresthalLink::_classIsSet() const
{
    return m__classIsSet;
}
void IojenkinsblueoceanresthalLink::unset_class()
{
    m__classIsSet = false;
}
utility::string_t IojenkinsblueoceanresthalLink::getHref() const
{
    return m_Href;
}
void IojenkinsblueoceanresthalLink::setHref(utility::string_t value)
{
    m_Href = value;
    m_HrefIsSet = true;
}
bool IojenkinsblueoceanresthalLink::hrefIsSet() const
{
    return m_HrefIsSet;
}
void IojenkinsblueoceanresthalLink::unsetHref()
{
    m_HrefIsSet = false;
}

}
}
}
}

