//
//  AppDelegate.m
//  AppotaPaymentTest
//
//  Created by tuent on 10/9/13.
//
//

#import "AppDelegate.h"
#import <AppotaAdsSDK/AppotaAdsSDK.h>
#import "ViewController.h"

#define CLIENT_ID           @"c144a4da61cd83e7b90298fd6dca6e5a052945a17"
#define CLIENT_SECRET       @"e9f468821c4e4816ddce3f2441a0fd17052945a17"
#define INAPP_API_KEY       @"ac383fa652834d9094e865dc4867c72b0529d3e61"

/*
 * SANDBOX_ID will be used when app's not been published yet
 */
#define SANDBOX_CLIENT_ID @"SANDBOX_CLIENT_ID"
#define SANDBOX_CLIENT_SECRET @"SANDBOX_CLIENT_SECRET"
#define SANDBOX_INAPP_API_KEY @"SANDBOX_INAPP_API_KEY"


@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.viewController = [[ViewController alloc] initWithNibName:@"ViewController" bundle:nil];
    self.window.rootViewController = self.viewController;
    [self.window makeKeyAndVisible];
    [self configGameSDK];
    return YES;
}

- (void) configGameSDK {
    
    [AppotaGameSDKConfigure configureWithClientID:CLIENT_ID
                                 withClientSecret:CLIENT_SECRET
                                  withInAppAPIKey:INAPP_API_KEY
                                        withState:@""
                                    withNoticeUrl:@"http://filestore9.com/test.php"
                                    withConfigUrl:@"http://plat.center.ffcai.com/user/mobvista_PaymentConfig.php?classify=ios"
     ];
#warning Set up auto show payment button and login dialog here, by default autoShowPaymentButton and autoShowLoginDialog are YES
//    [AppotaGameSDKConfigure sharedGameConfig].autoShowPaymentButton = NO;
//    [AppotaGameSDKConfigure sharedGameConfig].autoShowLoginDialog = NO;
    
    [AppotaGameSDKConfigure sharedGameConfig].googleClientId = @"242204253141.apps.googleusercontent.com";
    [AppotaGameSDKConfigure sharedGameConfig].isOnlyOpenProfile = YES;
    [AppotaGameSDKConfigure sharedGameConfig].isShowCloseLoginView = YES;
    [AppotaGameSDKConfigure sharedGameConfig].delegate = self;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

#pragma mark - Gameconfig delegate
/*
 * Implement your verification here
 */
- (void) didFinishLogin:(NSDictionary *)userInfoDict {
#warning Insert your verify action here
    NSLog(@"Login token %@: Username:%@ UserID: %@", [AppotaGameSDKConfigure getAccessToken], [AppotaGameSDKConfigure getUserName], [AppotaGameSDKConfigure getUserID]);
    
    // Update viewcontroller login state
    [self.viewController handleLogin];
}

- (void) didLogOut:(NSString *)userName {
    NSLog(@"Logout %@", userName);
    // Update viewcontroller logout state
    [self.viewController handleLogOut];
}

- (void) didFinishPaymentWithDictionary:(NSDictionary *)paymentDict withState:(AppotaPaymentState)status withError:(NSError *)error {
    NSLog(@"Payment result");
}

- (void) didCloseLoginView {
    NSLog(@"Close login view");
}

#warning Insert your handle open URL here
- (BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    return [AppotaGameSDKConfigure handleOpenURL:url sourceApplication:sourceApplication annotation:annotation];
}
@end
