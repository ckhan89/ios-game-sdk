//
//  AppotaApplePaymentDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/30/13.
//
//

#import "AppotaPaymentPaypalDialogView.h"
#import "AppotaPaymentSMSDialogView.h"

@interface AppotaApplePaymentDialogView : AppotaPaymentSMSDialogView
- (void) setupViewWithListItem:(NSArray*) listIAPItem
               withDescription:(NSString*) description
                    withDialog:(AppotaPaymentDialog*) paymentDialog;
@end
