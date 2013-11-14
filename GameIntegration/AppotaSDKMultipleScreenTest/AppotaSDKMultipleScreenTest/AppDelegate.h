//
//  AppDelegate.h
//  AppotaSDKMultipleScreenTest
//
//  Created by tuent on 11/14/13.
//  Copyright (c) 2013 Appota. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AppotaSDK/AppotaSDK.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, AppotaGameSDKConfigureDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (retain, nonatomic) UINavigationController *navController;

@end
