//
//  AppDelegate.h
//  AppotaPaymentTest
//
//  Created by tuent on 10/9/13.
//
//

#import <UIKit/UIKit.h>
#import <AppotaSDK/AppotaSDK.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate, AppotaGameSDKConfigureDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@end
