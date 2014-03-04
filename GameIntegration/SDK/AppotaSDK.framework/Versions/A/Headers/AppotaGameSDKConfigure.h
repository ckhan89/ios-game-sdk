//
//  AppotaGameSDKConfigure.h
//  AppotaSDK
//
//  Created by tuent on 10/30/13.
//
//

#import <Foundation/Foundation.h>
#import "AppotaGameSDKCHDraggableView.h"
#import "AppotaGameSDKCHDraggingCoordinator.h"
#import "AppotaPayment.h"
#import "Appota_OpenUDID.h"
#import "AppotaAPIConstant.h"

typedef enum {
    AppotaPaymentSucceed = 1,
    AppotaPaymentFailed = 0,
    AppotaPaymentSMSPending = 2,
    AppotaPaymentSMSCanceled = 3,
    AppotaPaymentSMSInValidAmount = 4,
    AppotaPaymentClosed = 5,
    AppotaPaymentCardInvalid = 6,
    AppotaPaymentInvalidAmount = 7,
    AppotaGetListSMSError = 11,
    AppotaPaymentWrongFormatResponse = 12,
    AppotaApplePaymentProductNotValid = 13,
    AppotaAppleTransactionFailed = 14,
    AppotaPaymentPending = 15,
} AppotaPaymentState;

#ifdef NOUI_LOGIN
/*
 * Event handler cho kết quả trả về của Appota API
 */
typedef void(^AppotaLoginRequestHandler)(NSDictionary *apiDict, NSError *error);

#endif


@protocol AppotaGameSDKConfigureDelegate <NSObject>
@required
/*
 * Callback after login
 */
- (void) didFinishLogin:(NSDictionary*) userInfoDict;
/*
 * Callback after logout
 */
- (void) didLogOut:(NSString*) userName;

/*
 * Callback after switch user
 */
- (void) didFinishSwitchUser:(NSDictionary*) userInfoDict;

/*
 * Callback after close loginview
 */
- (void) didCloseLoginView;

- (void) didFinishPaymentWithDictionary:(NSDictionary*) paymentDict withState:(AppotaPaymentState) status withError:(NSError*) error;
@end

@interface AppotaGameSDKConfigure : NSObject <CHDraggableViewDelegate, CHDraggingCoordinatorDelegate>
{
    BOOL checkUpdate;
    BOOL autoShowPaymentButton;
    BOOL autoShowLoginDialog;
    BOOL enableLogoutDialog;
    
    BOOL enableSocialLogin;
    BOOL enableAppotaLogin;
    BOOL enableQuickLogin;
    BOOL isOnlyOpenProfile;
    BOOL isOnlyOpenPayment;
    BOOL isHiddenUserSwitching;
    BOOL isShowCloseLoginView;
    
    BOOL isUsingPrivateUserSystem;
    BOOL isUsingWebLoginSystem;
    BOOL isSignOutSession;
    
    NSMutableArray *listPayment;
    NSString *noticeUrl;
    NSString *paymentState;
    id session;

    
    NSString *googleClientId;
    NSString *googleClientSecret;
    NSString *googleAccToken;
    NSDictionary *googleTokenDict;
    
    NSString *jsonConfigUrl;
    NSString *gapotaTrackingID;
    AppotaGameSDKCHDraggingCoordinator *draggingCoordinator;
    AppotaGameSDKCHDraggableView  *draggableView;
    
    NSArray *appotaInitPaymentMethod;
}

@property (nonatomic, unsafe_unretained) id<AppotaGameSDKConfigureDelegate> delegate;

#pragma mark - Public method
+(AppotaGameSDKConfigure *)sharedGameConfig;
+ (BOOL) handleOpenURL:(NSURL*) url sourceApplication:(NSString*) sourceApplication annotation:(id) annotation;
/*
 * Config SDK function
 * 
 */
+ (void) configureWithClientID:(NSString*) clientID
              withClientSecret:(NSString*) clientSecret
               withInAppAPIKey:(NSString*) inAppAPIKey
                     withState:(NSString*) state_
                 withNoticeUrl:(NSString*) noticeUrl_
                 withConfigUrl:(NSString*) configUrl_;
/*
 * Add payment support
 */
+ (void) addSupportPayment:(AppotaPayment*) appPayment;

/*
 * Get user infor for verify process
 */
+ (NSDictionary*) getUserInfo;

+ (NSString*) getUserName;

+ (NSString*) getUserID;

+ (NSString*) getAccessToken;

+ (BOOL) checkUserLogin;
/*
 * Show payment view popup in game view
 */
+ (void) showPaymentView;

/*
 * Show login view popup in game view
 */
+ (void) showLoginView;

/*
 * Show switch user popup in game view
 */
+ (void) showSwitchUserView;

/*
 * Show SDK view with choose payment, switch user, logout option
 */
+ (void) showSDKView;

