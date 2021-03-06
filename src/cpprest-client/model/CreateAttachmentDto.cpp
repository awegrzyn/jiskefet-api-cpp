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



#include "CreateAttachmentDto.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CreateAttachmentDto::CreateAttachmentDto()
{
    m_Title = utility::conversions::to_string_t("");
    m_FileName = utility::conversions::to_string_t("");
    m_FileSize = 0L;
    m_FileMime = utility::conversions::to_string_t("");
    m_ContentType = utility::conversions::to_string_t("");
    m_FileData = utility::conversions::to_string_t("");
    m_LogId = 0L;
}

CreateAttachmentDto::~CreateAttachmentDto()
{
}

void CreateAttachmentDto::validate()
{
    // TODO: implement validation
}

web::json::value CreateAttachmentDto::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    val[utility::conversions::to_string_t("fileName")] = ModelBase::toJson(m_FileName);
    val[utility::conversions::to_string_t("fileSize")] = ModelBase::toJson(m_FileSize);
    val[utility::conversions::to_string_t("fileMime")] = ModelBase::toJson(m_FileMime);
    val[utility::conversions::to_string_t("contentType")] = ModelBase::toJson(m_ContentType);
    val[utility::conversions::to_string_t("fileData")] = ModelBase::toJson(m_FileData);
    val[utility::conversions::to_string_t("logId")] = ModelBase::toJson(m_LogId);

    return val;
}

void CreateAttachmentDto::fromJson(web::json::value& val)
{
    setTitle(ModelBase::stringFromJson(val[utility::conversions::to_string_t("title")]));
    setFileName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("fileName")]));
    setFileSize(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("fileSize")]));
    setFileMime(ModelBase::stringFromJson(val[utility::conversions::to_string_t("fileMime")]));
    setContentType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("contentType")]));
    setFileData(ModelBase::stringFromJson(val[utility::conversions::to_string_t("fileData")]));
    setLogId(ModelBase::int64_tFromJson(val[utility::conversions::to_string_t("logId")]));
}

void CreateAttachmentDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fileName"), m_FileName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fileSize"), m_FileSize));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fileMime"), m_FileMime));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentType"), m_ContentType));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fileData"), m_FileData));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("logId"), m_LogId));
}

void CreateAttachmentDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setTitle(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("title"))));
    setFileName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fileName"))));
    setFileSize(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fileSize"))));
    setFileMime(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fileMime"))));
    setContentType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentType"))));
    setFileData(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fileData"))));
    setLogId(ModelBase::int64_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("logId"))));
}

utility::string_t CreateAttachmentDto::getTitle() const
{
    return m_Title;
}


void CreateAttachmentDto::setTitle(utility::string_t value)
{
    m_Title = value;
    
}
utility::string_t CreateAttachmentDto::getFileName() const
{
    return m_FileName;
}


void CreateAttachmentDto::setFileName(utility::string_t value)
{
    m_FileName = value;
    
}
int64_t CreateAttachmentDto::getFileSize() const
{
    return m_FileSize;
}


void CreateAttachmentDto::setFileSize(int64_t value)
{
    m_FileSize = value;
    
}
utility::string_t CreateAttachmentDto::getFileMime() const
{
    return m_FileMime;
}


void CreateAttachmentDto::setFileMime(utility::string_t value)
{
    m_FileMime = value;
    
}
utility::string_t CreateAttachmentDto::getContentType() const
{
    return m_ContentType;
}


void CreateAttachmentDto::setContentType(utility::string_t value)
{
    m_ContentType = value;
    
}
utility::string_t CreateAttachmentDto::getFileData() const
{
    return m_FileData;
}


void CreateAttachmentDto::setFileData(utility::string_t value)
{
    m_FileData = value;
    
}
int64_t CreateAttachmentDto::getLogId() const
{
    return m_LogId;
}


void CreateAttachmentDto::setLogId(int64_t value)
{
    m_LogId = value;
    
}
}
}
}
}

