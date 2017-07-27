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



#include "HudsonmodelHudsonMasterComputer.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HudsonmodelHudsonMasterComputer::HudsonmodelHudsonMasterComputer()
{
    m__class = U("");
    m__classIsSet = false;
    m_DisplayName = U("");
    m_DisplayNameIsSet = false;
    m_ExecutorsIsSet = false;
    m_Icon = U("");
    m_IconIsSet = false;
    m_IconClassName = U("");
    m_IconClassNameIsSet = false;
    m_Idle = false;
    m_IdleIsSet = false;
    m_JnlpAgent = false;
    m_JnlpAgentIsSet = false;
    m_LaunchSupported = false;
    m_LaunchSupportedIsSet = false;
    m_LoadStatisticsIsSet = false;
    m_ManualLaunchAllowed = false;
    m_ManualLaunchAllowedIsSet = false;
    m_MonitorDataIsSet = false;
    m_NumExecutors = 0;
    m_NumExecutorsIsSet = false;
    m_Offline = false;
    m_OfflineIsSet = false;
    m_OfflineCause = U("");
    m_OfflineCauseIsSet = false;
    m_OfflineCauseReason = U("");
    m_OfflineCauseReasonIsSet = false;
    m_TemporarilyOffline = false;
    m_TemporarilyOfflineIsSet = false;
    
}

HudsonmodelHudsonMasterComputer::~HudsonmodelHudsonMasterComputer()
{
}

void HudsonmodelHudsonMasterComputer::validate()
{
    // TODO: implement validation
}

web::json::value HudsonmodelHudsonMasterComputer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_DisplayNameIsSet)
    {
        val[U("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Executors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val[U("executors")] = web::json::value::array(jsonArray);
        }
    }
    if(m_IconIsSet)
    {
        val[U("icon")] = ModelBase::toJson(m_Icon);
    }
    if(m_IconClassNameIsSet)
    {
        val[U("iconClassName")] = ModelBase::toJson(m_IconClassName);
    }
    if(m_IdleIsSet)
    {
        val[U("idle")] = ModelBase::toJson(m_Idle);
    }
    if(m_JnlpAgentIsSet)
    {
        val[U("jnlpAgent")] = ModelBase::toJson(m_JnlpAgent);
    }
    if(m_LaunchSupportedIsSet)
    {
        val[U("launchSupported")] = ModelBase::toJson(m_LaunchSupported);
    }
    if(m_LoadStatisticsIsSet)
    {
        val[U("loadStatistics")] = ModelBase::toJson(m_LoadStatistics);
    }
    if(m_ManualLaunchAllowedIsSet)
    {
        val[U("manualLaunchAllowed")] = ModelBase::toJson(m_ManualLaunchAllowed);
    }
    if(m_MonitorDataIsSet)
    {
        val[U("monitorData")] = ModelBase::toJson(m_MonitorData);
    }
    if(m_NumExecutorsIsSet)
    {
        val[U("numExecutors")] = ModelBase::toJson(m_NumExecutors);
    }
    if(m_OfflineIsSet)
    {
        val[U("offline")] = ModelBase::toJson(m_Offline);
    }
    if(m_OfflineCauseIsSet)
    {
        val[U("offlineCause")] = ModelBase::toJson(m_OfflineCause);
    }
    if(m_OfflineCauseReasonIsSet)
    {
        val[U("offlineCauseReason")] = ModelBase::toJson(m_OfflineCauseReason);
    }
    if(m_TemporarilyOfflineIsSet)
    {
        val[U("temporarilyOffline")] = ModelBase::toJson(m_TemporarilyOffline);
    }
    

    return val;
}

