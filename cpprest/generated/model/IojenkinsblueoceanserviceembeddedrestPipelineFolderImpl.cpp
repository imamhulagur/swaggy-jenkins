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



#include "IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl()
{
    m__class = U("");
    m__classIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_FullName = U("");
    m_FullNameIsSet = false;
    m_Name = U("");
    m_NameIsSet = false;
    m_Organization = U("");
    m_OrganizationIsSet = false;
    m_NumberOfFolders = 0;
    m_NumberOfFoldersIsSet = false;
    m_NumberOfPipelines = 0;
    m_NumberOfPipelinesIsSet = false;
    
}

IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::~IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl()
{
}

void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::validate()
{
    // TODO: implement validation
}

web::json::value IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::toJson() const
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
    if(m_NumberOfFoldersIsSet)
    {
        val[U("numberOfFolders")] = ModelBase::toJson(m_NumberOfFolders);
    }
    if(m_NumberOfPipelinesIsSet)
    {
        val[U("numberOfPipelines")] = ModelBase::toJson(m_NumberOfPipelines);
    }
    

    return val;
}

void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("displayName")]));
        
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
    if(val.has_field(U("numberOfFolders")))
    {
        setNumberOfFolders(ModelBase::int32_tFromJson(val[U("numberOfFolders")]));
    }
    if(val.has_field(U("numberOfPipelines")))
    {
        setNumberOfPipelines(ModelBase::int32_tFromJson(val[U("numberOfPipelines")]));
    }
    
}

void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_NumberOfFoldersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("numberOfFolders"), m_NumberOfFolders));
    }
    if(m_NumberOfPipelinesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("numberOfPipelines"), m_NumberOfPipelines));
    }
    
}

void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(U("numberOfFolders")))
    {
        setNumberOfFolders(ModelBase::int32_tFromHttpContent(multipart->getContent(U("numberOfFolders"))));
    }
    if(multipart->hasContent(U("numberOfPipelines")))
    {
        setNumberOfPipelines(ModelBase::int32_tFromHttpContent(multipart->getContent(U("numberOfPipelines"))));
    }
    
}


utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::getClass() const
{
    return m__class;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::_classIsSet() const
{
    return m__classIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::unset_class()
{
    m__classIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::getDisplayName() const
{
    return m_DisplayName;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::getFullName() const
{
    return m_FullName;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::setFullName(utility::string_t value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::unsetFullName()
{
    m_FullNameIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::getName() const
{
    return m_Name;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::nameIsSet() const
{
    return m_NameIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::getOrganization() const
{
    return m_Organization;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::setOrganization(utility::string_t value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::organizationIsSet() const
{
    return m_OrganizationIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
int32_t IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::getNumberOfFolders() const
{
    return m_NumberOfFolders;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::setNumberOfFolders(int32_t value)
{
    m_NumberOfFolders = value;
    m_NumberOfFoldersIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::numberOfFoldersIsSet() const
{
    return m_NumberOfFoldersIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::unsetNumberOfFolders()
{
    m_NumberOfFoldersIsSet = false;
}
int32_t IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::getNumberOfPipelines() const
{
    return m_NumberOfPipelines;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::setNumberOfPipelines(int32_t value)
{
    m_NumberOfPipelines = value;
    m_NumberOfPipelinesIsSet = true;
}
bool IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::numberOfPipelinesIsSet() const
{
    return m_NumberOfPipelinesIsSet;
}
void IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl::unsetNumberOfPipelines()
{
    m_NumberOfPipelinesIsSet = false;
}

}
}
}
}

