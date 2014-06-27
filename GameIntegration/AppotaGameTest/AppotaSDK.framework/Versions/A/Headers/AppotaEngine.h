//
//  AppotaEngine.h
//  AppotaSDK
//  Created by Appota's Mac on 1/7/13.
//  Copyright (c) 2013 Appota's Mac. All rights reserved.
//

////////////////////////////////////////////////////////////////////////////////
// Summary
// Class AppotaEngine bao gồm các function được gọi trong AppotaAPI và kết nối với Appota
//  ***Lưu ý tất cả các API phải được gọi qua class AppotaAPI***
// Chi tiết các API xem ở class AppotaAPI 
#import "AppotaNetworkEngine.h"
#import "AppotaPaymentAPI.h"

@class AppotaEngine;
typedef void (^FetcherBlock)(NSString *twitPicURL);
typedef void (^FetcherArrayBlock)(NSMutableArray *list);
typedef void (^FetcherDictionary)(NSDictionary *dict);
typedef void (^BOOLBlock)(BOOL b);

@interface AppotaEngine : AppotaNetworkEngine
{
    AppotaRequestHandler requestHandler;
}


+ (NSString*) getLangSetting;

// Singleton AppotaEngine
+ (id)sharedAppotaEngine;

//// Getter setter
//-(AppotaRequestHandler) getRequestHandler;
//-(NSString*) getAccessToken;
//-(NSString*) getExpireDate;
//-(NSString*) getRefeshToken;
//-(void) setRequestToken:(NSString*) _rToken;
//- (void) updateTokenInfoAndState;

#pragma mark - InApp payment API
/*
 Get sms structure default structure for topup
 Error_code
 0	Gọi api thành công
 1	Dữ liệu truyền vào api không chính xác
 91	Hệ thống đang bận
 10	Dịch vụ chỉ cung cấp ở Việt Nam
 */
-(void) getSMSInAppWithNoticeURL:(NSString*) noticeURL
                       withState:(NSString*) stateString
                      withTarget:(NSString*) targetString
                     withSMSType:(BOOL) isShortType
                      onComplete:(FetcherDictionary) completionBlock
                         onError:(AppotaNKErrorBlock) errorBlock;

/*
 // Nap the
 0	Gọi api thành công
 1	Dữ liệu truyền vào api không chính xác
 91	Hệ thống đang bận
 10	Dịch vụ chỉ cung cấp ở Việt Nam
 */
-(void) inAppCardWithCode:(NSString *)card_code
               withSerial:(NSString *)card_seri
               withVendor:(NSString *)card_vendor
            withNoticeURL:(NSString*) noticeURL
                withState:(NSString*) stateString
               withTarget:(NSString*) targetString
               onComplete:(FetcherDictionary) completionBlock
                  onError:(AppotaNKErrorBlock) errorBlock;

// Get SmartLink structure
-(void) getEBankLinkInAppWithMoneyAmount:(NSString *)amount
                           withNoticeURL:(NSString*) noticeURL
                               withState:(NSString*) stateString
                              withTarget:(NSString*) targetString
                              onComplete:(FetcherDictionary) completionBlock
                                 onError:(AppotaNKErrorBlock) errorBlock;

// Get paypal link
// Get PayPal structure
-(void) getPayPalLinkInAppWithMoneyAmount:(NSString *)amount
                            withNoticeURL:(NSString*) noticeURL
                                withState:(NSString*) stateString
                               withTarget:(NSString*) targetString
                               onComplete:(FetcherDictionary) completionBlock
                                  onError:(AppotaNKErrorBlock) errorBlock;

/*
 * Resend paypal payment
 */
- (void) paymentResendWithTransactionID:(NSString*) transactionID
                             onComplete:(FetcherDictionary) completionBlock
                                onError:(AppotaNKErrorBlock) errorBlock;
// Payment confirm check
/*
 @param:
 + provider: {apple|paypal}
 + receipt (target = apple)
 + data (target = paypal)
 + notice_url + state
 + target
 @response:
 + status
 + error_code
 + transaction
 + transaction.type = INAPP
 + transaction.transaction_id
 + transaction.status
 + transaction.time
 + transaction.inapp
 + transaction.inapp.method = {APPLE|PAYPAL} + transaction.inapp.amount
 + transaction.inapp.currency = {USD|VND|...}
 */
- (void) paymentConfirmWithProvider:(NSString*) provider
                        withReceipt:(NSString*) receipt
                           withData:(NSString*) confirmData
                      withNoticeURL:(NSString*) noticeURL
                          withState:(NSString*) state
                         withTarget:(NSString*) target
                         onComplete:(FetcherDictionary) completionBlock
                            onError:(AppotaNKErrorBlock) errorBlock;

// Check inApp loop
/*
 0	Người dùng đã nạp TYM
 1	Dữ liệu truyền vào api không chính xác
 7	Giao dịch không tồn tại
 8	Ứng dụng không có quyền kiểm tra giao dịch
 9	Người dùng chưa nạp TYM
 */
-(void) checkTransactionInAppWithID:(NSString *)inapp_id
                         onComplete:(FetcherDictionary) completionBlock
                            onError:(AppotaNKErrorBlock) errorBlock;

