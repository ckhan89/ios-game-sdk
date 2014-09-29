//
//  AppotaPaymentAPI+UnPIN.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 9/3/14.
//
//

#import <AppotaSDK/AppotaSDK.h>

@interface AppotaPaymentAPI (UnPIN)

-(void) makeUnPinPaymentWithState:(NSString*) state
                       withTarget:(NSString*) target
                    withNoticeUrl:(NSString*) noticeUrl
                  withDescription:(NSString*) description
                withPaymentDialog:(AppotaPaymentLoginDialog*) pDialog
            withCompletionHandler:(AppotaPaymentHandler) handler;

- (void) makeUnPinPaymentWithCardCode:(NSString*) cardCode
                       withCardSerial:(NSString*) cardSerial
                           withVendor:(NSString*) cardVendor
                            withState:(NSString*) state
                           withTarget:(NSString*) target
                        withNoticeURL:(NSString*) noticeURL
                withCompletionHandler:(AppotaPaymentHandler) handler;
@end
