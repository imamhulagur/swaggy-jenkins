/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * EmptyChangeLogSet.h
 *
 * 
 */

#ifndef EmptyChangeLogSet_H_
#define EmptyChangeLogSet_H_



#include <string>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  EmptyChangeLogSet
{
public:
    EmptyChangeLogSet();
    virtual ~EmptyChangeLogSet();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// EmptyChangeLogSet members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getKind() const;
    void setKind(std::string value);

protected:
    std::string m__class;
    std::string m_Kind;
};

}
}
}
}

#endif /* EmptyChangeLogSet_H_ */
