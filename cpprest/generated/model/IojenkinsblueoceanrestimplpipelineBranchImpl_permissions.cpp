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



#include "IojenkinsblueoceanrestimplpipelineBranchImpl_permissions.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::IojenkinsblueoceanrestimplpipelineBranchImpl_permissions()
{
    m_Create = false;
    m_CreateIsSet = false;
    m_Read = false;
    m_ReadIsSet = false;
    m_Start = false;
    m_StartIsSet = false;
    m_Stop = false;
    m_StopIsSet = false;
    m__class = U("");
    m__classIsSet = false;
    
}

IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::~IojenkinsblueoceanrestimplpipelineBranchImpl_permissions()
{
}

void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::validate()
{
    // TODO: implement validation
}

web::json::value IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CreateIsSet)
    {
        val[U("create")] = ModelBase::toJson(m_Create);
    }
    if(m_ReadIsSet)
    {
        val[U("read")] = ModelBase::toJson(m_Read);
    }
    if(m_StartIsSet)
    {
        val[U("start")] = ModelBase::toJson(m_Start);
    }
    if(m_StopIsSet)
    {
        val[U("stop")] = ModelBase::toJson(m_Stop);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::fromJson(web::json::value& val)
{
    if(val.has_field(U("create")))
    {
        setCreate(ModelBase::boolFromJson(val[U("create")]));
    }
    if(val.has_field(U("read")))
    {
        setRead(ModelBase::boolFromJson(val[U("read")]));
    }
    if(val.has_field(U("start")))
    {
        setStart(ModelBase::boolFromJson(val[U("start")]));
    }
    if(val.has_field(U("stop")))
    {
        setStop(ModelBase::boolFromJson(val[U("stop")]));
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    
}

void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_CreateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("create"), m_Create));
    }
    if(m_ReadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("read"), m_Read));
    }
    if(m_StartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("start"), m_Start));
    }
    if(m_StopIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("stop"), m_Stop));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    
}

void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("create")))
    {
        setCreate(ModelBase::boolFromHttpContent(multipart->getContent(U("create"))));
    }
    if(multipart->hasContent(U("read")))
    {
        setRead(ModelBase::boolFromHttpContent(multipart->getContent(U("read"))));
    }
    if(multipart->hasContent(U("start")))
    {
        setStart(ModelBase::boolFromHttpContent(multipart->getContent(U("start"))));
    }
    if(multipart->hasContent(U("stop")))
    {
        setStop(ModelBase::boolFromHttpContent(multipart->getContent(U("stop"))));
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
        
    }
    
}


bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::getCreate() const
{
    return m_Create;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::setCreate(bool value)
{
    m_Create = value;
    m_CreateIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::createIsSet() const
{
    return m_CreateIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::unsetCreate()
{
    m_CreateIsSet = false;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::getRead() const
{
    return m_Read;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::setRead(bool value)
{
    m_Read = value;
    m_ReadIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::readIsSet() const
{
    return m_ReadIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::unsetRead()
{
    m_ReadIsSet = false;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::getStart() const
{
    return m_Start;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::setStart(bool value)
{
    m_Start = value;
    m_StartIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::startIsSet() const
{
    return m_StartIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::unsetStart()
{
    m_StartIsSet = false;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::getStop() const
{
    return m_Stop;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::setStop(bool value)
{
    m_Stop = value;
    m_StopIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::stopIsSet() const
{
    return m_StopIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::unsetStop()
{
    m_StopIsSet = false;
}
utility::string_t IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::getClass() const
{
    return m__class;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::_classIsSet() const
{
    return m__classIsSet;
}
void IojenkinsblueoceanrestimplpipelineBranchImpl_permissions::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

