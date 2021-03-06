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
 * LinkLogToRunDto.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_LinkLogToRunDto_H_
#define IO_SWAGGER_CLIENT_MODEL_LinkLogToRunDto_H_


#include "../ModelBase.h"


namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  LinkLogToRunDto
    : public ModelBase
{
public:
    LinkLogToRunDto();
    virtual ~LinkLogToRunDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// LinkLogToRunDto members

    /// <summary>
    /// The id of the log to link to the run.
    /// </summary>
    int64_t getLogId() const;
        void setLogId(int64_t value);

protected:
    int64_t m_LogId;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_LinkLogToRunDto_H_ */
