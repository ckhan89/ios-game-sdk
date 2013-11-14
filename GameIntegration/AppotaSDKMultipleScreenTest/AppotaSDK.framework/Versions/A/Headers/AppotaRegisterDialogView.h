//
//  AppotaRegisterView.h
//  AppotaSDK
//
//  Created by tuent on 11/5/13.
//
//

#import <UIKit/UIKit.h>

@interface AppotaRegisterDialogView : UIView <UITextFieldDelegate> {
    BOOL isViewMoveUp;
}
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *passwordImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *usernameImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *emailImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *usernameTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *passwordTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *emailTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *regButton;
- (IBAction)regButtonClick:(id)sender;

@end
