/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "DefaultCrumbIssuer.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

DefaultCrumbIssuer::DefaultCrumbIssuer()
{
    m__class = "";
    m_Crumb = "";
    m_CrumbRequestField = "";
    
}

DefaultCrumbIssuer::~DefaultCrumbIssuer()
{
}

std::string DefaultCrumbIssuer::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("Crumb", m_Crumb);
	pt.put("CrumbRequestField", m_CrumbRequestField);
	write_json(ss, pt, false);
	return ss.str();
}

void DefaultCrumbIssuer::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_Crumb = pt.get("Crumb", "");
	m_CrumbRequestField = pt.get("CrumbRequestField", "");
}

std::string DefaultCrumbIssuer::getClass() const
{
    return m__class;
}
void DefaultCrumbIssuer::setClass(std::string value)
{
    m__class = value;
}
std::string DefaultCrumbIssuer::getCrumb() const
{
    return m_Crumb;
}
void DefaultCrumbIssuer::setCrumb(std::string value)
{
    m_Crumb = value;
}
std::string DefaultCrumbIssuer::getCrumbRequestField() const
{
    return m_CrumbRequestField;
}
void DefaultCrumbIssuer::setCrumbRequestField(std::string value)
{
    m_CrumbRequestField = value;
}

}
}
}
}

