/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIGithubOrganizationlinks.h
 *
 * 
 */

#ifndef OAIGithubOrganizationlinks_H
#define OAIGithubOrganizationlinks_H

#include <QJsonObject>


#include "OAILink.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIGithubOrganizationlinks: public OAIObject {
public:
    OAIGithubOrganizationlinks();
    OAIGithubOrganizationlinks(QString json);
    ~OAIGithubOrganizationlinks() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAILink getRepositories() const;
    void setRepositories(const OAILink &repositories);

    OAILink getSelf() const;
    void setSelf(const OAILink &self);

    QString getClass() const;
    void setClass(const QString &_class);

    virtual bool isSet() const override;

private:
    OAILink repositories;
    bool m_repositories_isSet;

    OAILink self;
    bool m_self_isSet;

    QString _class;
    bool m__class_isSet;

};

}

#endif // OAIGithubOrganizationlinks_H
