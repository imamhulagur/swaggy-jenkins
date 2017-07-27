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



#include "IojenkinsblueoceanserviceembeddedrestPipelineImpl.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IojenkinsblueoceanserviceembeddedrestPipelineImpl::IojenkinsblueoceanserviceembeddedrestPipelineImpl()
{
    m__class = U("");
    m__classIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_FullName = U("");
    m_FullNameIsSet = false;
    m_LatestRun = U("");
    m_LatestRunIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Organization = U("");
    m_OrganizationIsSet = false;
    m_WeatherScore = 0;
    m_WeatherScoreIsSet = false;
    
}

IojenkinsblueoceanserviceembeddedrestPipelineImpl::~IojenkinsblueoceanserviceembeddedrestPipelineImpl()
{
}

void IojenkinsblueoceanserviceembeddedrestPipelineImpl::validate()
{
    // TODO: implement validation
}

web::json::value IojenkinsblueoceanserviceembeddedrestPipelineImpl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_DisplayNameIsSet)
    {
        val[U("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        val[U("estimatedDurationInMillis")] = ModelBase::toJson(m_EstimatedDurationInMillis);
    }
    if(m_FullNameIsSet)
    {
        val[U("fullName")] = ModelBase::toJson(m_FullName);
    }
    if(m_LatestRunIsSet)
    {
        val[U("latestRun")] = ModelBase::toJson(m_LatestRun);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OrganizationIsSet)
    {
        val[U("organization")] = ModelBase::toJson(m_Organization);
    }
    if(m_WeatherScoreIsSet)
    {
        val[U("weatherScore")] = ModelBase::toJson(m_WeatherScore);
    }
    

    return val;
}

void IojenkinsblueoceanserviceembeddedrestPipelineImpl::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("displayName")]));
        
    }
    if(val.has_field(U("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromJson(val[U("estimatedDurationInMillis")]));
    }
    if(val.has_field(U("fullName")))
    {
        setFullName(ModelBase::stringFromJson(val[U("fullName")]));
        
    }
    if(val.has_field(U("latestRun")))
    {
        setLatestRun(ModelBase::stringFromJson(val[U("latestRun")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("organization")))
    {
        setOrganization(ModelBase::stringFromJson(val[U("organization")]));
        
    }
    if(val.has_field(U("weatherScore")))
    {
        setWeatherScore(ModelBase::int32_tFromJson(val[U("weatherScore")]));
    }
    
}

void IojenkinsblueoceanserviceembeddedrestPipelineImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayName"), m_DisplayName));
        
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("estimatedDurationInMillis"), m_EstimatedDurationInMillis));
    }
    if(m_FullNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fullName"), m_FullName));
        
    }
    if(m_LatestRunIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("latestRun"), m_LatestRun));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("organization"), m_Organization));
        
    }
    if(m_WeatherScoreIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("weatherScore"), m_WeatherScore));
    }
    
}

void IojenkinsblueoceanserviceembeddedrestPipelineImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("displayName"))));
        
    }
    if(multipart->hasContent(U("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(U("estimatedDurationInMillis"))));
    }
    if(multipart->hasContent(U("fullName")))
    {
        setFullName(ModelBase::stringFromHttpContent(multipart->getContent(U("fullName"))));
        
    }
    if(multipart->hasContent(U("latestRun")))
    {
        setLatestRun(ModelBase::stringFromHttpContent(multipart->getContent(U("latestRun"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    if(multipart->hasContent(U("organization")))
    {
        setOrganization(ModelBase::stringFromHttpContent(multipart->getContent(U("organization"))));
        
    }
    if(multipart->hasContent(U("weatherScore")))
    {
        setWeatherScore(ModelBase::int32_tFromHttpContent(multipart->getContent(U("weatherScore"))));
    }
    
}


utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getClass() const
{
    return m__class;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::_classIsSet() const
{
    return m__classIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unset_class()
{
    m__classIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getDisplayName() const
{
    return m_DisplayName;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
int32_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getFullName() const
{
    return m_FullName;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setFullName(utility::string_t value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unsetFullName()
{
    m_FullNameIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getLatestRun() const
{
    return m_LatestRun;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setLatestRun(utility::string_t value)
{
    m_LatestRun = value;
    m_LatestRunIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::latestRunIsSet() const
{
    return m_LatestRunIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unsetLatestRun()
{
    m_LatestRunIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getName() const
{
    return m_Name;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::nameIsSet() const
{
    return m_NameIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getOrganization() const
{
    return m_Organization;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setOrganization(utility::string_t value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::organizationIsSet() const
{
    return m_OrganizationIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
int32_t IojenkinsblueoceanserviceembeddedrestPipelineImpl::getWeatherScore() const
{
    return m_WeatherScore;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
    m_WeatherScoreIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineImpl::weatherScoreIsSet() const
{
    return m_WeatherScoreIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineImpl::unsetWeatherScore()
{
    m_WeatherScoreIsSet = false;
}

}
}
}
}

