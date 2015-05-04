//
//  AppotaGameSDKConfigure+Protected.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 2/24/15.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaPayment.h"
#import "AppotaGameSDKCHDraggableView.h"

@interface AppotaGameSDKConfigure (Protected)
- (BOOL) checkUpdate;

- (NSString *) paymentState;

- (NSString *) gapotaTrackingID;

- (NSString *) jsonConfigUrl;

- (BOOL) enableLogoutDialog;

- (NSMutableArray*) getListPaymentByMethod:(PAYMENT_METHOD) pMethod;

- (id) session;

- (NSString *)googleClientId;

- (NSString *)googleClientSecret;

- (BOOL)enableSocialLogin;

- (BOOL)enableAppotaLogin;

- (BOOL)enableQuickLogin;

- (BOOL)autoShowLoginDialog;

- (int)isOnlyOpenPayment;

- (BOOL)isUsingWebLoginSystem;

- (BOOL)isHiddenUserSwitching;

- (BOOL)isOnlyOpenProfile;

- (void) didFinishLoginSignalAndReloadRemoteConfig:(id) sender;

- (void) didFinishSwitchUserSignalAndReloadRemoteConfig:(id) sender;

- (BOOL)isShowCloseLoginView;

- (void)setSession:(id)newValue;

- (NSMutableArray*) getListPaymentOrderedByMethod;

- (NSString *)noticeUrl;

- (AppotaGameSDKCHDraggableView *)draggableView;

- (BOOL)isUsingPrivateUserSystem;

- (BOOL)autoShowPaymentButton;

- (void) didLoginFailSignal;
@end
