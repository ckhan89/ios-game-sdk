//
//  AppotaEngine+EWallet.h
//  AppotaSDK
//
//  Created by tuent on 3/10/14.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaEngine.h"

@interface AppotaEngine (EWallet)
- (void) inappEWalletWithAmount:(NSString*) amount
                   withProvider:(NSString*) provider
                      withEmail:(NSString*) email
                      withState:(NSString*) state
                     withTarget:(NSString*) target
                  withNoticeURL:(NSString*) noticeURL
                     onComplete:(FetcherDictionary) completionBlock
                        onError:(AppotaNKErrorBlock) errorBlock;
- (void) paymentVerifyWithOTP:(NSString*) opt
                     withType:(NSString*) type
            withTransactionID:(NSString*) transactionID
                   onComplete:(FetcherDictionary) completionBlock
                      onError:(AppotaNKErrorBlock) errorBlock;
@end
