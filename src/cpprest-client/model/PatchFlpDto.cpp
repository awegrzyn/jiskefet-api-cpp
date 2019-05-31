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



#include "PatchFlpDto.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PatchFlpDto::PatchFlpDto()
{
    m_NSubTimeframes = 0L;
    m_EquipmentBytes = 0L;
    m_RecordingBytes = 0L;
    m_FairMQBytes = 0L;
}

PatchFlpDto::~PatchFlpDto()
{
}

void PatchFlpDto::validate()
{
    // TODO: implement validation
}

web::json::value PatchFlpDto::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("nSubTimeframes")] = ModelBase::toJson(m_NSubTimeframes);
    val[utility::conversions::to_string_t("equipmentBytes")] = ModelBase::toJson(m_EquipmentBytes);
    val[utility::conversions::to_string_t("recordingBytes")] = ModelBase::toJson(m_RecordingBytes);
    val[utility::conversions::to_string_t("fairMQBytes")] = ModelBase::toJson(m_FairMQBytes);

    return val;
}

void PatchFlpDto::fromJson(web::json::value& val)
{
    setNSubTimeframes(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("nSubTimeframes")]));
    setEquipmentBytes(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("equipmentBytes")]));
    setRecordingBytes(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("recordingBytes")]));
    setFairMQBytes(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("fairMQBytes")]));
}

void PatchFlpDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nSubTimeframes"), m_NSubTimeframes));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("equipmentBytes"), m_EquipmentBytes));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("recordingBytes"), m_RecordingBytes));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fairMQBytes"), m_FairMQBytes));
}

void PatchFlpDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setNSubTimeframes(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("nSubTimeframes"))));
    setEquipmentBytes(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("equipmentBytes"))));
    setRecordingBytes(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("recordingBytes"))));
    setFairMQBytes(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fairMQBytes"))));
}

int64_t PatchFlpDto::getNSubTimeframes() const
{
    return m_NSubTimeframes;
}


void PatchFlpDto::setNSubTimeframes(int64_t value)
{
    m_NSubTimeframes = value;
    
}
int64_t PatchFlpDto::getEquipmentBytes() const
{
    return m_EquipmentBytes;
}


void PatchFlpDto::setEquipmentBytes(int64_t value)
{
    m_EquipmentBytes = value;
    
}
int64_t PatchFlpDto::getRecordingBytes() const
{
    return m_RecordingBytes;
}


void PatchFlpDto::setRecordingBytes(int64_t value)
{
    m_RecordingBytes = value;
    
}
int64_t PatchFlpDto::getFairMQBytes() const
{
    return m_FairMQBytes;
}


void PatchFlpDto::setFairMQBytes(int64_t value)
{
    m_FairMQBytes = value;
    
}
}
}
}
}
