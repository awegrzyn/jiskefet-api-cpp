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
 * FlpRole.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_FlpRole_H_
#define IO_SWAGGER_CLIENT_MODEL_FlpRole_H_


#include "../ModelBase.h"

#include "Object.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  FlpRole
    : public ModelBase
{
public:
    FlpRole();
    virtual ~FlpRole();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FlpRole members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getRun() const;
        void setRun(std::shared_ptr<Object> value);

protected:
    std::shared_ptr<Object> m_Run;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_FlpRole_H_ */
