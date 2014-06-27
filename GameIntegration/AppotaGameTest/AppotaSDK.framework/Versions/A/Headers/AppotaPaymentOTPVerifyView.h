//
//  AppPaymentOTPVerifyView.h
//  AppotaSDK
//
//  Created by tuent on 3/10/14.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaPaymentDialogView.h"

@interface AppotaPaymentOTPVerifyView : AppotaPaymentDialogView
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *inputOTPTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *confirmOTPButton;
@end
