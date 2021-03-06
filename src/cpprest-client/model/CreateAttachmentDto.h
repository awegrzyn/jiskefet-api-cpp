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
 * CreateAttachmentDto.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_CreateAttachmentDto_H_
#define IO_SWAGGER_CLIENT_MODEL_CreateAttachmentDto_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreateAttachmentDto
    : public ModelBase
{
public:
    CreateAttachmentDto();
    virtual ~CreateAttachmentDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateAttachmentDto members

    /// <summary>
    /// What is the name of the file?
    /// </summary>
    utility::string_t getTitle() const;
        void setTitle(utility::string_t value);
    /// <summary>
    /// Name of the uploaded file.
    /// </summary>
    utility::string_t getFileName() const;
        void setFileName(utility::string_t value);
    /// <summary>
    /// File size in bytes.
    /// </summary>
    int64_t getFileSize() const;
        void setFileSize(int64_t value);
    /// <summary>
    /// What kind of file is it?
    /// </summary>
    utility::string_t getFileMime() const;
        void setFileMime(utility::string_t value);
    /// <summary>
    /// Content type header containing file mime
    /// </summary>
    utility::string_t getContentType() const;
        void setContentType(utility::string_t value);
    /// <summary>
    /// The base64 encoded file data.
    /// </summary>
    utility::string_t getFileData() const;
        void setFileData(utility::string_t value);
    /// <summary>
    /// The id of the corresponding Log
    /// </summary>
    int64_t getLogId() const;
        void setLogId(int64_t value);

protected:
    utility::string_t m_Title;
        utility::string_t m_FileName;
        int64_t m_FileSize;
        utility::string_t m_FileMime;
        utility::string_t m_ContentType;
        utility::string_t m_FileData;
        int64_t m_LogId;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_CreateAttachmentDto_H_ */
