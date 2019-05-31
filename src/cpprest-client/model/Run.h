/**
 * Jiskefet
 * Running with /api base path
 *
 * OpenAPI spec version: 0.1.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.4.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Run.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Run_H_
#define IO_SWAGGER_CLIENT_MODEL_Run_H_


#include "../ModelBase.h"

#include "FlpRole.h"
#include <cpprest/details/basic_types.h>
#include <vector>
#include "Log.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Run
    : public ModelBase
{
public:
    Run();
    virtual ~Run();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Run members

    /// <summary>
    /// 
    /// </summary>
    int64_t getRunNumber() const;
        void setRunNumber(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getO2StartTime() const;
        void setO2StartTime(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTrgStartTime() const;
        void setTrgStartTime(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTrgEndTime() const;
    bool trgEndTimeIsSet() const;
    void unsetTrgEndTime();
    void setTrgEndTime(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getO2EndTime() const;
    bool o2EndTimeIsSet() const;
    void unsetO2EndTime();
    void setO2EndTime(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getActivityId() const;
        void setActivityId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getRunType();
        void setRunType(std::vector<utility::string_t> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getRunQuality();
    bool runQualityIsSet() const;
    void unsetRunQuality();
    void setRunQuality(std::vector<utility::string_t> value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getNDetectors() const;
        void setNDetectors(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getNFlps() const;
        void setNFlps(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getNEpns() const;
        void setNEpns(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getNTimeframes() const;
    bool nTimeframesIsSet() const;
    void unsetNTimeframes();
    void setNTimeframes(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getNSubtimeframes() const;
    bool nSubtimeframesIsSet() const;
    void unsetNSubtimeframes();
    void setNSubtimeframes(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getBytesReadOut() const;
    bool bytesReadOutIsSet() const;
    void unsetBytesReadOut();
    void setBytesReadOut(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    int64_t getBytesTimeframeBuilder() const;
    bool bytesTimeframeBuilderIsSet() const;
    void unsetBytesTimeframeBuilder();
    void setBytesTimeframeBuilder(int64_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Log>>& getLogs();
        void setLogs(std::vector<std::shared_ptr<Log>> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<FlpRole>>& getFlpRoles();
        void setFlpRoles(std::vector<std::shared_ptr<FlpRole>> value);

protected:
    int64_t m_RunNumber;
        utility::datetime m_O2StartTime;
        utility::datetime m_TrgStartTime;
        utility::datetime m_TrgEndTime;
    bool m_TrgEndTimeIsSet;
    utility::datetime m_O2EndTime;
    bool m_O2EndTimeIsSet;
    utility::string_t m_ActivityId;
        std::vector<utility::string_t> m_RunType;
        std::vector<utility::string_t> m_RunQuality;
    bool m_RunQualityIsSet;
    int64_t m_NDetectors;
        int64_t m_NFlps;
        int64_t m_NEpns;
        int64_t m_NTimeframes;
    bool m_NTimeframesIsSet;
    int64_t m_NSubtimeframes;
    bool m_NSubtimeframesIsSet;
    int64_t m_BytesReadOut;
    bool m_BytesReadOutIsSet;
    int64_t m_BytesTimeframeBuilder;
    bool m_BytesTimeframeBuilderIsSet;
    std::vector<std::shared_ptr<Log>> m_Logs;
        std::vector<std::shared_ptr<FlpRole>> m_FlpRoles;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Run_H_ */