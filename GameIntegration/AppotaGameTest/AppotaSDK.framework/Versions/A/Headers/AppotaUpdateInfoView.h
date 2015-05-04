//
//  AppotaUpdateInfoView.h
//  AppotaSDK
//
//  Created by tuent on 11/7/13.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaGameView.h"

@interface AppotaUpdateInfoView : AppotaGameView <UITextFieldDelegate> {
    BOOL enableWarning;
    NSDictionary *userInfoDict;
    BOOL updatedInfo;
}
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *phoneImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *emailImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *userOrPasswordImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *titleLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *userNameTextfield;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *emailTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *phoneTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *updateButton;
@property (strong, nonatomic) IBOutlet UITextField *ocPasswordTextField;
@property (strong, nonatomic) IBOutlet UIImageView *ocPasswordBackgroundImageView;
- (void) updateUIWithResult:(NSDictionary*) loginDict;
- (IBAction)updateButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *warningTextView;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *inputView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *cancelButton;
- (IBAction)cancelButtonClick:(id)sender;
- (void) setUpViewWithWarning:(BOOL) enableWarning;
@end
