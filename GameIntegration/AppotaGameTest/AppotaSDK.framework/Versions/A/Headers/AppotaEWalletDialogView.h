//
//  AppotaEWalletDialogView.h
//  AppotaSDK
//
//  Created by tuent on 3/6/14.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaPaymentDialogView.h"
@class AppotaGameDropDown;

@interface AppotaEWalletDialogView : AppotaPaymentDialogView
{
    __unsafe_unretained IBOutlet UIButton *choseAmountButton;
    AppotaGameDropDown *chooseAmountDropDown;
    
    __unsafe_unretained IBOutlet UIButton *payButton;
    __unsafe_unretained IBOutlet UITextField *emailTextField;
    __unsafe_unretained IBOutlet UIImageView *emailInputBackgroundImageView;
}

- (IBAction)chooseAmountAction:(id)sender;
@end
