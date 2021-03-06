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
 * SwapSpaceMonitorMemoryUsage2.h
 *
 * 
 */

#ifndef SwapSpaceMonitorMemoryUsage2_H_
#define SwapSpaceMonitorMemoryUsage2_H_



#include <string>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  SwapSpaceMonitorMemoryUsage2
{
public:
    SwapSpaceMonitorMemoryUsage2();
    virtual ~SwapSpaceMonitorMemoryUsage2();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// SwapSpaceMonitorMemoryUsage2 members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getAvailablePhysicalMemory() const;
    void setAvailablePhysicalMemory(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getAvailableSwapSpace() const;
    void setAvailableSwapSpace(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalPhysicalMemory() const;
    void setTotalPhysicalMemory(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalSwapSpace() const;
    void setTotalSwapSpace(int32_t value);

protected:
    std::string m__class;
    int32_t m_AvailablePhysicalMemory;
    int32_t m_AvailableSwapSpace;
    int32_t m_TotalPhysicalMemory;
    int32_t m_TotalSwapSpace;
};

}
}
}
}

#endif /* SwapSpaceMonitorMemoryUsage2_H_ */
