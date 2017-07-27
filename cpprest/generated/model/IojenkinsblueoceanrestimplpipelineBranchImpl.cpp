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



#include "IojenkinsblueoceanrestimplpipelineBranchImpl.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IojenkinsblueoceanrestimplpipelineBranchImpl::IojenkinsblueoceanrestimplpipelineBranchImpl()
{
    m__class = U("");
    m__classIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_FullDisplayName = U("");
    m_FullDisplayNameIsSet = false;
    m_FullName = U("");
    m_FullNameIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Organization = U("");
    m_OrganizationIsSet = false;
    m_ParametersIsSet = false;
    m_PermissionsIsSet = false;
    m_WeatherScore = 0;
    m_WeatherScoreIsSet = false;
    m_PullRequest = U("");
    m_PullRequestIsSet = false;
    
}

IojenkinsblueoceanrestimplpipelineBranchImpl::~IojenkinsblueoceanrestimplpipelineBranchImpl()
{
}

void IojenkinsblueoceanrestimplpipelineBranchImpl::validate()
{
    // TODO: implement validation
}

web::json::value IojenkinsblueoceanrestimplpipelineBranchImpl::toJson() const
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
    if(m_FullDisplayNameIsSet)
    {
        val[U("fullDisplayName")] = ModelBase::toJson(m_FullDisplayName);
    }
    if(m_FullNameIsSet)
    {
        val[U("fullName")] = ModelBase::toJson(m_FullName);
    }
    if(m_NameIsSet)
    {
        val[U("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OrganizationIsSet)
    {
        val[U("organization")] = ModelBase::toJson(m_Organization);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Parameters )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("parameters")] = web::json::value::array(jsonArray);
        }
    }
    if(m_PermissionsIsSet)
    {
        val[U("permissions")] = ModelBase::toJson(m_Permissions);
    }
    if(m_WeatherScoreIsSet)
    {
        val[U("weatherScore")] = ModelBase::toJson(m_WeatherScore);
    }
    if(m_PullRequestIsSet)
    {
        val[U("pullRequest")] = ModelBase::toJson(m_PullRequest);
    }
    

    return val;
}

void IojenkinsblueoceanrestimplpipelineBranchImpl::fromJson(web::json::value& val)
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
    if(val.has_field(U("fullDisplayName")))
    {
        setFullDisplayName(ModelBase::stringFromJson(val[U("fullDisplayName")]));
        
    }
    if(val.has_field(U("fullName")))
    {
        setFullName(ModelBase::stringFromJson(val[U("fullName")]));
        
    }
    if(val.has_field(U("name")))
    {
        setName(ModelBase::stringFromJson(val[U("name")]));
        
    }
    if(val.has_field(U("organization")))
    {
        setOrganization(ModelBase::stringFromJson(val[U("organization")]));
        
    }
    {
        m_Parameters.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("parameters")))
        {
        for( auto& item : val[U("parameters")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Parameters.push_back( std::shared_ptr<HudsonmodelStringParameterDefinition>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelStringParameterDefinition> newItem(new HudsonmodelStringParameterDefinition());
                newItem->fromJson(item);
                m_Parameters.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("permissions")))
    {
        if(!val[U("permissions")].is_null())
        {
            std::shared_ptr<IojenkinsblueoceanrestimplpipelineBranchImpl_permissions> newItem(new IojenkinsblueoceanrestimplpipelineBranchImpl_permissions());
            newItem->fromJson(val[U("permissions")]);
            setPermissions( newItem );
        }
        
    }
    if(val.has_field(U("weatherScore")))
    {
        setWeatherScore(ModelBase::int32_tFromJson(val[U("weatherScore")]));
    }
    if(val.has_field(U("pullRequest")))
    {
        setPullRequest(ModelBase::stringFromJson(val[U("pullRequest")]));
        
    }
    
}

void IojenkinsblueoceanrestimplpipelineBranchImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_FullDisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fullDisplayName"), m_FullDisplayName));
        
    }
    if(m_FullNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fullName"), m_FullName));
        
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("name"), m_Name));
        
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("organization"), m_Organization));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Parameters )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("parameters"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_PermissionsIsSet)
    {
        if (m_Permissions.get())
        {
            m_Permissions->toMultipart(multipart, U("permissions."));
        }
        
    }
    if(m_WeatherScoreIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("weatherScore"), m_WeatherScore));
    }
    if(m_PullRequestIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("pullRequest"), m_PullRequest));
        
    }
    
}

void IojenkinsblueoceanrestimplpipelineBranchImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("fullDisplayName")))
    {
        setFullDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("fullDisplayName"))));
        
    }
    if(multipart->hasContent(U("fullName")))
    {
        setFullName(ModelBase::stringFromHttpContent(multipart->getContent(U("fullName"))));
        
    }
    if(multipart->hasContent(U("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(U("name"))));
        
    }
    if(multipart->hasContent(U("organization")))
    {
        setOrganization(ModelBase::stringFromHttpContent(multipart->getContent(U("organization"))));
        
    }
    {
        m_Parameters.clear();
        if(multipart->hasContent(U("parameters")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("parameters"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Parameters.push_back( std::shared_ptr<HudsonmodelStringParameterDefinition>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelStringParameterDefinition> newItem(new HudsonmodelStringParameterDefinition());
                newItem->fromJson(item);
                m_Parameters.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("permissions")))
    {
        if(multipart->hasContent(U("permissions")))
        {
            std::shared_ptr<IojenkinsblueoceanrestimplpipelineBranchImpl_permissions> newItem(new IojenkinsblueoceanrestimplpipelineBranchImpl_permissions());
            newItem->fromMultiPart(multipart, U("permissions."));
            setPermissions( newItem );
        }
        
    }
    if(multipart->hasContent(U("weatherScore")))
    {
        setWeatherScore(ModelBase::int32_tFromHttpContent(multipart->getContent(U("weatherScore"))));
    }
    if(multipart->hasContent(U("pullRequest")))
    {
        setPullRequest(ModelBase::stringFromHttpContent(multipart->getContent(U("pullRequest"))));
        
    }
    
}


utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl::getClass() const
{
    return m__class;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::_classIsSet() const
{
    return m__classIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unset_class()
{
    m__classIsSet = false;
}
utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl::getDisplayName() const
{
    return m_DisplayName;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
int32_t IojenkinsblueoceanrestimplpipelineBranchImpl::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}
utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl::getFullDisplayName() const
{
    return m_FullDisplayName;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setFullDisplayName(utility::string_t value)
{
    m_FullDisplayName = value;
    m_FullDisplayNameIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::fullDisplayNameIsSet() const
{
    return m_FullDisplayNameIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetFullDisplayName()
{
    m_FullDisplayNameIsSet = false;
}
utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl::getFullName() const
{
    return m_FullName;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setFullName(utility::string_t value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetFullName()
{
    m_FullNameIsSet = false;
}
utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl::getName() const
{
    return m_Name;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::nameIsSet() const
{
    return m_NameIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl::getOrganization() const
{
    return m_Organization;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setOrganization(utility::string_t value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::organizationIsSet() const
{
    return m_OrganizationIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
std::vector<std::shared_ptr<HudsonmodelStringParameterDefinition>>& IojenkinsblueoceanrestimplpipelineBranchImpl::getParameters()
{
    return m_Parameters;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::parametersIsSet() const
{
    return m_ParametersIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetParameters()
{
    m_ParametersIsSet = false;
}
std::shared_ptr<IojenkinsblueoceanrestimplpipelineBranchImpl_permissions> IojenkinsblueoceanrestimplpipelineBranchImpl::getPermissions() const
{
    return m_Permissions;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setPermissions(std::shared_ptr<IojenkinsblueoceanrestimplpipelineBranchImpl_permissions> value)
{
    m_Permissions = value;
    m_PermissionsIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::permissionsIsSet() const
{
    return m_PermissionsIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetPermissions()
{
    m_PermissionsIsSet = false;
}
int32_t IojenkinsblueoceanrestimplpipelineBranchImpl::getWeatherScore() const
{
    return m_WeatherScore;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
    m_WeatherScoreIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::weatherScoreIsSet() const
{
    return m_WeatherScoreIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetWeatherScore()
{
    m_WeatherScoreIsSet = false;
}
utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl::getPullRequest() const
{
    return m_PullRequest;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::setPullRequest(utility::string_t value)
{
    m_PullRequest = value;
    m_PullRequestIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl::pullRequestIsSet() const
{
    return m_PullRequestIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl::unsetPullRequest()
{
    m_PullRequestIsSet = false;
}

}
}
}
}