void HudsonmodelHudsonMasterComputer::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[U("displayName")]));
        
    }
    {
        m_Executors.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(U("executors")))
        {
        for( auto& item : val[U("executors")].as_array() )
        {
            
            if(item.is_null())
            {
                m_Executors.push_back( std::shared_ptr<HudsonmodelHudsonMasterComputerexecutors>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelHudsonMasterComputerexecutors> newItem(new HudsonmodelHudsonMasterComputerexecutors());
                newItem->fromJson(item);
                m_Executors.push_back( newItem );
            }
            
        }
        }
    }
    if(val.has_field(U("icon")))
    {
        setIcon(ModelBase::stringFromJson(val[U("icon")]));
        
    }
    if(val.has_field(U("iconClassName")))
    {
        setIconClassName(ModelBase::stringFromJson(val[U("iconClassName")]));
        
    }
    if(val.has_field(U("idle")))
    {
        setIdle(ModelBase::boolFromJson(val[U("idle")]));
    }
    if(val.has_field(U("jnlpAgent")))
    {
        setJnlpAgent(ModelBase::boolFromJson(val[U("jnlpAgent")]));
    }
    if(val.has_field(U("launchSupported")))
    {
        setLaunchSupported(ModelBase::boolFromJson(val[U("launchSupported")]));
    }
    if(val.has_field(U("loadStatistics")))
    {
        if(!val[U("loadStatistics")].is_null())
        {
            std::shared_ptr<HudsonmodelLabel1> newItem(new HudsonmodelLabel1());
            newItem->fromJson(val[U("loadStatistics")]);
            setLoadStatistics( newItem );
        }
        
    }
    if(val.has_field(U("manualLaunchAllowed")))
    {
        setManualLaunchAllowed(ModelBase::boolFromJson(val[U("manualLaunchAllowed")]));
    }
    if(val.has_field(U("monitorData")))
    {
        if(!val[U("monitorData")].is_null())
        {
            std::shared_ptr<HudsonmodelHudsonMasterComputer_monitorData> newItem(new HudsonmodelHudsonMasterComputer_monitorData());
            newItem->fromJson(val[U("monitorData")]);
            setMonitorData( newItem );
        }
        
    }
    if(val.has_field(U("numExecutors")))
    {
        setNumExecutors(ModelBase::int32_tFromJson(val[U("numExecutors")]));
    }
    if(val.has_field(U("offline")))
    {
        setOffline(ModelBase::boolFromJson(val[U("offline")]));
    }
    if(val.has_field(U("offlineCause")))
    {
        setOfflineCause(ModelBase::stringFromJson(val[U("offlineCause")]));
        
    }
    if(val.has_field(U("offlineCauseReason")))
    {
        setOfflineCauseReason(ModelBase::stringFromJson(val[U("offlineCauseReason")]));
        
    }
    if(val.has_field(U("temporarilyOffline")))
    {
        setTemporarilyOffline(ModelBase::boolFromJson(val[U("temporarilyOffline")]));
    }
    
}

void HudsonmodelHudsonMasterComputer::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("displayName"), m_DisplayName));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Executors )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + U("executors"), web::json::value::array(jsonArray), U("application/json")));
        }
    }
    if(m_IconIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("icon"), m_Icon));
        
    }
    if(m_IconClassNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("iconClassName"), m_IconClassName));
        
    }
    if(m_IdleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("idle"), m_Idle));
    }
    if(m_JnlpAgentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("jnlpAgent"), m_JnlpAgent));
    }
    if(m_LaunchSupportedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("launchSupported"), m_LaunchSupported));
    }
    if(m_LoadStatisticsIsSet)
    {
        if (m_LoadStatistics.get())
        {
            m_LoadStatistics->toMultipart(multipart, U("loadStatistics."));
        }
        
    }
    if(m_ManualLaunchAllowedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("manualLaunchAllowed"), m_ManualLaunchAllowed));
    }
    if(m_MonitorDataIsSet)
    {
        if (m_MonitorData.get())
        {
            m_MonitorData->toMultipart(multipart, U("monitorData."));
        }
        
    }
    if(m_NumExecutorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("numExecutors"), m_NumExecutors));
    }
    if(m_OfflineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("offline"), m_Offline));
    }
    if(m_OfflineCauseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("offlineCause"), m_OfflineCause));
        
    }
    if(m_OfflineCauseReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("offlineCauseReason"), m_OfflineCauseReason));
        
    }
    if(m_TemporarilyOfflineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("temporarilyOffline"), m_TemporarilyOffline));
    }
    
}

