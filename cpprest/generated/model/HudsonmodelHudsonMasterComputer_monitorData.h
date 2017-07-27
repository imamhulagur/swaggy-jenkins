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
 * HudsonmodelHudsonMasterComputer_monitorData.h
 *
 * 
 */

#ifndef HudsonmodelHudsonMasterComputer_monitorData_H_
#define HudsonmodelHudsonMasterComputer_monitorData_H_


#include "ModelBase.h"

#include "Hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace.h"
#include "Hudsonnode_monitorsResponseTimeMonitorData.h"
#include "Hudsonnode_monitorsSwapSpaceMonitorMemoryUsage2.h"
#include <cpprest/details/basic_types.h>
#include "HudsonutilClockDifference.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonmodelHudsonMasterComputer_monitorData
    : public ModelBase
{
public:
    HudsonmodelHudsonMasterComputer_monitorData();
    virtual ~HudsonmodelHudsonMasterComputer_monitorData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// HudsonmodelHudsonMasterComputer_monitorData members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Hudsonnode_monitorsSwapSpaceMonitorMemoryUsage2> getHudsonNodeMonitorsSwapSpaceMonitor() const;
    void setHudsonNodeMonitorsSwapSpaceMonitor(std::shared_ptr<Hudsonnode_monitorsSwapSpaceMonitorMemoryUsage2> value);
    bool hudson.node_monitors.SwapSpaceMonitorIsSet() const;
    void unsetHudson.node_monitors.SwapSpaceMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace> getHudsonNodeMonitorsTemporarySpaceMonitor() const;
    void setHudsonNodeMonitorsTemporarySpaceMonitor(std::shared_ptr<Hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace> value);
    bool hudson.node_monitors.TemporarySpaceMonitorIsSet() const;
    void unsetHudson.node_monitors.TemporarySpaceMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace> getHudsonNodeMonitorsDiskSpaceMonitor() const;
    void setHudsonNodeMonitorsDiskSpaceMonitor(std::shared_ptr<Hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace> value);
    bool hudson.node_monitors.DiskSpaceMonitorIsSet() const;
    void unsetHudson.node_monitors.DiskSpaceMonitor();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHudsonNodeMonitorsArchitectureMonitor() const;
    void setHudsonNodeMonitorsArchitectureMonitor(utility::string_t value);
    bool hudson.node_monitors.ArchitectureMonitorIsSet() const;
    void unsetHudson.node_monitors.ArchitectureMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Hudsonnode_monitorsResponseTimeMonitorData> getHudsonNodeMonitorsResponseTimeMonitor() const;
    void setHudsonNodeMonitorsResponseTimeMonitor(std::shared_ptr<Hudsonnode_monitorsResponseTimeMonitorData> value);
    bool hudson.node_monitors.ResponseTimeMonitorIsSet() const;
    void unsetHudson.node_monitors.ResponseTimeMonitor();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<HudsonutilClockDifference> getHudsonNodeMonitorsClockMonitor() const;
    void setHudsonNodeMonitorsClockMonitor(std::shared_ptr<HudsonutilClockDifference> value);
    bool hudson.node_monitors.ClockMonitorIsSet() const;
    void unsetHudson.node_monitors.ClockMonitor();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    void setClass(utility::string_t value);
    bool _classIsSet() const;
    void unset_class();

protected:
    std::shared_ptr<Hudsonnode_monitorsSwapSpaceMonitorMemoryUsage2> m_Hudson.node_monitors.SwapSpaceMonitor;
    bool m_Hudson.node_monitors.SwapSpaceMonitorIsSet;
std::shared_ptr<Hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace> m_Hudson.node_monitors.TemporarySpaceMonitor;
    bool m_Hudson.node_monitors.TemporarySpaceMonitorIsSet;
std::shared_ptr<Hudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace> m_Hudson.node_monitors.DiskSpaceMonitor;
    bool m_Hudson.node_monitors.DiskSpaceMonitorIsSet;
utility::string_t m_Hudson.node_monitors.ArchitectureMonitor;
    bool m_Hudson.node_monitors.ArchitectureMonitorIsSet;
std::shared_ptr<Hudsonnode_monitorsResponseTimeMonitorData> m_Hudson.node_monitors.ResponseTimeMonitor;
    bool m_Hudson.node_monitors.ResponseTimeMonitorIsSet;
std::shared_ptr<HudsonutilClockDifference> m_Hudson.node_monitors.ClockMonitor;
    bool m_Hudson.node_monitors.ClockMonitorIsSet;
utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* HudsonmodelHudsonMasterComputer_monitorData_H_ */
