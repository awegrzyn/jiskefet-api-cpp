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



#include "Run.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Run::Run()
{
    m_RunNumber = 0L;
    m_O2StartTime = utility::datetime();
    m_TrgStartTime = utility::datetime();
    m_TrgEndTime = utility::datetime();
    m_TrgEndTimeIsSet = false;
    m_O2EndTime = utility::datetime();
    m_O2EndTimeIsSet = false;
    m_ActivityId = utility::conversions::to_string_t("");
    m_RunQualityIsSet = false;
    m_NDetectors = 0L;
    m_NFlps = 0L;
    m_NEpns = 0L;
    m_NTimeframes = 0L;
    m_NTimeframesIsSet = false;
    m_NSubtimeframes = 0L;
    m_NSubtimeframesIsSet = false;
    m_BytesReadOut = 0L;
    m_BytesReadOutIsSet = false;
    m_BytesTimeframeBuilder = 0L;
    m_BytesTimeframeBuilderIsSet = false;
}

Run::~Run()
{
}

void Run::validate()
{
    // TODO: implement validation
}

web::json::value Run::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("runNumber")] = ModelBase::toJson(m_RunNumber);
    val[utility::conversions::to_string_t("O2StartTime")] = ModelBase::toJson(m_O2StartTime);
    val[utility::conversions::to_string_t("TrgStartTime")] = ModelBase::toJson(m_TrgStartTime);
    if(m_TrgEndTimeIsSet)
    {
        val[utility::conversions::to_string_t("TrgEndTime")] = ModelBase::toJson(m_TrgEndTime);
    }
    if(m_O2EndTimeIsSet)
    {
        val[utility::conversions::to_string_t("O2EndTime")] = ModelBase::toJson(m_O2EndTime);
    }
    val[utility::conversions::to_string_t("activityId")] = ModelBase::toJson(m_ActivityId);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_RunType )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("runType")] = web::json::value::array(jsonArray);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_RunQuality )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("runQuality")] = web::json::value::array(jsonArray);
        }
    }
    val[utility::conversions::to_string_t("nDetectors")] = ModelBase::toJson(m_NDetectors);
    val[utility::conversions::to_string_t("nFlps")] = ModelBase::toJson(m_NFlps);
    val[utility::conversions::to_string_t("nEpns")] = ModelBase::toJson(m_NEpns);
    if(m_NTimeframesIsSet)
    {
        val[utility::conversions::to_string_t("nTimeframes")] = ModelBase::toJson(m_NTimeframes);
    }
    if(m_NSubtimeframesIsSet)
    {
        val[utility::conversions::to_string_t("nSubtimeframes")] = ModelBase::toJson(m_NSubtimeframes);
    }
    if(m_BytesReadOutIsSet)
    {
        val[utility::conversions::to_string_t("bytesReadOut")] = ModelBase::toJson(m_BytesReadOut);
    }
    if(m_BytesTimeframeBuilderIsSet)
    {
        val[utility::conversions::to_string_t("bytesTimeframeBuilder")] = ModelBase::toJson(m_BytesTimeframeBuilder);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Logs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("logs")] = web::json::value::array(jsonArray);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_FlpRoles )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("flpRoles")] = web::json::value::array(jsonArray);
    }

    return val;
}

