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


#include "SWGHudsonmodelListView.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGHudsonmodelListView::SWGHudsonmodelListView(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHudsonmodelListView::SWGHudsonmodelListView() {
    init();
}

SWGHudsonmodelListView::~SWGHudsonmodelListView() {
    this->cleanup();
}

void
SWGHudsonmodelListView::init() {
    _class = new QString("");
    description = new QString("");
    jobs = new QList<SWGHudsonmodelFreeStyleProject*>();
    name = new QString("");
    url = new QString("");
}

void
SWGHudsonmodelListView::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(description != nullptr) {
        delete description;
    }

    if(jobs != nullptr) {
        QList<SWGHudsonmodelFreeStyleProject*>* arr = jobs;
        foreach(SWGHudsonmodelFreeStyleProject* o, *arr) {
            delete o;
        }
        delete jobs;
    }

    if(name != nullptr) {
        delete name;
    }

    if(url != nullptr) {
        delete url;
    }
}

SWGHudsonmodelListView*
SWGHudsonmodelListView::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHudsonmodelListView::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&description, pJson["description"], "QString", "QString");
    
    ::Swagger::setValue(&jobs, pJson["jobs"], "QList", "SWGHudsonmodelFreeStyleProject");
    
    ::Swagger::setValue(&name, pJson["name"], "QString", "QString");
    ::Swagger::setValue(&url, pJson["url"], "QString", "QString");
}

QString
SWGHudsonmodelListView::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHudsonmodelListView::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("description"), description, obj, QString("QString"));

    QJsonArray jobsJsonArray;
    toJsonArray((QList<void*>*)jobs, &jobsJsonArray, "jobs", "SWGHudsonmodelFreeStyleProject");
    obj->insert("jobs", jobsJsonArray);

    toJsonValue(QString("name"), name, obj, QString("QString"));

    toJsonValue(QString("url"), url, obj, QString("QString"));

    return obj;
}

QString*
SWGHudsonmodelListView::getClass() {
    return _class;
}
void
SWGHudsonmodelListView::setClass(QString* _class) {
    this->_class = _class;
}

QString*
SWGHudsonmodelListView::getDescription() {
    return description;
}
void
SWGHudsonmodelListView::setDescription(QString* description) {
    this->description = description;
}

QList<SWGHudsonmodelFreeStyleProject*>*
SWGHudsonmodelListView::getJobs() {
    return jobs;
}
void
SWGHudsonmodelListView::setJobs(QList<SWGHudsonmodelFreeStyleProject*>* jobs) {
    this->jobs = jobs;
}

QString*
SWGHudsonmodelListView::getName() {
    return name;
}
void
SWGHudsonmodelListView::setName(QString* name) {
    this->name = name;
}

QString*
SWGHudsonmodelListView::getUrl() {
    return url;
}
void
SWGHudsonmodelListView::setUrl(QString* url) {
    this->url = url;
}


}

