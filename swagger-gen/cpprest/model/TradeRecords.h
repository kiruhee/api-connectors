/**
 * Bybit API
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * TradeRecords.h
 *
 * Get the trade records of a order response
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TradeRecords_H_
#define IO_SWAGGER_CLIENT_MODEL_TradeRecords_H_


#include "../ModelBase.h"

#include "TradeRecordsInfo.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Get the trade records of a order response
/// </summary>
class  TradeRecords
    : public ModelBase
{
public:
    TradeRecords();
    virtual ~TradeRecords();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TradeRecords members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderId() const;
    bool orderIdIsSet() const;
    void unsetOrder_id();
    void setOrderId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<TradeRecordsInfo>>& getTradeList();
    bool tradeListIsSet() const;
    void unsetTrade_list();
    void setTradeList(std::vector<std::shared_ptr<TradeRecordsInfo>> value);

protected:
    utility::string_t m_Order_id;
    bool m_Order_idIsSet;
    std::vector<std::shared_ptr<TradeRecordsInfo>> m_Trade_list;
    bool m_Trade_listIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TradeRecords_H_ */
