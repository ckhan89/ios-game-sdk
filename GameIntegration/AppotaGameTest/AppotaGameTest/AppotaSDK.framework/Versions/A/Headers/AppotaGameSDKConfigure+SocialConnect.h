//
//  AppotaGameSDKConfigure+SocialConnect.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 6/11/14.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import <FacebookSDK/FacebookSDK.h>

@interface AppotaGameSDKConfigure (SocialConnect)
+ (void) loginAppotaWithGoogleHandler:(AppotaResultHandler) handler;
+ (void) loginAppotaWithFacebookPermission:(NSArray*) permissionList
                               withHandler:(AppotaResultHandler) handler;
+ (void) loginQuickWithHandler:(AppotaLoginRequestHandler) handler;

+ (void) loginTwitterWithHandler:(AppotaLoginRequestHandler) handler;
@end
