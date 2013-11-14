//
//  LoginViewController.m
//  AppotaSDKMultipleScreenTest
//
//  Created by tuent on 11/14/13.
//  Copyright (c) 2013 Appota. All rights reserved.
//

#import "LoginViewController.h"
#import <AppotaSDK/AppotaSDK.h>

@interface LoginViewController ()

@end

@implementation LoginViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    if (![AppotaGameSDKConfigure checkUserLogin]) {
        [AppotaGameSDKConfigure showLoginView];
    }
    else {
        [AppotaGameSDKConfigure showPaymentButton];
    }
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