//-(void) getTransactionInforWithID:(NSString *) transactionID
//                       onComplete:(FetcherDictionary) completionBlock
//                          onError:(AppotaNKErrorBlock) errorBlock;

- (void) getShortLinkWithURL:(NSString*) url
                  onComplete:(FetcherBlock) completionBlock;
- (void) checkUpdateAppOnComplete:(FetcherDictionary) completionBlock
                          onError:(AppotaNKErrorBlock) errorBlock;
- (void) logoutOnComplete:(FetcherDictionary) completionBlock
                  onError:(AppotaNKErrorBlock) errorBlock;

#pragma mark - GAPOTA tracking API
- (void) trackGapotaPageWithScreen:(NSString*) title
                       onComplete:(FetcherDictionary) completionBlock
                          onError:(AppotaNKErrorBlock) errorBlock;
- (void) trackGapotaEventWithCategory:(NSString*) cate
                      withEventAction:(NSString*) action
                           onComplete:(FetcherDictionary) completionBlock
                              onError:(AppotaNKErrorBlock) errorBlock;

#pragma mark - Login payment API
-(NSString*) getFacebookRequestTokenURLWithClientID:(NSString*) clientID
                                  withScope:(NSString*) scope;

- (void) getCoinImageWithURL:(NSString*) coinUrl
                  onComplete:(BOOLBlock) completionBlock
                     onError:(AppotaNKErrorBlock) errorBlock;
- (void) getUserInfoOnComplete:(FetcherDictionary) completionBlock
                       onError:(AppotaNKErrorBlock) errorBlock;
- (void) getTransactionLogWithStart:(int) start
                          withLimit:(int) limit
                         onComplete:(FetcherDictionary) completionBlock
                            onError:(AppotaNKErrorBlock) errorBlock;

- (void) getAndUpdateTrackInfoOnWithSDKVersion:(NSString*) sdkVersion
                       withAppVersion:(NSString*) appVersion
                         withBundleID:(NSString*) bundleID
                           onComplete:(FetcherDictionary) completionBlock
                              onError:(AppotaNKErrorBlock) errorBlock;

- (void) getApiConfigOnComplete:(FetcherDictionary) completionBlock
                        onError:(AppotaNKErrorBlock) errorBlock;

- (void) updateUserInfoWithUserString:(NSString*) userString
                        withTokenDict:(NSDictionary*) tokenDict
                           onComplete:(FetcherDictionary) completionBlock
                              onError:(AppotaNKErrorBlock) errorBlock;

- (void) updateUserInfoWithUserString:(NSString*) userString
                           onComplete:(FetcherDictionary) completionBlock
                              onError:(AppotaNKErrorBlock) errorBlock;
- (void) registerWithUserName:(NSString*) userName
                 withPassword:(NSString*) password
                    withEmail:(NSString*) email
                   onComplete:(FetcherDictionary) completionBlock
                      onError:(AppotaNKErrorBlock) errorBlock;

- (void) deleteAccountLoginDict:(NSDictionary*) loginDict
                withForceOption:(BOOL) isForce
                     onComplete:(FetcherDictionary) completionBlock
                        onError:(AppotaNKErrorBlock) errorBlock;

- (void) deleteAccountByDeviceIDOnComplete:(FetcherDictionary) completionBlock
                                   onError:(AppotaNKErrorBlock) errorBlock;
- (void) getUserListByDeviceIDonComplete:(FetcherDictionary) completionBlock
                                 onError:(AppotaNKErrorBlock) errorBlock;

- (void) logOutWithDeleteAccountOption:(BOOL) isDelete
                            onComplete:(FetcherDictionary) completionBlock
                               onError:(AppotaNKErrorBlock) errorBlock;
- (void) loginOnComplete:(FetcherDictionary) completionBlock
                 onError:(AppotaNKErrorBlock) errorBlock;

- (void) loginWithUserName:(NSString*) username
              withPassword:(NSString*) password
                onComplete:(FetcherDictionary) completionBlock
                   onError:(AppotaNKErrorBlock) errorBlock;
- (void) loginWithGoogleToken:(NSString*) googleToken
                   onComplete:(FetcherDictionary) completionBlock
                      onError:(AppotaNKErrorBlock) errorBlock;
- (void) loginWithFacebookToken:(NSString*) facebookToken
                     onComplete:(FetcherDictionary) completionBlock
                        onError:(AppotaNKErrorBlock) errorBlock;

- (void) loginWithTwitterToken:(NSString*) twitterToken
        withTwitterTokenSecret:(NSString*) oauthTwitter
               withConsumerKey:(NSString*) consumerKey
            withConsumerSecret:(NSString*) consumerSecret
                    onComplete:(FetcherDictionary) completionBlock
                       onError:(AppotaNKErrorBlock) errorBlock;
-(void)startOperationWithLink:(NSString *)url
               withParameters:(NSMutableDictionary *)params
                   httpMethod:(NSString *)method
                   onComplete:(FetcherDictionary) completionBlock
                      onError:(AppotaNKErrorBlock) errorBlock;
-(void)startOperationWithLink:(NSString *)url
               withParameters:(NSMutableDictionary *)params
                   httpMethod:(NSString *)method
                 withPTrackID:(NSString*) pTrackID
                   onComplete:(FetcherDictionary) completionBlock
                      onError:(AppotaNKErrorBlock) errorBlock;
@end
