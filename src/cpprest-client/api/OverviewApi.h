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
 * OverviewApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_OverviewApi_H_
#define IO_SWAGGER_CLIENT_API_OverviewApi_H_


#include "../ApiClient.h"

#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  OverviewApi
{
public:
    OverviewApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~OverviewApi();
    /// <summary>
    /// Returns all Overviews that belong to a specific Log.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="timeRange">In which time range the logs of eachsubsystem should be posted (optional)</param>
    pplx::task<void> overviewGet(
        boost::optional<utility::string_t> timeRange
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_OverviewApi_H_ */

