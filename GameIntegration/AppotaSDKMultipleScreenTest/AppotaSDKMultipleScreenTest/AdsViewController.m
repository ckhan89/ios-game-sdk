//
//  ViewController.m
//  AppotaSDKMultipleScreenTest
//
//  Created by tuent on 11/14/13.
//  Copyright (c) 2013 Appota. All rights reserved.
//

#import "AdsViewController.h"
#import "LoginViewController.h"


@interface AdsViewController ()

@end

@implementation AdsViewController

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

- (IBAction)goToNextView:(id)sender {
    LoginViewController *loginViewController = [[LoginViewController alloc] initWithNibName:@"LoginViewController" bundle:nil];
    [self.navigationController pushViewController:loginViewController animated:YES];
}
@end
