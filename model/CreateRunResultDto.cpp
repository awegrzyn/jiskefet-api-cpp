/**
 * Jiskefet
 * Running with /api prefix
 *
 * OpenAPI spec version: 1.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.1.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "CreateRunResultDto.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CreateRunResultDto::CreateRunResultDto()
{
    m_TimeO2Start = utility::datetime();
    m_TimeTrgStart = utility::datetime();
    m_TimeO2End = utility::datetime();
    m_TimeTrgEnd = utility::datetime();
    m_RunType = utility::conversions::to_string_t("");
    m_RunQuality = utility::conversions::to_string_t("");
    m_ActivityId = utility::conversions::to_string_t("");
    m_NDetectors = 0;
    m_NFlps = 0;
    m_NEpns = 0;
    m_NTimeframes = 0;
    m_NSubtimeframes = 0;
    m_BytesReadOut = 0;
    m_BytesTimeframeBuilder = 0;
    m_RunNumber = 0;
    m_RunNumberIsSet = false;
}

CreateRunResultDto::~CreateRunResultDto()
{
}

void CreateRunResultDto::validate()
{
    // TODO: implement validation
}

web::json::value CreateRunResultDto::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("timeO2Start")] = ModelBase::toJson(m_TimeO2Start);
    val[utility::conversions::to_string_t("timeTrgStart")] = ModelBase::toJson(m_TimeTrgStart);
    val[utility::conversions::to_string_t("timeO2End")] = ModelBase::toJson(m_TimeO2End);
    val[utility::conversions::to_string_t("timeTrgEnd")] = ModelBase::toJson(m_TimeTrgEnd);
    val[utility::conversions::to_string_t("runType")] = ModelBase::toJson(m_RunType);
    val[utility::conversions::to_string_t("runQuality")] = ModelBase::toJson(m_RunQuality);
    val[utility::conversions::to_string_t("activityId")] = ModelBase::toJson(m_ActivityId);
    val[utility::conversions::to_string_t("nDetectors")] = ModelBase::toJson(m_NDetectors);
    val[utility::conversions::to_string_t("nFlps")] = ModelBase::toJson(m_NFlps);
    val[utility::conversions::to_string_t("nEpns")] = ModelBase::toJson(m_NEpns);
    val[utility::conversions::to_string_t("nTimeframes")] = ModelBase::toJson(m_NTimeframes);
    val[utility::conversions::to_string_t("nSubtimeframes")] = ModelBase::toJson(m_NSubtimeframes);
    val[utility::conversions::to_string_t("bytesReadOut")] = ModelBase::toJson(m_BytesReadOut);
    val[utility::conversions::to_string_t("bytesTimeframeBuilder")] = ModelBase::toJson(m_BytesTimeframeBuilder);
    if(m_RunNumberIsSet)
    {
        val[utility::conversions::to_string_t("runNumber")] = ModelBase::toJson(m_RunNumber);
    }

    return val;
}

void CreateRunResultDto::fromJson(web::json::value& val)
{
    setTimeO2Start
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("timeO2Start")]));
    setTimeTrgStart
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("timeTrgStart")]));
    setTimeO2End
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("timeO2End")]));
    setTimeTrgEnd
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("timeTrgEnd")]));
    setRunType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("runType")]));
    setRunQuality(ModelBase::stringFromJson(val[utility::conversions::to_string_t("runQuality")]));
    setActivityId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("activityId")]));
    setNDetectors(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("nDetectors")]));
    setNFlps(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("nFlps")]));
    setNEpns(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("nEpns")]));
    setNTimeframes(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("nTimeframes")]));
    setNSubtimeframes(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("nSubtimeframes")]));
    setBytesReadOut(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("bytesReadOut")]));
    setBytesTimeframeBuilder(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("bytesTimeframeBuilder")]));
    if(val.has_field(utility::conversions::to_string_t("runNumber")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("runNumber")];
        if(!fieldValue.is_null())
        {
            setRunNumber(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void CreateRunResultDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timeO2Start"), m_TimeO2Start));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timeTrgStart"), m_TimeTrgStart));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timeO2End"), m_TimeO2End));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timeTrgEnd"), m_TimeTrgEnd));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runType"), m_RunType));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runQuality"), m_RunQuality));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("activityId"), m_ActivityId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nDetectors"), m_NDetectors));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nFlps"), m_NFlps));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nEpns"), m_NEpns));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nTimeframes"), m_NTimeframes));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nSubtimeframes"), m_NSubtimeframes));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesReadOut"), m_BytesReadOut));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesTimeframeBuilder"), m_BytesTimeframeBuilder));
    if(m_RunNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runNumber"), m_RunNumber));
    }
}

void CreateRunResultDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setTimeO2Start(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timeO2Start"))));
    setTimeTrgStart(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timeTrgStart"))));
    setTimeO2End(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timeO2End"))));
    setTimeTrgEnd(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timeTrgEnd"))));
    setRunType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runType"))));
    setRunQuality(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runQuality"))));
    setActivityId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("activityId"))));
    setNDetectors(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nDetectors"))));
    setNFlps(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nFlps"))));
    setNEpns(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nEpns"))));
    setNTimeframes(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nTimeframes"))));
    setNSubtimeframes(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nSubtimeframes"))));
    setBytesReadOut(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesReadOut"))));
    setBytesTimeframeBuilder(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesTimeframeBuilder"))));
    if(multipart->hasContent(utility::conversions::to_string_t("runNumber")))
    {
        setRunNumber(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runNumber"))));
    }
}

utility::datetime CreateRunResultDto::getTimeO2Start() const
{
    return m_TimeO2Start;
}


void CreateRunResultDto::setTimeO2Start(utility::datetime value)
{
    m_TimeO2Start = value;
    
}
utility::datetime CreateRunResultDto::getTimeTrgStart() const
{
    return m_TimeTrgStart;
}


void CreateRunResultDto::setTimeTrgStart(utility::datetime value)
{
    m_TimeTrgStart = value;
    
}
utility::datetime CreateRunResultDto::getTimeO2End() const
{
    return m_TimeO2End;
}


void CreateRunResultDto::setTimeO2End(utility::datetime value)
{
    m_TimeO2End = value;
    
}
utility::datetime CreateRunResultDto::getTimeTrgEnd() const
{
    return m_TimeTrgEnd;
}


void CreateRunResultDto::setTimeTrgEnd(utility::datetime value)
{
    m_TimeTrgEnd = value;
    
}
utility::string_t CreateRunResultDto::getRunType() const
{
    return m_RunType;
}


void CreateRunResultDto::setRunType(utility::string_t value)
{
    m_RunType = value;
    
}
utility::string_t CreateRunResultDto::getRunQuality() const
{
    return m_RunQuality;
}


void CreateRunResultDto::setRunQuality(utility::string_t value)
{
    m_RunQuality = value;
    
}
utility::string_t CreateRunResultDto::getActivityId() const
{
    return m_ActivityId;
}


void CreateRunResultDto::setActivityId(utility::string_t value)
{
    m_ActivityId = value;
    
}
int32_t CreateRunResultDto::getNDetectors() const
{
    return m_NDetectors;
}


void CreateRunResultDto::setNDetectors(int32_t value)
{
    m_NDetectors = value;
    
}
int32_t CreateRunResultDto::getNFlps() const
{
    return m_NFlps;
}


void CreateRunResultDto::setNFlps(int32_t value)
{
    m_NFlps = value;
    
}
int32_t CreateRunResultDto::getNEpns() const
{
    return m_NEpns;
}


void CreateRunResultDto::setNEpns(int32_t value)
{
    m_NEpns = value;
    
}
int32_t CreateRunResultDto::getNTimeframes() const
{
    return m_NTimeframes;
}


void CreateRunResultDto::setNTimeframes(int32_t value)
{
    m_NTimeframes = value;
    
}
int32_t CreateRunResultDto::getNSubtimeframes() const
{
    return m_NSubtimeframes;
}


void CreateRunResultDto::setNSubtimeframes(int32_t value)
{
    m_NSubtimeframes = value;
    
}
int32_t CreateRunResultDto::getBytesReadOut() const
{
    return m_BytesReadOut;
}


void CreateRunResultDto::setBytesReadOut(int32_t value)
{
    m_BytesReadOut = value;
    
}
int32_t CreateRunResultDto::getBytesTimeframeBuilder() const
{
    return m_BytesTimeframeBuilder;
}


void CreateRunResultDto::setBytesTimeframeBuilder(int32_t value)
{
    m_BytesTimeframeBuilder = value;
    
}
int32_t CreateRunResultDto::getRunNumber() const
{
    return m_RunNumber;
}


void CreateRunResultDto::setRunNumber(int32_t value)
{
    m_RunNumber = value;
    m_RunNumberIsSet = true;
}
bool CreateRunResultDto::runNumberIsSet() const
{
    return m_RunNumberIsSet;
}

void CreateRunResultDto::unsetRunNumber()
{
    m_RunNumberIsSet = false;
}

}
}
}
}
