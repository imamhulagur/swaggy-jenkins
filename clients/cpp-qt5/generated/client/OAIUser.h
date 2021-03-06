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
 * OAIUser.h
 *
 * 
 */

#ifndef OAIUser_H_
#define OAIUser_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIUser: public OAIObject {
public:
    OAIUser();
    OAIUser(QString json);
    ~OAIUser();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIUser* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QString* getId();
    void setId(QString* id);

    QString* getFullName();
    void setFullName(QString* full_name);

    QString* getEmail();
    void setEmail(QString* email);

    QString* getName();
    void setName(QString* name);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QString* id;
    bool m_id_isSet;

    QString* full_name;
    bool m_full_name_isSet;

    QString* email;
    bool m_email_isSet;

    QString* name;
    bool m_name_isSet;

};

}

#endif /* OAIUser_H_ */
