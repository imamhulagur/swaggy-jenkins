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



#include "HudsonmodelCauseAction.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HudsonmodelCauseAction::HudsonmodelCauseAction()
{
    m__class = U("");
    m__classIsSet = false;
    m_CausesIsSet = false;
    
}

HudsonmodelCauseAction::~HudsonmodelCauseAction()
{
}

void HudsonmodelCauseAction::validate()
{
    // TODO: implement validation
}

web::json::value HudsonmodelCauseAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Causes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("causes")] = web::json::value::array(jsonArray);
        }
    }
    

    return val;
}

void HudsonmodelCauseAction::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    {
        m_Causes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("causes")))
        {
        for( auto& item : val[U("causes")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Causes.push_back( std::shared_ptr<HudsonmodelCauseUserIdCause>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelCauseUserIdCause> newItem(new HudsonmodelCauseUserIdCause());
                newItem->fromJson(item);
                m_Causes.push_back( newItem );
            }
            
        }
        }
    }
    
}

void HudsonmodelCauseAction::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Causes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("causes"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    
}

void HudsonmodelCauseAction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_Causes.clear();
        if(multipart->hasContent(U("causes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("causes"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Causes.push_back( std::shared_ptr<HudsonmodelCauseUserIdCause>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelCauseUserIdCause> newItem(new HudsonmodelCauseUserIdCause());
                newItem->fromJson(item);
                m_Causes.push_back( newItem );
            }
            
        }
        }
    }
    
}


utility::string_t HudsonmodelCauseAction::getClass() const
{
    return m__class;
}
void HudsonmodelCauseAction::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonmodelCauseAction::_classIsSet() const
{
    return m__classIsSet;
}
void HudsonmodelCauseAction::unset_class()
{
    m__classIsSet = false;
}
std::vector<std::shared_ptr<HudsonmodelCauseUserIdCause>>& HudsonmodelCauseAction::getCauses()
{
    return m_Causes;
}
bool HudsonmodelCauseAction::causesIsSet() const
{
    return m_CausesIsSet;
}
void HudsonmodelCauseAction::unsetCauses()
{
    m_CausesIsSet = false;
}

}
}
}
}
