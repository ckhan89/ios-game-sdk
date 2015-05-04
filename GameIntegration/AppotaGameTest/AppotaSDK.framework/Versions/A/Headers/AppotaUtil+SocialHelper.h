//
//  AppotaUtil+SocialHelper.h
//  AppotaSDK
//
//  Created by tuent on 12/2/13.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaUtil.h"

@interface AppotaUtil (SocialHelper)
+ (void) getFacebookTokenWithPermission:(NSArray*) permissionList
                         withHandler:(AppotaResultHandler) handler;
+ (void) loginWithFacebookToken:(NSString*) fbToken
                    withHandler:(AppotaResultHandler) handler;
+ (void) loginWithGoogleToken:(NSString*) googleToken
                  withHandler:(AppotaResultHandler) handler;
+ (NSString*) getFacebookTokenFromSession:(id) session;
#ifdef NOUI_LOGIN
+ (void) loginWithGoogleWebWithHandler:(AppotaLoginRequestHandler) handler;
#endif
@end
