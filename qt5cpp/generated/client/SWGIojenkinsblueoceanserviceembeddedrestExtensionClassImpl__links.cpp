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


#include "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links(QString* json) {
    init();
    this->fromJson(*json);
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links() {
    init();
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::~SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links() {
    this->cleanup();
}

void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::init() {
    self = new SWGIojenkinsblueoceanresthalLink();
    _class = new QString("");
}

void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::cleanup() {
    
    if(self != nullptr) {
        delete self;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&self, pJson["self"], "SWGIojenkinsblueoceanresthalLink", "SWGIojenkinsblueoceanresthalLink");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("self"), self, obj, QString("SWGIojenkinsblueoceanresthalLink"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

SWGIojenkinsblueoceanresthalLink*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::getSelf() {
    return self;
}
void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::setSelf(SWGIojenkinsblueoceanresthalLink* self) {
    this->self = self;
}

QString*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::getClass() {
    return _class;
}
void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl__links::setClass(QString* _class) {
    this->_class = _class;
}


}