void HudsonmodelHudsonMasterComputer::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
        
    }
    if(multipart->hasContent(U("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(U("displayName"))));
        
    }
    {
        m_Executors.clear();
        if(multipart->hasContent(U("executors")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(U("executors"))));
        for( auto& item : jsonArray.as_array() )
        {
            
            if(item.is_null())
            {
                m_Executors.push_back( std::shared_ptr<HudsonmodelHudsonMasterComputerexecutors>(nullptr) );
            }
            else
            {
                std::shared_ptr<HudsonmodelHudsonMasterComputerexecutors> newItem(new HudsonmodelHudsonMasterComputerexecutors());
                newItem->fromJson(item);
                m_Executors.push_back( newItem );
            }
            
        }
        }
    }
    if(multipart->hasContent(U("icon")))
    {
        setIcon(ModelBase::stringFromHttpContent(multipart->getContent(U("icon"))));
        
    }
    if(multipart->hasContent(U("iconClassName")))
    {
        setIconClassName(ModelBase::stringFromHttpContent(multipart->getContent(U("iconClassName"))));
        
    }
    if(multipart->hasContent(U("idle")))
    {
        setIdle(ModelBase::boolFromHttpContent(multipart->getContent(U("idle"))));
    }
    if(multipart->hasContent(U("jnlpAgent")))
    {
        setJnlpAgent(ModelBase::boolFromHttpContent(multipart->getContent(U("jnlpAgent"))));
    }
    if(multipart->hasContent(U("launchSupported")))
    {
        setLaunchSupported(ModelBase::boolFromHttpContent(multipart->getContent(U("launchSupported"))));
    }
    if(multipart->hasContent(U("loadStatistics")))
    {
        if(multipart->hasContent(U("loadStatistics")))
        {
            std::shared_ptr<HudsonmodelLabel1> newItem(new HudsonmodelLabel1());
            newItem->fromMultiPart(multipart, U("loadStatistics."));
            setLoadStatistics( newItem );
        }
        
    }
    if(multipart->hasContent(U("manualLaunchAllowed")))
    {
        setManualLaunchAllowed(ModelBase::boolFromHttpContent(multipart->getContent(U("manualLaunchAllowed"))));
    }
    if(multipart->hasContent(U("monitorData")))
    {
        if(multipart->hasContent(U("monitorData")))
        {
            std::shared_ptr<HudsonmodelHudsonMasterComputer_monitorData> newItem(new HudsonmodelHudsonMasterComputer_monitorData());
            newItem->fromMultiPart(multipart, U("monitorData."));
            setMonitorData( newItem );
        }
        
    }
    if(multipart->hasContent(U("numExecutors")))
    {
        setNumExecutors(ModelBase::int32_tFromHttpContent(multipart->getContent(U("numExecutors"))));
    }
    if(multipart->hasContent(U("offline")))
    {
        setOffline(ModelBase::boolFromHttpContent(multipart->getContent(U("offline"))));
    }
    if(multipart->hasContent(U("offlineCause")))
    {
        setOfflineCause(ModelBase::stringFromHttpContent(multipart->getContent(U("offlineCause"))));
        
    }
    if(multipart->hasContent(U("offlineCauseReason")))
    {
        setOfflineCauseReason(ModelBase::stringFromHttpContent(multipart->getContent(U("offlineCauseReason"))));
        
    }
    if(multipart->hasContent(U("temporarilyOffline")))
    {
        setTemporarilyOffline(ModelBase::boolFromHttpContent(multipart->getContent(U("temporarilyOffline"))));
    }
    
}


