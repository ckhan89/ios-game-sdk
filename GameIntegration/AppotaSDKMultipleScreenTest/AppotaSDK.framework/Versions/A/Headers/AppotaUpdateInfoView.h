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
}
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *userOrPasswordImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *titleLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *userNameTextfield;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *emailTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *phoneTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *updateButton;
- (void) updateUIWithResult:(NSDictionary*) loginDict;
- (IBAction)updateButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *warningTextView;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *inputView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *cancelButton;
- (IBAction)cancelButtonClick:(id)sender;
- (void) setUpViewWithWarning:(BOOL) enableWarning;
@end
