//
//  ViewController.m
//  AppotaGameTest
//
//  Created by tuent on 11/2/13.
//  Copyright (c) 2013 Appota. All rights reserved.
//

#import "ViewController.h"
#import <AppotaSDK/AppotaSDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showPaymentButtonClick:(id)sender {
    [AppotaGameSDKConfigure showPaymentButton];
}

- (IBAction)hidePaymentButtonClick:(id)sender {
    [AppotaGameSDKConfigure hidePaymentButton];
}

- (IBAction)openPaymentClick:(id)sender {
    [AppotaGameSDKConfigure showPaymentView];
}

- (IBAction)openSDKClick:(id)sender {
    [AppotaGameSDKConfigure showSDKView];
}

- (IBAction)openSwitchUserClick:(id)sender {
    [AppotaGameSDKConfigure showSwitchUserView];
}

- (IBAction)logOutClick:(id)sender {
    [AppotaGameSDKConfigure logOut];
}
@end