utility::string_t HudsonmodelHudsonMasterComputer::getClass() const
{
    return m__class;
}
void HudsonmodelHudsonMasterComputer::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::_classIsSet() const
{
    return m__classIsSet;
}
void HudsonmodelHudsonMasterComputer::unset_class()
{
    m__classIsSet = false;
}
utility::string_t HudsonmodelHudsonMasterComputer::getDisplayName() const
{
    return m_DisplayName;
}
void HudsonmodelHudsonMasterComputer::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
std::vector<std::shared_ptr<HudsonmodelHudsonMasterComputerexecutors>>& HudsonmodelHudsonMasterComputer::getExecutors()
{
    return m_Executors;
}
bool HudsonmodelHudsonMasterComputer::executorsIsSet() const
{
    return m_ExecutorsIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetExecutors()
{
    m_ExecutorsIsSet = false;
}
utility::string_t HudsonmodelHudsonMasterComputer::getIcon() const
{
    return m_Icon;
}
void HudsonmodelHudsonMasterComputer::setIcon(utility::string_t value)
{
    m_Icon = value;
    m_IconIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::iconIsSet() const
{
    return m_IconIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetIcon()
{
    m_IconIsSet = false;
}
utility::string_t HudsonmodelHudsonMasterComputer::getIconClassName() const
{
    return m_IconClassName;
}
void HudsonmodelHudsonMasterComputer::setIconClassName(utility::string_t value)
{
    m_IconClassName = value;
    m_IconClassNameIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::iconClassNameIsSet() const
{
    return m_IconClassNameIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetIconClassName()
{
    m_IconClassNameIsSet = false;
}
bool HudsonmodelHudsonMasterComputer::getIdle() const
{
    return m_Idle;
}
void HudsonmodelHudsonMasterComputer::setIdle(bool value)
{
    m_Idle = value;
    m_IdleIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::idleIsSet() const
{
    return m_IdleIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetIdle()
{
    m_IdleIsSet = false;
}
bool HudsonmodelHudsonMasterComputer::getJnlpAgent() const
{
    return m_JnlpAgent;
}
void HudsonmodelHudsonMasterComputer::setJnlpAgent(bool value)
{
    m_JnlpAgent = value;
    m_JnlpAgentIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::jnlpAgentIsSet() const
{
    return m_JnlpAgentIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetJnlpAgent()
{
    m_JnlpAgentIsSet = false;
}
bool HudsonmodelHudsonMasterComputer::getLaunchSupported() const
{
    return m_LaunchSupported;
}
void HudsonmodelHudsonMasterComputer::setLaunchSupported(bool value)
{
    m_LaunchSupported = value;
    m_LaunchSupportedIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::launchSupportedIsSet() const
{
    return m_LaunchSupportedIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetLaunchSupported()
{
    m_LaunchSupportedIsSet = false;
}
std::shared_ptr<HudsonmodelLabel1> HudsonmodelHudsonMasterComputer::getLoadStatistics() const
{
    return m_LoadStatistics;
}
void HudsonmodelHudsonMasterComputer::setLoadStatistics(std::shared_ptr<HudsonmodelLabel1> value)
{
    m_LoadStatistics = value;
    m_LoadStatisticsIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::loadStatisticsIsSet() const
{
    return m_LoadStatisticsIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetLoadStatistics()
{
    m_LoadStatisticsIsSet = false;
}
bool HudsonmodelHudsonMasterComputer::getManualLaunchAllowed() const
{
    return m_ManualLaunchAllowed;
}
void HudsonmodelHudsonMasterComputer::setManualLaunchAllowed(bool value)
{
    m_ManualLaunchAllowed = value;
    m_ManualLaunchAllowedIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::manualLaunchAllowedIsSet() const
{
    return m_ManualLaunchAllowedIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetManualLaunchAllowed()
{
    m_ManualLaunchAllowedIsSet = false;
}
std::shared_ptr<HudsonmodelHudsonMasterComputer_monitorData> HudsonmodelHudsonMasterComputer::getMonitorData() const
{
    return m_MonitorData;
}
void HudsonmodelHudsonMasterComputer::setMonitorData(std::shared_ptr<HudsonmodelHudsonMasterComputer_monitorData> value)
{
    m_MonitorData = value;
    m_MonitorDataIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::monitorDataIsSet() const
{
    return m_MonitorDataIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetMonitorData()
{
    m_MonitorDataIsSet = false;
}
int32_t HudsonmodelHudsonMasterComputer::getNumExecutors() const
{
    return m_NumExecutors;
}
void HudsonmodelHudsonMasterComputer::setNumExecutors(int32_t value)
{
    m_NumExecutors = value;
    m_NumExecutorsIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::numExecutorsIsSet() const
{
    return m_NumExecutorsIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetNumExecutors()
{
    m_NumExecutorsIsSet = false;
}
bool HudsonmodelHudsonMasterComputer::getOffline() const
{
    return m_Offline;
}
void HudsonmodelHudsonMasterComputer::setOffline(bool value)
{
    m_Offline = value;
    m_OfflineIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::offlineIsSet() const
{
    return m_OfflineIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetOffline()
{
    m_OfflineIsSet = false;
}
utility::string_t HudsonmodelHudsonMasterComputer::getOfflineCause() const
{
    return m_OfflineCause;
}
void HudsonmodelHudsonMasterComputer::setOfflineCause(utility::string_t value)
{
    m_OfflineCause = value;
    m_OfflineCauseIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::offlineCauseIsSet() const
{
    return m_OfflineCauseIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetOfflineCause()
{
    m_OfflineCauseIsSet = false;
}
utility::string_t HudsonmodelHudsonMasterComputer::getOfflineCauseReason() const
{
    return m_OfflineCauseReason;
}
void HudsonmodelHudsonMasterComputer::setOfflineCauseReason(utility::string_t value)
{
    m_OfflineCauseReason = value;
    m_OfflineCauseReasonIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::offlineCauseReasonIsSet() const
{
    return m_OfflineCauseReasonIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetOfflineCauseReason()
{
    m_OfflineCauseReasonIsSet = false;
}
bool HudsonmodelHudsonMasterComputer::getTemporarilyOffline() const
{
    return m_TemporarilyOffline;
}
void HudsonmodelHudsonMasterComputer::setTemporarilyOffline(bool value)
{
    m_TemporarilyOffline = value;
    m_TemporarilyOfflineIsSet = true;
}
bool HudsonmodelHudsonMasterComputer::temporarilyOfflineIsSet() const
{
    return m_TemporarilyOfflineIsSet;
}
void HudsonmodelHudsonMasterComputer::unsetTemporarilyOffline()
{
    m_TemporarilyOfflineIsSet = false;
}

}
}
}
}

