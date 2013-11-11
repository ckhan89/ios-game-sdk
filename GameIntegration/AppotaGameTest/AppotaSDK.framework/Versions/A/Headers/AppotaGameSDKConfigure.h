//
//  AppotaGameSDKConfigure.h
//  AppotaSDK
//
//  Created by tuent on 10/30/13.
//
//

#import <Foundation/Foundation.h>
#import "CHDraggableView.h"
#import "CHDraggingCoordinator.h"
#import "AppotaPayment.h"

@protocol AppotaGameSDKConfigureDelegate <NSObject>
@required
/*
 * Callback after login
 */
- (void) didFinishLogin:(NSDictionary*) userInfoDict;

@end

@interface AppotaGameSDKConfigure : NSObject <CHDraggableViewDelegate, CHDraggingCoordinatorDelegate>
{
    BOOL checkUpdate;
    BOOL autoShowPaymentButton;
    NSMutableArray *listPayment;
    NSMutableArray *listPaymentByMethod;
    NSString *noticeUrl;
    id session;
    BOOL enableFacebook, enableGoogle, enableTwitter;
    NSString *googleClientId;
    NSString *jsonConfigUrl;
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
                 withNoticeUrl:(NSString*) noticeUrl
               withCheckUpdate:(BOOL) checkUpdate
           enableFacebookLogin:(BOOL) enableFacebook
             enableGoogleLogin:(BOOL) enableGoogle
            enableTwitterLogin:(BOOL) enableTwitter
         autoShowPaymentButton:(BOOL) autoShowButton;

/*
 * Add payment support
 */
+ (void) addSupportPayment:(AppotaPayment*) appPayment;

/*
 * Get user infor for verify process
 */
+ (NSDictionary*) getUserInfo;

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

/*
 * Log out
 */
+ (void) logOut;

#pragma mark - Class method
- (BOOL)checkUpdate;
- (void)setCheckUpdate:(BOOL)newValue;
- (NSMutableArray *)listPayment;

- (void)setListPayment:(NSMutableArray *)newValue;
- (void) didFinishLoginSignal:(id) sender;
- (NSMutableArray*) getListPaymentOrderedByMethod;
- (NSMutableArray*) getListPaymentByMethod:(PAYMENT_METHOD) pMethod;
- (NSString *)noticeUrl;
- (void)setNoticeUrl:(NSString *)newValue;
- (BOOL)autoShowPaymentButton;

- (void)setAutoShowPaymentButton:(BOOL)newValue;

- (id)session;

- (void)setSession:(id)newValue;

- (BOOL)enableFacebook;

- (void)setEnableFacebook:(BOOL)newValue;

- (BOOL)enableGoogle;

- (void)setEnableGoogle:(BOOL)newValue;

- (BOOL)enableTwitter;

- (void)setEnableTwitter:(BOOL)newValue;

- (NSString *)googleClientId;

- (void)setGoogleClientId:(NSString *)newValue;

- (NSString *)jsonConfigUrl;

- (void)setJsonConfigUrl:(NSString *)newValue;

@end
