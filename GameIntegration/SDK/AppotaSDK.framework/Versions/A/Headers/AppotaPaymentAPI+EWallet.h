//
//  AppotaPaymentAPI+EWallet.h
//  AppotaSDK
//
//  Created by tuent on 3/7/14.
//
//

#import <AppotaSDK/AppotaSDK.h>

@interface AppotaPaymentAPI (EWallet)
- (void) makeEWalletPaymentWithObject:(id) paymentObject
                            withState:(NSString*) state
                           withTarget:(NSString*) target
                        withNoticeUrl:(NSString*) noticeUrl
                      withDescription:(NSString*) description
                withCompletionHandler:(AppotaPaymentHandler) handler;

- (void) makeEWalletPaymentWithObject:(id) paymentObject
                            withState:(NSString*) state
                           withTarget:(NSString*) target
                        withNoticeUrl:(NSString*) noticeUrl
                      withDescription:(NSString*) description
                    withPaymentDialog:(AppotaPaymentDialog*) paymentDialog
                withCompletionHandler:(AppotaPaymentHandler) handler;
@end
