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



#include "GetClassesByClass.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GetClassesByClass::GetClassesByClass()
{
    m_ClassesIsSet = false;
    m__class = U("");
    m__classIsSet = false;
    
}

GetClassesByClass::~GetClassesByClass()
{
}

void GetClassesByClass::validate()
{
    // TODO: implement validation
}

web::json::value GetClassesByClass::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Classes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("classes")] = web::json::value::array(jsonArray);
        }
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void GetClassesByClass::fromJson(web::json::value& val)
{
    {
        m_Classes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("classes")))
        {
        for( auto& item : val[U("classes")].as_array() )
        {
            m_Classes.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    
}

void GetClassesByClass::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Classes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("classes"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    
}

void GetClassesByClass::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    {
        m_Classes.clear();
        if(multipart->hasContent(U("classes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("classes"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Classes.push_back(ModelBase::stringFromJson(item));
            
        }
        }
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
        
    }
    
}


std::vector<utility::string_t>& GetClassesByClass::getClasses()
{
    return m_Classes;
}
bool GetClassesByClass::classesIsSet() const
{
    return m_ClassesIsSet;
}
void GetClassesByClass::unsetClasses()
{
    m_ClassesIsSet = false;
}
utility::string_t GetClassesByClass::getClass() const
{
    return m__class;
}
void GetClassesByClass::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GetClassesByClass::_classIsSet() const
{
    return m__classIsSet;
}
void GetClassesByClass::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

