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


#include "SWGHudsonmodelCauseUserIdCause.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGHudsonmodelCauseUserIdCause::SWGHudsonmodelCauseUserIdCause(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHudsonmodelCauseUserIdCause::SWGHudsonmodelCauseUserIdCause() {
    init();
}

SWGHudsonmodelCauseUserIdCause::~SWGHudsonmodelCauseUserIdCause() {
    this->cleanup();
}

void
SWGHudsonmodelCauseUserIdCause::init() {
    _class = new QString("");
    short_description = new QString("");
    user_id = new QString("");
    user_name = new QString("");
}

void
SWGHudsonmodelCauseUserIdCause::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(short_description != nullptr) {
        delete short_description;
    }

    if(user_id != nullptr) {
        delete user_id;
    }

    if(user_name != nullptr) {
        delete user_name;
    }
}

SWGHudsonmodelCauseUserIdCause*
SWGHudsonmodelCauseUserIdCause::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHudsonmodelCauseUserIdCause::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&short_description, pJson["shortDescription"], "QString", "QString");
    ::Swagger::setValue(&user_id, pJson["userId"], "QString", "QString");
    ::Swagger::setValue(&user_name, pJson["userName"], "QString", "QString");
}

QString
SWGHudsonmodelCauseUserIdCause::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHudsonmodelCauseUserIdCause::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("shortDescription"), short_description, obj, QString("QString"));

    toJsonValue(QString("userId"), user_id, obj, QString("QString"));

    toJsonValue(QString("userName"), user_name, obj, QString("QString"));

    return obj;
}

QString*
SWGHudsonmodelCauseUserIdCause::getClass() {
    return _class;
}
void
SWGHudsonmodelCauseUserIdCause::setClass(QString* _class) {
    this->_class = _class;
}

QString*
SWGHudsonmodelCauseUserIdCause::getShortDescription() {
    return short_description;
}
void
SWGHudsonmodelCauseUserIdCause::setShortDescription(QString* short_description) {
    this->short_description = short_description;
}

QString*
SWGHudsonmodelCauseUserIdCause::getUserId() {
    return user_id;
}
void
SWGHudsonmodelCauseUserIdCause::setUserId(QString* user_id) {
    this->user_id = user_id;
}

QString*
SWGHudsonmodelCauseUserIdCause::getUserName() {
    return user_name;
}
void
SWGHudsonmodelCauseUserIdCause::setUserName(QString* user_name) {
    this->user_name = user_name;
}


}

