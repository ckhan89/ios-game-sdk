//
//  ViewController.m
//  AppotaGameSDKV4Test
//
//  Created by Hieu on 3/13/15.
//  Copyright (c) 2015 Hieu. All rights reserved.
//

#import "ViewController.h"
#import <AppotaSDK/AppotaSDK.h>
#import "GlobalGameVariables.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIButton *loginButton;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [[UIApplication sharedApplication] setStatusBarHidden:YES withAnimation:UIStatusBarAnimationNone];
    [[UIApplication sharedApplication] setStatusBarHidden:NO withAnimation:UIStatusBarAnimationNone];
    // Do any additional setup after loading the view, typically from a nib.
    [self.loginButton setTitle:@"Login/LogOut" forState:UIControlStateNormal];
    
    [GlobalGameVariables sharedInstance].gameState = @"GameDidLoad";
    [GlobalGameVariables sharedInstance].gameUserID = @"X";
    [GlobalGameVariables sharedInstance].gameServerID = @"Y";    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)logoutAction:(id)sender {
    if ([AppotaGameSDK isUserLoggedIn]) {
        [AppotaGameSDK logOut];
    }
    else {
        [AppotaGameSDK showLoginView];
    }
}
- (IBAction)showPaymentView:(id)sender {
    [GlobalGameVariables sharedInstance].gameState = @"PaymentShow";
    [AppotaGameSDK showPaymentView];
}

- (IBAction)showPaymentWithPackage:(id)sender {
    [GlobalGameVariables sharedInstance].gameState = @"PaymentShowsdk4.50";
    [AppotaGameSDK showPaymentViewWithPackageID:@"sdk4.50"];
}
- (IBAction)showProfileView:(id)sender {
    [AppotaGameSDK showUserInfoView];
    
}

- (IBAction)showTransactionHistory:(id)sender {
    [AppotaGameSDK showTransactionHistory];
}

- (IBAction)showRegister:(id)sender {
    
    [AppotaGameSDK showRegisterView];
}






@end
