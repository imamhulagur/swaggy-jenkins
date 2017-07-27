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



#include "HudsonmodelHudsonassignedLabels.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HudsonmodelHudsonassignedLabels::HudsonmodelHudsonassignedLabels()
{
    m__class = U("");
    m__classIsSet = false;
    
}

HudsonmodelHudsonassignedLabels::~HudsonmodelHudsonassignedLabels()
{
}

void HudsonmodelHudsonassignedLabels::validate()
{
    // TODO: implement validation
}

web::json::value HudsonmodelHudsonassignedLabels::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void HudsonmodelHudsonassignedLabels::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    
}

void HudsonmodelHudsonassignedLabels::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    
}

void HudsonmodelHudsonassignedLabels::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    
}


utility::string_t HudsonmodelHudsonassignedLabels::getClass() const
{
    return m__class;
}
void HudsonmodelHudsonassignedLabels::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonmodelHudsonassignedLabels::_classIsSet() const
{
    return m__classIsSet;
}
void HudsonmodelHudsonassignedLabels::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

