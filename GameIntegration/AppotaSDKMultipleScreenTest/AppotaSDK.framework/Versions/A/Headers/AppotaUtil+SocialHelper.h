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
+ (void) shareFacebookWithLink:(NSString*) link
                      withName:(NSString*) name
                   withCaption:(NSString*) caption
                   withMessage:(NSString*) message
               withDescription:(NSString*) description
           withCompletionBlock:(BOOLBlock) completionBlock
                withErrorBlock:(AppotaNKErrorBlock) errorBlock;

+ (void) getFacebookTokenWithPermission:(NSArray*) permissionList
                         withHandler:(AppotaResultHandler) handler;
+ (void) loginWithFacebookToken:(NSString*) fbToken
                    withHandler:(AppotaResultHandler) handler;
+ (void) loginWithGoogleToken:(NSString*) googleToken
                  withHandler:(AppotaResultHandler) handler;
#ifdef NOUI_LOGIN
+ (void) loginWithGoogleWebWithHandler:(AppotaLoginRequestHandler) handler;
#endif
@end
