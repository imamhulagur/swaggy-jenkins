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
 * SwaggyjenkinsPipeline_latestRun.h
 *
 * 
 */

#ifndef SwaggyjenkinsPipeline_latestRun_H_
#define SwaggyjenkinsPipeline_latestRun_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "SwaggyjenkinsPipeline_latestRunartifacts.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SwaggyjenkinsPipeline_latestRun
    : public ModelBase
{
public:
    SwaggyjenkinsPipeline_latestRun();
    virtual ~SwaggyjenkinsPipeline_latestRun();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SwaggyjenkinsPipeline_latestRun members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SwaggyjenkinsPipeline_latestRunartifacts>>& getArtifacts();
    bool artifactsIsSet() const;
    void unsetArtifacts();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDurationInMillis() const;
    void setDurationInMillis(int32_t value);
    bool durationInMillisIsSet() const;
    void unsetDurationInMillis();
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(int32_t value);
    bool estimatedDurationInMillisIsSet() const;
    void unsetEstimatedDurationInMillis();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnQueueTime() const;
    void setEnQueueTime(utility::string_t value);
    bool enQueueTimeIsSet() const;
    void unsetEnQueueTime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEndTime() const;
    void setEndTime(utility::string_t value);
    bool endTimeIsSet() const;
    void unsetEndTime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganization() const;
    void setOrganization(utility::string_t value);
    bool organizationIsSet() const;
    void unsetOrganization();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPipeline() const;
    void setPipeline(utility::string_t value);
    bool pipelineIsSet() const;
    void unsetPipeline();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResult() const;
    void setResult(utility::string_t value);
    bool resultIsSet() const;
    void unsetResult();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRunSummary() const;
    void setRunSummary(utility::string_t value);
    bool runSummaryIsSet() const;
    void unsetRunSummary();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStartTime() const;
    void setStartTime(utility::string_t value);
    bool startTimeIsSet() const;
    void unsetStartTime();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getState() const;
    void setState(utility::string_t value);
    bool stateIsSet() const;
    void unsetState();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    void setType(utility::string_t value);
    bool typeIsSet() const;
    void unsetType();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCommitId() const;
    void setCommitId(utility::string_t value);
    bool commitIdIsSet() const;
    void unsetCommitId();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    void setClass(utility::string_t value);
    bool _classIsSet() const;
    void unset_class();

protected:
    std::vector<std::shared_ptr<SwaggyjenkinsPipeline_latestRunartifacts>> m_Artifacts;
    bool m_ArtifactsIsSet;
int32_t m_DurationInMillis;
    bool m_DurationInMillisIsSet;
int32_t m_EstimatedDurationInMillis;
    bool m_EstimatedDurationInMillisIsSet;
utility::string_t m_EnQueueTime;
    bool m_EnQueueTimeIsSet;
utility::string_t m_EndTime;
    bool m_EndTimeIsSet;
utility::string_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Organization;
    bool m_OrganizationIsSet;
utility::string_t m_Pipeline;
    bool m_PipelineIsSet;
utility::string_t m_Result;
    bool m_ResultIsSet;
utility::string_t m_RunSummary;
    bool m_RunSummaryIsSet;
utility::string_t m_StartTime;
    bool m_StartTimeIsSet;
utility::string_t m_State;
    bool m_StateIsSet;
utility::string_t m_Type;
    bool m_TypeIsSet;
utility::string_t m_CommitId;
    bool m_CommitIdIsSet;
utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* SwaggyjenkinsPipeline_latestRun_H_ */
