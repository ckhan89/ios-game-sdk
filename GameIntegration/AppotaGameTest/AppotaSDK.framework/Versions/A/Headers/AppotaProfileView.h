//
//  AppotaProfileView.h
//  AppotaSDK
//
//  Created by tuent on 11/7/13.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaGameView.h"

@class AppotaTransactionView;
@interface AppotaProfileView : AppotaGameView <UITextFieldDelegate> {
    float moveDistance;
    AppotaTransactionView *transactionView;
}
@property (unsafe_unretained, nonatomic) IBOutlet UIScrollView *itemContentScrollView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *gameIconImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *titleLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *changeUserButton;
- (IBAction)changeUserButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *logOutButton;
- (IBAction)logOutClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *infoButton;
- (IBAction)inforButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *dealButton;
- (IBAction)dealButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *inputView;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *userNameTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *emailTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *phoneTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *updateButton;
- (IBAction)updateButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *changePasswordTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *reChangePasswordTextField;

@end
