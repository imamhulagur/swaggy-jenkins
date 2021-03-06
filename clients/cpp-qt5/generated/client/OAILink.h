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
 * OAILink.h
 *
 * 
 */

#ifndef OAILink_H_
#define OAILink_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAILink: public OAIObject {
public:
    OAILink();
    OAILink(QString json);
    ~OAILink();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAILink* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QString* getHref();
    void setHref(QString* href);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QString* href;
    bool m_href_isSet;

};

}

#endif /* OAILink_H_ */