/*
 * Show and hide floating payment button
 */
+ (void) showPaymentButton;

+ (void) hidePaymentButton;

+ (void) closePaymentView;
/*
 * Log out
 */
+ (void) logOut;

#pragma mark - Push notification
+ (NSString*) configurePushNotificationWithTokenData:(NSData*) deviceTokenData;
+ (void) registerPushNotification;
#ifdef NOUI_LOGIN
#pragma mark - do login with facebook
/*
 * Config SDK function
 *
 */
+ (void) configureWithClientID:(NSString*) clientID
              withClientSecret:(NSString*) clientSecret
               withInAppAPIKey:(NSString*) inAppAPIKey
                     withState:(NSString*) state_
                 withNoticeUrl:(NSString*) noticeUrl_
                 withConfigUrl:(NSString*) configUrl_
                       allowUI:(BOOL) enableUI
;
+ (void) loginGoogleWithHandler:(AppotaLoginRequestHandler) handler;
+ (void) loginFacebookWithPermission:(NSArray*) permissionArray
                         withHandler:(AppotaLoginRequestHandler) handler;
#endif
//+ (void) configureWithClientID:(NSString *)clientID
//              withClientSecret:(NSString *)clientSecret
//               withInAppAPIKey:(NSString *)inAppAPIKey
//                     withState:(NSString *)state_
//                 withNoticeUrl:(NSString *)noticeUrl_
//                 withConfigUrl:(NSString *)configUrl_
//                 withLoginDict:(NSDictionary*) loginDict;

#pragma mark - Class method
- (void) reloadRemoteConfig;
- (BOOL)checkUpdate;
- (void)setCheckUpdate:(BOOL)newValue;
- (NSMutableArray *)listPayment;

- (void)setListPayment:(NSMutableArray *)newValue;
- (void) didFinishLoginSignalAndReloadRemoteConfig:(id) sender;
- (void) didFinishSwitchUserSignalAndReloadRemoteConfig:(id) sender;
- (NSMutableArray*) getListPaymentOrderedByMethod;
- (NSMutableArray*) getListPaymentByMethod:(PAYMENT_METHOD) pMethod;
- (NSString *)noticeUrl;
- (void)setNoticeUrl:(NSString *)newValue;
- (BOOL)autoShowPaymentButton;
- (void)setAutoShowPaymentButton:(BOOL)newValue;

- (id)session;

- (void)setSession:(id)newValue;

- (NSString *)googleClientId;

- (void)setGoogleClientId:(NSString *)newValue;

- (NSString *)jsonConfigUrl;

- (void)setJsonConfigUrl:(NSString *)newValue;

- (BOOL)enableSocialLogin;

- (void)setEnableSocialLogin:(BOOL)newValue;

- (BOOL)enableAppotaLogin;

- (void)setEnableAppotaLogin:(BOOL)newValue;

- (BOOL)enableQuickLogin;

- (void)setEnableQuickLogin:(BOOL)newValue;

- (BOOL)autoShowLoginDialog;

- (void)setAutoShowLoginDialog:(BOOL)newValue;

- (NSString *)paymentState;

- (void)setPaymentState:(NSString *)newValue;

- (BOOL)enableLogoutDialog;

- (void)setEnableLogoutDialog:(BOOL)newValue;

- (NSString *)gapotaTrackingID;

- (void)setGapotaTrackingID:(NSString *)newValue;

- (AppotaGameSDKCHDraggingCoordinator *)draggingCoordinator;

- (void)setDraggingCoordinator:(AppotaGameSDKCHDraggingCoordinator *)newValue;

- (AppotaGameSDKCHDraggableView *)draggableView;

- (void)setDraggableView:(AppotaGameSDKCHDraggableView *)newValue;

- (BOOL)isOnlyOpenProfile;

- (void)setIsOnlyOpenProfile:(BOOL)newValue;

- (int)isOnlyOpenPayment;

- (void)setIsOnlyOpenPayment:(int)newValue;

- (BOOL)isHiddenUserSwitching;

- (void)setIsHiddenUserSwitching:(BOOL)newValue;

- (BOOL)isShowCloseLoginView;

- (void)setIsShowCloseLoginView:(BOOL)newValue;

- (BOOL)isUsingPrivateUserSystem;

- (void)setIsUsingPrivateUserSystem:(BOOL)newValue;

- (BOOL)isUsingWebLoginSystem;

- (void)setIsUsingWebLoginSystem:(BOOL)newValue;

- (NSString *)googleClientSecret;

- (void)setGoogleClientSecret:(NSString *)newValue;

- (BOOL)isSignOutSession;

- (void)setIsSignOutSession:(BOOL)newValue;

- (NSString *)googleAccToken;

- (void)setGoogleAccToken:(NSString *)newValue;

- (NSDictionary *)googleTokenDict;

- (void)setGoogleTokenDict:(NSDictionary *)newValue;

@end
