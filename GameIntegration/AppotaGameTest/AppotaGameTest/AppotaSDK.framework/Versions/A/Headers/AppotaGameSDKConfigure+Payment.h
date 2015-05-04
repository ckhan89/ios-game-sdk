//
//  AppotaGameSDKConfigure+Payment.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 6/24/14.
//
//

#import <AppotaSDK/AppotaSDK.h>

@interface AppotaGameSDKConfigure (Payment)
- (void) makeBankPayment;
- (void) makeCardPayment;
- (void) makeSMSPayment;
- (void) makeApplePayment;
- (void) makeUnipinPayment;
- (NSArray*) getListPayment;
- (BOOL) isApplePaymentOnly;
@end