void Run::fromJson(web::json::value& val)
{
    setRunNumber(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("runNumber")]));
    setO2StartTime
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("O2StartTime")]));
    setTrgStartTime
    (ModelBase::dateFromJson(val[utility::conversions::to_string_t("TrgStartTime")]));
    if(val.has_field(utility::conversions::to_string_t("TrgEndTime")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TrgEndTime")];
        if(!fieldValue.is_null())
        {
            setTrgEndTime(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("O2EndTime")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("O2EndTime")];
        if(!fieldValue.is_null())
        {
            setO2EndTime(ModelBase::dateFromJson(fieldValue));
        }
    }
    setActivityId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("activityId")]));
    {
        m_RunType.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("runType")].as_array() )
        {
            m_RunType.push_back(ModelBase::stringFromJson(item));
        }
    }
    {
        m_RunQuality.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("runQuality")))
        {
        for( auto& item : val[utility::conversions::to_string_t("runQuality")].as_array() )
        {
            m_RunQuality.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    setNDetectors(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("nDetectors")]));
    setNFlps(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("nFlps")]));
    setNEpns(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("nEpns")]));
    if(val.has_field(utility::conversions::to_string_t("nTimeframes")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("nTimeframes")];
        if(!fieldValue.is_null())
        {
            setNTimeframes(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nSubtimeframes")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("nSubtimeframes")];
        if(!fieldValue.is_null())
        {
            setNSubtimeframes(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytesReadOut")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("bytesReadOut")];
        if(!fieldValue.is_null())
        {
            setBytesReadOut(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bytesTimeframeBuilder")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("bytesTimeframeBuilder")];
        if(!fieldValue.is_null())
        {
            setBytesTimeframeBuilder(ModelBase::int64_tFromJson(fieldValue));
        }
    }
    {
        m_Logs.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("logs")].as_array() )
        {
            if(item.is_null())
            {
                m_Logs.push_back( std::shared_ptr<Log>(nullptr) );
            }
            else
            {
                std::shared_ptr<Log> newItem(new Log());
                newItem->fromJson(item);
                m_Logs.push_back( newItem );
            }
        }
    }
    {
        m_FlpRoles.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("flpRoles")].as_array() )
        {
            if(item.is_null())
            {
                m_FlpRoles.push_back( std::shared_ptr<FlpRole>(nullptr) );
            }
            else
            {
                std::shared_ptr<FlpRole> newItem(new FlpRole());
                newItem->fromJson(item);
                m_FlpRoles.push_back( newItem );
            }
        }
    }
}

void Run::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runNumber"), m_RunNumber));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("O2StartTime"), m_O2StartTime));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TrgStartTime"), m_TrgStartTime));
    if(m_TrgEndTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TrgEndTime"), m_TrgEndTime));
        
    }
    if(m_O2EndTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("O2EndTime"), m_O2EndTime));
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("activityId"), m_ActivityId));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_RunType )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runType"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_RunQuality )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runQuality"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nDetectors"), m_NDetectors));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nFlps"), m_NFlps));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nEpns"), m_NEpns));
    if(m_NTimeframesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nTimeframes"), m_NTimeframes));
    }
    if(m_NSubtimeframesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nSubtimeframes"), m_NSubtimeframes));
    }
    if(m_BytesReadOutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesReadOut"), m_BytesReadOut));
    }
    if(m_BytesTimeframeBuilderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bytesTimeframeBuilder"), m_BytesTimeframeBuilder));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Logs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("logs"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_FlpRoles )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("flpRoles"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void Run::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setRunNumber(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runNumber"))));
    setO2StartTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("O2StartTime"))));
    setTrgStartTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TrgStartTime"))));
    if(multipart->hasContent(utility::conversions::to_string_t("TrgEndTime")))
    {
        setTrgEndTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TrgEndTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("O2EndTime")))
    {
        setO2EndTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("O2EndTime"))));
    }
    setActivityId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("activityId"))));
    {
        m_RunType.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runType"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_RunType.push_back(ModelBase::stringFromJson(item));
        }
    }
    {
        m_RunQuality.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("runQuality")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runQuality"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_RunQuality.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    setNDetectors(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nDetectors"))));
    setNFlps(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nFlps"))));
    setNEpns(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nEpns"))));
    if(multipart->hasContent(utility::conversions::to_string_t("nTimeframes")))
    {
        setNTimeframes(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nTimeframes"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nSubtimeframes")))
    {
        setNSubtimeframes(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nSubtimeframes"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bytesReadOut")))
    {
        setBytesReadOut(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesReadOut"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("bytesTimeframeBuilder")))
    {
        setBytesTimeframeBuilder(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bytesTimeframeBuilder"))));
    }
    {
        m_Logs.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("logs"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Logs.push_back( std::shared_ptr<Log>(nullptr) );
            }
            else
            {
                std::shared_ptr<Log> newItem(new Log());
                newItem->fromJson(item);
                m_Logs.push_back( newItem );
            }
        }
    }
    {
        m_FlpRoles.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("flpRoles"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_FlpRoles.push_back( std::shared_ptr<FlpRole>(nullptr) );
            }
            else
            {
                std::shared_ptr<FlpRole> newItem(new FlpRole());
                newItem->fromJson(item);
                m_FlpRoles.push_back( newItem );
            }
        }
    }
}

int64_t Run::getRunNumber() const
{
    return m_RunNumber;
}


void Run::setRunNumber(int64_t value)
{
    m_RunNumber = value;
    
}
utility::datetime Run::getO2StartTime() const
{
    return m_O2StartTime;
}


void Run::setO2StartTime(utility::datetime value)
{
    m_O2StartTime = value;
    
}
utility::datetime Run::getTrgStartTime() const
{
    return m_TrgStartTime;
}


