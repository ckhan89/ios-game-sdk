//
//  AppotaPaymentLoginDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/31/13.
//
//

#import <UIKit/UIKit.h>

@interface AppotaPaymentLoginDialogView : UIView
- (IBAction)closeButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *closeButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *loginButton;
- (IBAction)loginButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *paymentButton;
- (IBAction)paymentButtonClick:(id)sender;

@end
