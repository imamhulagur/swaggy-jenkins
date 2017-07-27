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
 * SWGHudsonmodelQueueLeftItem.h
 * 
 * 
 */

#ifndef SWGHudsonmodelQueueLeftItem_H_
#define SWGHudsonmodelQueueLeftItem_H_

#include <QJsonObject>


#include "SWGHudsonmodelCauseAction.h"
#include "SWGHudsonmodelFreeStyleBuild.h"
#include "SWGHudsonmodelFreeStyleProject.h"
#include <QList>
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGHudsonmodelQueueLeftItem: public SWGObject {
public:
    SWGHudsonmodelQueueLeftItem();
    SWGHudsonmodelQueueLeftItem(QString* json);
    virtual ~SWGHudsonmodelQueueLeftItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGHudsonmodelQueueLeftItem* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    QList<SWGHudsonmodelCauseAction*>* getActions();
    void setActions(QList<SWGHudsonmodelCauseAction*>* actions);

    bool getBlocked();
    void setBlocked(bool blocked);

    bool getBuildable();
    void setBuildable(bool buildable);

    qint32 getId();
    void setId(qint32 id);

    qint32 getInQueueSince();
    void setInQueueSince(qint32 in_queue_since);

    QString* getParams();
    void setParams(QString* params);

    bool getStuck();
    void setStuck(bool stuck);

    SWGHudsonmodelFreeStyleProject* getTask();
    void setTask(SWGHudsonmodelFreeStyleProject* task);

    QString* getUrl();
    void setUrl(QString* url);

    QString* getWhy();
    void setWhy(QString* why);

    bool getCancelled();
    void setCancelled(bool cancelled);

    SWGHudsonmodelFreeStyleBuild* getExecutable();
    void setExecutable(SWGHudsonmodelFreeStyleBuild* executable);


private:
    QString* _class;
    QList<SWGHudsonmodelCauseAction*>* actions;
    bool blocked;
    bool buildable;
    qint32 id;
    qint32 in_queue_since;
    QString* params;
    bool stuck;
    SWGHudsonmodelFreeStyleProject* task;
    QString* url;
    QString* why;
    bool cancelled;
    SWGHudsonmodelFreeStyleBuild* executable;
};

}

#endif /* SWGHudsonmodelQueueLeftItem_H_ */
