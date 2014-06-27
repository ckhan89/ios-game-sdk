//
//  AppotaPaymentDialog+EWallet.h
//  AppotaSDK
//
//  Created by tuent on 3/7/14.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaPaymentDialog.h"

@interface AppotaPaymentDialog (EWallet)
- (void) showEWalletPaymentDialogWithPaymentObject:(id) paymentObject
                                         withState:(NSString*) state
                                        withTarget:(NSString*) target
                                     withNoticeUrl:(NSString*) noticeUrl
                             withDescriptionString:(NSString*) descriptionString
                                       withHandler:(AppotaPaymentHandler)handler;

- (void) payEWalletAction:(id) sender;
- (void) payEWalletVerifyWithObject:(id) object;
@end
