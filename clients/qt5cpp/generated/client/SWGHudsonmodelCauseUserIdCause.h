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

/*
 * SWGHudsonmodelCauseUserIdCause.h
 * 
 * 
 */

#ifndef SWGHudsonmodelCauseUserIdCause_H_
#define SWGHudsonmodelCauseUserIdCause_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGHudsonmodelCauseUserIdCause: public SWGObject {
public:
    SWGHudsonmodelCauseUserIdCause();
    SWGHudsonmodelCauseUserIdCause(QString* json);
    virtual ~SWGHudsonmodelCauseUserIdCause();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGHudsonmodelCauseUserIdCause* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QString* getShortDescription();
    void setShortDescription(QString* short_description);

    QString* getUserId();
    void setUserId(QString* user_id);

    QString* getUserName();
    void setUserName(QString* user_name);


private:
    QString* _class;
    QString* short_description;
    QString* user_id;
    QString* user_name;
};

}

#endif /* SWGHudsonmodelCauseUserIdCause_H_ */