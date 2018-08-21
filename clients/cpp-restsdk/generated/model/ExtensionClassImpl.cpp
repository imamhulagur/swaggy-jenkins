/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ExtensionClassImpl.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ExtensionClassImpl::ExtensionClassImpl()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m__linksIsSet = false;
    m_ClassesIsSet = false;
}

ExtensionClassImpl::~ExtensionClassImpl()
{
}

void ExtensionClassImpl::validate()
{
    // TODO: implement validation
}

web::json::value ExtensionClassImpl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Classes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("classes")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void ExtensionClassImpl::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        if(!val[utility::conversions::to_string_t("_links")].is_null())
        {
            std::shared_ptr<ExtensionClassImpllinks> newItem(new ExtensionClassImpllinks());
            newItem->fromJson(val[utility::conversions::to_string_t("_links")]);
            setLinks( newItem );
        }
    }
    {
        m_Classes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("classes")))
        {
        for( auto& item : val[utility::conversions::to_string_t("classes")].as_array() )
        {
            m_Classes.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void ExtensionClassImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Classes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("classes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void ExtensionClassImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<ExtensionClassImpllinks> newItem(new ExtensionClassImpllinks());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
    {
        m_Classes.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("classes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("classes"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Classes.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

utility::string_t ExtensionClassImpl::getClass() const
{
    return m__class;
}


void ExtensionClassImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ExtensionClassImpl::_classIsSet() const
{
    return m__classIsSet;
}

void ExtensionClassImpl::unset_class()
{
    m__classIsSet = false;
}

std::shared_ptr<ExtensionClassImpllinks> ExtensionClassImpl::getLinks() const
{
    return m__links;
}


void ExtensionClassImpl::setLinks(std::shared_ptr<ExtensionClassImpllinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool ExtensionClassImpl::linksIsSet() const
{
    return m__linksIsSet;
}

void ExtensionClassImpl::unset_links()
{
    m__linksIsSet = false;
}

std::vector<utility::string_t>& ExtensionClassImpl::getClasses()
{
    return m_Classes;
}

void ExtensionClassImpl::setClasses(std::vector<utility::string_t> value)
{
    m_Classes = value;
    m_ClassesIsSet = true;
}
bool ExtensionClassImpl::classesIsSet() const
{
    return m_ClassesIsSet;
}

void ExtensionClassImpl::unsetClasses()
{
    m_ClassesIsSet = false;
}

}
}
}
}
