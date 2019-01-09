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



#include "CreateLogDto.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CreateLogDto::CreateLogDto()
{
    m_Subtype = utility::conversions::to_string_t("");
    m_Origin = utility::conversions::to_string_t("");
    m_Title = utility::conversions::to_string_t("");
    m_Text = utility::conversions::to_string_t("");
}

CreateLogDto::~CreateLogDto()
{
}

void CreateLogDto::validate()
{
    // TODO: implement validation
}

web::json::value CreateLogDto::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("subtype")] = ModelBase::toJson(m_Subtype);
    val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(m_Origin);
    val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Attachments )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("attachments")] = web::json::value::array(jsonArray);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Runs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("runs")] = web::json::value::array(jsonArray);
    }

    return val;
}

void CreateLogDto::fromJson(web::json::value& val)
{
    setSubtype(ModelBase::stringFromJson(val[utility::conversions::to_string_t("subtype")]));
    setOrigin(ModelBase::stringFromJson(val[utility::conversions::to_string_t("origin")]));
    setTitle(ModelBase::stringFromJson(val[utility::conversions::to_string_t("title")]));
    setText(ModelBase::stringFromJson(val[utility::conversions::to_string_t("text")]));
    {
        m_Attachments.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("attachments")].as_array() )
        {
            m_Attachments.push_back(ModelBase::stringFromJson(item));
        }
    }
    {
        m_Runs.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("runs")].as_array() )
        {
            m_Runs.push_back(ModelBase::stringFromJson(item));
        }
    }
}

void CreateLogDto::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subtype"), m_Subtype));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("origin"), m_Origin));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Attachments )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attachments"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Runs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("runs"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void CreateLogDto::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setSubtype(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("subtype"))));
    setOrigin(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("origin"))));
    setTitle(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("title"))));
    setText(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("text"))));
    {
        m_Attachments.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("attachments"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Attachments.push_back(ModelBase::stringFromJson(item));
        }
    }
    {
        m_Runs.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("runs"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Runs.push_back(ModelBase::stringFromJson(item));
        }
    }
}

utility::string_t CreateLogDto::getSubtype() const
{
    return m_Subtype;
}


void CreateLogDto::setSubtype(utility::string_t value)
{
    m_Subtype = value;
    
}
utility::string_t CreateLogDto::getOrigin() const
{
    return m_Origin;
}


void CreateLogDto::setOrigin(utility::string_t value)
{
    m_Origin = value;
    
}
utility::string_t CreateLogDto::getTitle() const
{
    return m_Title;
}


void CreateLogDto::setTitle(utility::string_t value)
{
    m_Title = value;
    
}
utility::string_t CreateLogDto::getText() const
{
    return m_Text;
}


void CreateLogDto::setText(utility::string_t value)
{
    m_Text = value;
    
}
std::vector<utility::string_t>& CreateLogDto::getAttachments()
{
    return m_Attachments;
}

void CreateLogDto::setAttachments(std::vector<utility::string_t> value)
{
    m_Attachments = value;
    
}
std::vector<utility::string_t>& CreateLogDto::getRuns()
{
    return m_Runs;
}

void CreateLogDto::setRuns(std::vector<utility::string_t> value)
{
    m_Runs = value;
    
}
}
}
}
}

