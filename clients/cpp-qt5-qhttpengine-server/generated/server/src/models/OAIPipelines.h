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
 * OAIPipelines.h
 *
 * 
 */

#ifndef OAIPipelines_H
#define OAIPipelines_H

#include <QJsonObject>


#include "OAIPipeline.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelines: public OAIObject {
public:
    OAIPipelines();
    OAIPipelines(QString json);
    ~OAIPipelines() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    virtual bool isSet() const override;

private:
};

}

#endif // OAIPipelines_H