void Run::setTrgStartTime(utility::datetime value)
{
    m_TrgStartTime = value;
    
}
utility::datetime Run::getTrgEndTime() const
{
    return m_TrgEndTime;
}


void Run::setTrgEndTime(utility::datetime value)
{
    m_TrgEndTime = value;
    m_TrgEndTimeIsSet = true;
}
bool Run::trgEndTimeIsSet() const
{
    return m_TrgEndTimeIsSet;
}

void Run::unsetTrgEndTime()
{
    m_TrgEndTimeIsSet = false;
}

utility::datetime Run::getO2EndTime() const
{
    return m_O2EndTime;
}


void Run::setO2EndTime(utility::datetime value)
{
    m_O2EndTime = value;
    m_O2EndTimeIsSet = true;
}
bool Run::o2EndTimeIsSet() const
{
    return m_O2EndTimeIsSet;
}

void Run::unsetO2EndTime()
{
    m_O2EndTimeIsSet = false;
}

utility::string_t Run::getActivityId() const
{
    return m_ActivityId;
}


void Run::setActivityId(utility::string_t value)
{
    m_ActivityId = value;
    
}
std::vector<utility::string_t>& Run::getRunType()
{
    return m_RunType;
}

void Run::setRunType(std::vector<utility::string_t> value)
{
    m_RunType = value;
    
}
std::vector<utility::string_t>& Run::getRunQuality()
{
    return m_RunQuality;
}

void Run::setRunQuality(std::vector<utility::string_t> value)
{
    m_RunQuality = value;
    m_RunQualityIsSet = true;
}
bool Run::runQualityIsSet() const
{
    return m_RunQualityIsSet;
}

void Run::unsetRunQuality()
{
    m_RunQualityIsSet = false;
}

int64_t Run::getNDetectors() const
{
    return m_NDetectors;
}


void Run::setNDetectors(int64_t value)
{
    m_NDetectors = value;
    
}
int64_t Run::getNFlps() const
{
    return m_NFlps;
}


void Run::setNFlps(int64_t value)
{
    m_NFlps = value;
    
}
int64_t Run::getNEpns() const
{
    return m_NEpns;
}


void Run::setNEpns(int64_t value)
{
    m_NEpns = value;
    
}
int64_t Run::getNTimeframes() const
{
    return m_NTimeframes;
}


void Run::setNTimeframes(int64_t value)
{
    m_NTimeframes = value;
    m_NTimeframesIsSet = true;
}
bool Run::nTimeframesIsSet() const
{
    return m_NTimeframesIsSet;
}

void Run::unsetNTimeframes()
{
    m_NTimeframesIsSet = false;
}

int64_t Run::getNSubtimeframes() const
{
    return m_NSubtimeframes;
}


void Run::setNSubtimeframes(int64_t value)
{
    m_NSubtimeframes = value;
    m_NSubtimeframesIsSet = true;
}
bool Run::nSubtimeframesIsSet() const
{
    return m_NSubtimeframesIsSet;
}

void Run::unsetNSubtimeframes()
{
    m_NSubtimeframesIsSet = false;
}

int64_t Run::getBytesReadOut() const
{
    return m_BytesReadOut;
}


void Run::setBytesReadOut(int64_t value)
{
    m_BytesReadOut = value;
    m_BytesReadOutIsSet = true;
}
bool Run::bytesReadOutIsSet() const
{
    return m_BytesReadOutIsSet;
}

void Run::unsetBytesReadOut()
{
    m_BytesReadOutIsSet = false;
}

int64_t Run::getBytesTimeframeBuilder() const
{
    return m_BytesTimeframeBuilder;
}


void Run::setBytesTimeframeBuilder(int64_t value)
{
    m_BytesTimeframeBuilder = value;
    m_BytesTimeframeBuilderIsSet = true;
}
bool Run::bytesTimeframeBuilderIsSet() const
{
    return m_BytesTimeframeBuilderIsSet;
}

void Run::unsetBytesTimeframeBuilder()
{
    m_BytesTimeframeBuilderIsSet = false;
}

std::vector<std::shared_ptr<Log>>& Run::getLogs()
{
    return m_Logs;
}

void Run::setLogs(std::vector<std::shared_ptr<Log>> value)
{
    m_Logs = value;
    
}
std::vector<std::shared_ptr<FlpRole>>& Run::getFlpRoles()
{
    return m_FlpRoles;
}

void Run::setFlpRoles(std::vector<std::shared_ptr<FlpRole>> value)
{
    m_FlpRoles = value;
    
}
}
}
}
}

