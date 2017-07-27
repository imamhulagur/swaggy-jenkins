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


#include "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map(QString* json) {
    init();
    this->fromJson(*json);
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map() {
    init();
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::~SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map() {
    this->cleanup();
}

void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::init() {
    io_jenkins_blueocean_service_embedded_rest_pipeline_impl = new SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl();
    io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = new SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl();
    _class = new QString("");
}

void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::cleanup() {
    
    if(io_jenkins_blueocean_service_embedded_rest_pipeline_impl != nullptr) {
        delete io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
    }

    if(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl != nullptr) {
        delete io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&io_jenkins_blueocean_service_embedded_rest_pipeline_impl, pJson["io.jenkins.blueocean.service.embedded.rest.PipelineImpl"], "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl", "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl");
    ::Swagger::setValue(&io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl, pJson["io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"], "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl", "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("io.jenkins.blueocean.service.embedded.rest.PipelineImpl"), io_jenkins_blueocean_service_embedded_rest_pipeline_impl, obj, QString("SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl"));

    toJsonValue(QString("io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl"), io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl, obj, QString("SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() {
    return io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
}
void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_pipeline_impl) {
    this->io_jenkins_blueocean_service_embedded_rest_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
}

SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() {
    return io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
}
void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(SWGIojenkinsblueoceanserviceembeddedrestExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl) {
    this->io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
}

QString*
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::getClass() {
    return _class;
}
void
SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map::setClass(QString* _class) {
    this->_class = _class;
}


}

