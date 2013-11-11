//
//  ViewController.h
//  AppotaGameTest
//
//  Created by tuent on 11/2/13.
//  Copyright (c) 2013 Appota. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *showHidePaymentButton;
@property (weak, nonatomic) IBOutlet UIButton *hidePaymentButton;
- (IBAction)showPaymentButtonClick:(id)sender;
- (IBAction)hidePaymentButtonClick:(id)sender;
- (IBAction)openPaymentClick:(id)sender;
- (IBAction)openSDKClick:(id)sender;
- (IBAction)openSwitchUserClick:(id)sender;
- (IBAction)logOutClick:(id)sender;

@end
