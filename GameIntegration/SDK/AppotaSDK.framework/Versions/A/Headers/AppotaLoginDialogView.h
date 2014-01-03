//
//  AppotaLoginDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/30/13.
//
//

#import <UIKit/UIKit.h>
#import "AppotaGameView.h"

@protocol GPPSignInDelegate;
@class AppotaRegisterDialogView;

@interface AppotaLoginDialogView : AppotaGameView <UITextFieldDelegate, GPPSignInDelegate> {
    AppotaRegisterDialogView *registerView;
}

@property (unsafe_unretained, nonatomic) IBOutlet UIView *appotaDescriptionLabelView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *faceBookLoginButton;
- (IBAction)faceBookLoginClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *googleLoginButton;
- (IBAction)googleLoginClick:(id)sender;

@property (unsafe_unretained, nonatomic) IBOutlet UIButton *quickLoginButton;
- (IBAction)quickLoginButtonClick:(id)sender;

@property (unsafe_unretained, nonatomic) IBOutlet UIButton *loginButton;
- (IBAction)loginButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *registerButton;
- (IBAction)registerButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *forgotPasswordButton;
- (IBAction)forgotPasswordButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *twitterLoginButton;
- (IBAction)twitterLoginClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *loginTabButton;
- (IBAction)loginTabClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *passwordImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *usernameImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *usernameTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *passwordTextField;

- (void) googleLoginWithToken:(NSString*) ggToken;
@end
