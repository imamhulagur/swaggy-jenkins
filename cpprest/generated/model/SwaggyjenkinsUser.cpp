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



#include "SwaggyjenkinsUser.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

SwaggyjenkinsUser::SwaggyjenkinsUser()
{
    m__class = U("");
    m__classIsSet = false;
    m_Id = U("");
    m_IdIsSet = false;
    m_FullName = U("");
    m_FullNameIsSet = false;
    m_Email = U("");
    m_EmailIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    
}

SwaggyjenkinsUser::~SwaggyjenkinsUser()
{
}

void SwaggyjenkinsUser::validate()
{
    // TODO: implement validation
}

web::json::value SwaggyjenkinsUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_IdIsSet)
    {
        val[U("id")] = ModelBase::toJson(m_Id);
    }
    if(m_FullNameIsSet)
    {
        val[U("fullName")] = ModelBase::toJson(m_FullName);
    }
    if(m_EmailIsSet)
    {
        val[U("email")] = ModelBase::toJson(m_Email);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    

    return val;
}

void SwaggyjenkinsUser::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("id")))
    {
        setId(ModelBase::stringFromJson(val[U("id")]));
        
    }
    if(val.has_field(U("fullName")))
    {
        setFullName(ModelBase::stringFromJson(val[U("fullName")]));
        
    }
    if(val.has_field(U("email")))
    {
        setEmail(ModelBase::stringFromJson(val[U("email")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    
}

void SwaggyjenkinsUser::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("id"), m_Id));
        
    }
    if(m_FullNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fullName"), m_FullName));
        
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("email"), m_Email));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    
}

void SwaggyjenkinsUser::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(U("id"))));
        
    }
    if(multipart->hasContent(U("fullName")))
    {
        setFullName(ModelBase::stringFromHttpContent(multipart->getContent(U("fullName"))));
        
    }
    if(multipart->hasContent(U("email")))
    {
        setEmail(ModelBase::stringFromHttpContent(multipart->getContent(U("email"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    
}


utility::string_t SwaggyjenkinsUser::getClass() const
{
    return m__class;
}
void SwaggyjenkinsUser::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool SwaggyjenkinsUser::_classIsSet() const
{
    return m__classIsSet;
}
void SwaggyjenkinsUser::unset_class()
{
    m__classIsSet = false;
}
utility::string_t SwaggyjenkinsUser::getId() const
{
    return m_Id;
}
void SwaggyjenkinsUser::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool SwaggyjenkinsUser::idIsSet() const
{
    return m_IdIsSet;
}
void SwaggyjenkinsUser::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SwaggyjenkinsUser::getFullName() const
{
    return m_FullName;
}
void SwaggyjenkinsUser::setFullName(utility::string_t value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool SwaggyjenkinsUser::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void SwaggyjenkinsUser::unsetFullName()
{
    m_FullNameIsSet = false;
}
utility::string_t SwaggyjenkinsUser::getEmail() const
{
    return m_Email;
}
void SwaggyjenkinsUser::setEmail(utility::string_t value)
{
    m_Email = value;
    m_EmailIsSet = true;
}
bool SwaggyjenkinsUser::emailIsSet() const
{
    return m_EmailIsSet;
}
void SwaggyjenkinsUser::unsetEmail()
{
    m_EmailIsSet = false;
}
utility::string_t SwaggyjenkinsUser::getName() const
{
    return m_Name;
}
void SwaggyjenkinsUser::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool SwaggyjenkinsUser::nameIsSet() const
{
    return m_NameIsSet;
}
void SwaggyjenkinsUser::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

