/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * GithubRespositoryContainer.h
 *
 * 
 */

#ifndef GithubRespositoryContainer_H_
#define GithubRespositoryContainer_H_


#include "ModelBase.h"

#include <string>
#include "GithubRepositories.h"
#include "GithubRespositoryContainerlinks.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubRespositoryContainer
    : public ModelBase
{
public:
    GithubRespositoryContainer();
    virtual ~GithubRespositoryContainer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// GithubRespositoryContainer members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    GithubRespositoryContainerlinks getLinks() const;
    void setLinks(GithubRespositoryContainerlinks const& value);
    bool linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    GithubRepositories getRepositories() const;
    void setRepositories(GithubRepositories const& value);
    bool repositoriesIsSet() const;
    void unsetRepositories();

protected:
    std::string m__class;
    bool m__classIsSet;
    GithubRespositoryContainerlinks m__links;
    bool m__linksIsSet;
    GithubRepositories m_Repositories;
    bool m_RepositoriesIsSet;
};

}
}
}
}

#endif /* GithubRespositoryContainer_H_ */