//
//  AppDelegate.m
//  AppotaGameSDKV4Test
//
//  Created by Hieu on 3/13/15.
//  Copyright (c) 2015 Hieu. All rights reserved.
//

#import "AppDelegate.h"
#import <AppotaSDK/AppotaSDK.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <CoreTelephony/CTCarrier.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import "GlobalGameVariables.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [AppotaGameSDK configure];
    [[AppotaGameSDK sharedInstance] setAutoShowLoginDialog:YES];
    [[AppotaGameSDK sharedInstance] setIsHideWelcomeView:NO];
    [[AppotaGameSDK sharedInstance] setKeepLoginSession:YES];
    [[AppotaGameSDK sharedInstance] setSDKButtonVisibility:YES];
    [[AppotaGameSDK sharedInstance] setDelegate:self];
    [AppotaGameSDK  registerPushNotificationWithGroupName:@"IOS"];
    return [[FBSDKApplicationDelegate sharedInstance] application:application didFinishLaunchingWithOptions:launchOptions];
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    [FBSDKAppEvents activateApp];
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

- (BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    return [AppotaGameSDK application:application handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
    NSLog(@"My token is: %@", deviceToken);
    [AppotaGameSDK configurePushNotificationWithTokenData:deviceToken];
}

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
    NSLog(@"Failed to get token, error: %@", error);
}

-(void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings{
    
}

-(void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo{
    [AppotaGameSDK handlePushNotification:userInfo];
}

#pragma mark - SDK callback

-(void)didLoginSuccess:(AppotaUserLoginResult *)userLoginResult{
      NSLog(@"USerInfor Dict ==%@",userLoginResult.objectDict);
}
- (void)didLogOut:(NSString *)userName{
    
}

- (void)didPaymentSuccessWithResult:(AppotaPaymentResult *)paymentResult withPackage:(NSString *)packageID{
    
}
- (void)didPaymentErrorWithMessage:(NSString *)message withError:(NSError *)error{
    
    
}

-(NSString *)getPaymentStateWithPackageID:(NSString *)packageID{
    return [NSString stringWithFormat:@"%@%@", [GlobalGameVariables sharedInstance].gameState, packageID];
}

- (void)didLoginErrorWithMessage:(NSString *)message withError:(NSError *)error{
    
}


@end
