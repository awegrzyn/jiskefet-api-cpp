/**
 * Jiskefet
 * Running with /api prefix
 *
 * OpenAPI spec version: 1.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.1-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * IHttpBody.h
 *
 * This is the interface for contents that can be sent to a remote HTTP server.
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_IHttpBody_H_
#define IO_SWAGGER_CLIENT_MODEL_IHttpBody_H_


#include <iostream>

namespace io {
namespace swagger {
namespace client {
namespace model {

class  IHttpBody
{
public:
    virtual ~IHttpBody() { }

    virtual void writeTo( std::ostream& stream ) = 0;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_IHttpBody_H_ */
