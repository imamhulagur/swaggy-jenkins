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


#include "FavoriteImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

FavoriteImpl::FavoriteImpl()
{
    m__class = "";
    m__classIsSet = false;
    m__linksIsSet = false;
    m_ItemIsSet = false;
    
}

FavoriteImpl::~FavoriteImpl()
{
}

void FavoriteImpl::validate()
{
    // TODO: implement validation
}

nlohmann::json FavoriteImpl::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val["_links"] = ModelBase::toJson(m__links);
    }
    if(m_ItemIsSet)
    {
        val["item"] = ModelBase::toJson(m_Item);
    }
    

    return val;
}

void FavoriteImpl::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    if(val.find("_links") != val.end())
    {
        if(!val["_links"].is_null())
        {
            std::shared_ptr<FavoriteImpllinks> newItem(new FavoriteImpllinks());
            newItem->fromJson(val["_links"]);
            setLinks( newItem );
        }
        
    }
    if(val.find("item") != val.end())
    {
        if(!val["item"].is_null())
        {
            std::shared_ptr<PipelineImpl> newItem(new PipelineImpl());
            newItem->fromJson(val["item"]);
            setItem( newItem );
        }
        
    }
    
}


std::string FavoriteImpl::getClass() const
{
    return m__class;
}
void FavoriteImpl::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool FavoriteImpl::classIsSet() const
{
    return m__classIsSet;
}
void FavoriteImpl::unset_class()
{
    m__classIsSet = false;
}
std::shared_ptr<FavoriteImpllinks> FavoriteImpl::getLinks() const
{
    return m__links;
}
void FavoriteImpl::setLinks(std::shared_ptr<FavoriteImpllinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool FavoriteImpl::linksIsSet() const
{
    return m__linksIsSet;
}
void FavoriteImpl::unset_links()
{
    m__linksIsSet = false;
}
std::shared_ptr<PipelineImpl> FavoriteImpl::getItem() const
{
    return m_Item;
}
void FavoriteImpl::setItem(std::shared_ptr<PipelineImpl> value)
{
    m_Item = value;
    m_ItemIsSet = true;
}
bool FavoriteImpl::itemIsSet() const
{
    return m_ItemIsSet;
}
void FavoriteImpl::unsetItem()
{
    m_ItemIsSet = false;
}

}
}
}
}
