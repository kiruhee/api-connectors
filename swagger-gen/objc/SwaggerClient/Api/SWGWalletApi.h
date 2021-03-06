#import <Foundation/Foundation.h>
#import "SWGApi.h"

/**
* Bybit API
* ## REST API for the Bybit Exchange. 
*
* OpenAPI spec version: 1.0.0
* Contact: support@bybit.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGWalletApi: NSObject <SWGApi>

extern NSString* kSWGWalletApiErrorDomain;
extern NSInteger kSWGWalletApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Get wallet fund records
/// 
///
/// @param startDate Start point for result (optional)
/// @param endDate End point for result (optional)
/// @param currency Currency type (optional)
/// @param walletFundType wallet fund type (optional)
/// @param page Page. Default getting first page data (optional)
/// @param limit Limit for data size per page, max size is 50. Default as showing 20 pieces of data per page (optional)
/// 
///  code:200 message:"Request was successful"
///
/// @return NSObject*
-(NSURLSessionTask*) walletGetRecordsWithStartDate: (NSString*) startDate
    endDate: (NSString*) endDate
    currency: (NSString*) currency
    walletFundType: (NSString*) walletFundType
    page: (NSString*) page
    limit: (NSString*) limit
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Get risk limit.
/// 
///
/// 
///  code:200 message:"Request was successful"
///
/// @return NSObject*
-(NSURLSessionTask*) walletGetRiskLimitWithCompletionHandler: 
    (void (^)(NSObject* output, NSError* error)) handler;


/// Set risk limit
/// 
///
/// @param symbol Contract type.
/// @param riskId Risk ID. Can be found with the Get risk limit list endpoint.
/// 
///  code:200 message:"Request was successful"
///
/// @return NSObject*
-(NSURLSessionTask*) walletSetRiskLimitWithSymbol: (NSString*) symbol
    riskId: (NSNumber*) riskId
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Get wallet fund records
/// 
///
/// @param startDate Start point for result (optional)
/// @param endDate End point for result (optional)
/// @param coin Currency (optional)
/// @param status Withdraw status (optional)
/// @param page Page. Default getting first page data (optional)
/// @param limit Limit for data size per page, max size is 50. Default as showing 20 pieces of data per page (optional)
/// 
///  code:200 message:"Request was successful"
///
/// @return NSObject*
-(NSURLSessionTask*) walletWithdrawWithStartDate: (NSString*) startDate
    endDate: (NSString*) endDate
    coin: (NSString*) coin
    status: (NSString*) status
    page: (NSString*) page
    limit: (NSString*) limit
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end
