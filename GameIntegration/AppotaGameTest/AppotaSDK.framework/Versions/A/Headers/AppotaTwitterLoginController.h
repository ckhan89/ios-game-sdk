//
//  AppotaTwitterLoginController.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 7/22/14.
//
//

#import <Foundation/Foundation.h>
#import "AppotaGameSDKConfigure.h"

typedef enum
{
    AppotaTwitterLoginNoError,
    AppotaTwitterLoginNotConfigureID,
    AppotaTwitterLoginNotConfigureAccount,
    AppotaTwitterLoginAccessDeny,
} AppotaTwitterLoginErrorType;

@class ACAccountStore;
@class AppotaGameTWAPIManager;

@interface AppotaTwitterLoginController : NSObject
@property (nonatomic, strong) ACAccountStore *accountStore;
@property (nonatomic, strong) AppotaGameTWAPIManager *apiManager;
@property (nonatomic, strong) NSArray *accounts;

+(AppotaTwitterLoginController *)sharedInstance;

- (void) loginTwitterWithHandler:(AppotaLoginRequestHandler) handler;

@end
