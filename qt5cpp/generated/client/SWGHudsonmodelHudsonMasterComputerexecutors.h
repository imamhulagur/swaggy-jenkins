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
 * SWGHudsonmodelHudsonMasterComputerexecutors.h
 * 
 * 
 */

#ifndef SWGHudsonmodelHudsonMasterComputerexecutors_H_
#define SWGHudsonmodelHudsonMasterComputerexecutors_H_

#include <QJsonObject>


#include "SWGHudsonmodelFreeStyleBuild.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGHudsonmodelHudsonMasterComputerexecutors: public SWGObject {
public:
    SWGHudsonmodelHudsonMasterComputerexecutors();
    SWGHudsonmodelHudsonMasterComputerexecutors(QString* json);
    virtual ~SWGHudsonmodelHudsonMasterComputerexecutors();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGHudsonmodelHudsonMasterComputerexecutors* fromJson(QString &jsonString);

    SWGHudsonmodelFreeStyleBuild* getCurrentExecutable();
    void setCurrentExecutable(SWGHudsonmodelFreeStyleBuild* current_executable);

    bool getIdle();
    void setIdle(bool idle);

    bool getLikelyStuck();
    void setLikelyStuck(bool likely_stuck);

    qint32 getNumber();
    void setNumber(qint32 number);

    qint32 getProgress();
    void setProgress(qint32 progress);

    QString* getClass();
    void setClass(QString* _class);


private:
    SWGHudsonmodelFreeStyleBuild* current_executable;
    bool idle;
    bool likely_stuck;
    qint32 number;
    qint32 progress;
    QString* _class;
};

}

#endif /* SWGHudsonmodelHudsonMasterComputerexecutors_H_ */
