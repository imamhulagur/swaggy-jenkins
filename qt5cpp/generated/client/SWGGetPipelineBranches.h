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
 * SWGGetPipelineBranches.h
 * 
 * 
 */

#ifndef SWGGetPipelineBranches_H_
#define SWGGetPipelineBranches_H_

#include <QJsonObject>


#include "SWGGetPipelineBranchesitem.h"
#include <QList>

#include "SWGObject.h"


namespace Swagger {

class SWGGetPipelineBranches: public SWGObject {
public:
    SWGGetPipelineBranches();
    SWGGetPipelineBranches(QString* json);
    virtual ~SWGGetPipelineBranches();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGGetPipelineBranches* fromJson(QString &jsonString);


private:
};

}

#endif /* SWGGetPipelineBranches_H_ */
