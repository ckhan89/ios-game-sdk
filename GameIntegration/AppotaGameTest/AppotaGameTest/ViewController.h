//
//  ViewController.h
//  AppotaGameTest
//
//  Created by tuent on 11/2/13.
//  Copyright (c) 2013 Appota. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) id tracker;
@property (weak, nonatomic) IBOutlet UIButton *showHidePaymentButton;
@property (weak, nonatomic) IBOutlet UIButton *hidePaymentButton;
@property (weak, nonatomic) IBOutlet UIButton *logInOutButon;
- (IBAction)showPaymentButtonClick:(id)sender;
- (IBAction)hidePaymentButtonClick:(id)sender;
- (IBAction)openPaymentClick:(id)sender;
- (IBAction)openSDKClick:(id)sender;
- (IBAction)openSwitchUserClick:(id)sender;
- (IBAction)logClick:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *gaiTextField;
- (void) handleLogin;
- (void) handleLogOut;
@end
