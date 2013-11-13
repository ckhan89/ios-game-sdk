//
//  AppotaUtil.h
//  AppotaSDK
//
//  Created by tuent on 10/1/13.
//
//

#import <Foundation/Foundation.h>
#import "AppotaPayment.h"
#import "AppotaPaymentAPI.h"

@class AppotaPaymentController;
@class AppotaPaymentLoginDialog;
@class AppotaGamePaymentDialogView;
@class AppotaGameView;
@interface AppotaUtil : NSObject
+ (NSBundle *)frameworkBundle;
+(UIImage *)imageWithNamed:(NSString *)imgName ofType:(NSString *)extension;
+ (UIImage*) imageNamed:(NSString*) imageName;
+ (UIViewController *) firstAvailableUIViewController:(UIView*) v;
+ (CGSize) getWindowSize;
+(BOOL) verifyPassword:(NSString*) passwordString
             withAlert:(BOOL) enableAlert
;
+(BOOL) verifyUser:(NSString*) userString
             withAlert:(BOOL) enableAlert
;
+ (BOOL)verifyEmail:(NSString *)emailStr
             withAlert:(BOOL) enableAlert;
+ (NSArray*) getListSMSOptionWithSMSListAmount:(NSArray*) listSMSAmount
                          withSMSStructureDict:(NSDictionary*) smsDict;
+ (NSArray*) getListSMSOptionWithSMSPayment:(NSArray*) listSMSPayment
                       withSMSStructureDict:(NSDictionary*) smsDict;
+(void) alertWithTitle:(NSString*) alertTitle
           withMessage:(NSString*) alertMessage;
+ (UIView*) getSMSViewWithText:(NSString*) smsText
                    withRecpit:(NSString*) smsRecpt
                withController:(AppotaPaymentController*) controller
                     withFrame:(CGRect) viewFrame;
+ (NSArray*) getArrayOfDescriptionFromString:(NSString*) descriptionString;
+ (NSDictionary*) getAttributeFontDictionaryWithFontSize:(float) fontSize
                                                fontName:(NSString*) fontName;

+ (void) setLanguageForView:(UIView*) v;
+ (void) deleteLinkedDeviceUserInfo:(NSDictionary*) userInfoDict;
+ (NSDictionary*) getLoginDictFromDefault;
+ (NSString*) getDeviceID;
+ (NSString *)systemVersion;
+ (NSString*) getAppVersion;
+ (NSDictionary *) getDeviceDictionary;
+ (UIImage*) getAppIcon;
+ (NSString*) getAppName;
+ (NSString*) getAppBundleId;
+ (CGAffineTransform)transformForOrientation;
+ (CGSize) sizeInOrientation:(UIInterfaceOrientation)orientation;
+ (UIView*) getConfigurePaymentView;
+ (void) hideOrShowPaymentButton:(BOOL) hide;
+ (void) showPaymentView;
+ (void) showPaymentViewFromView:(AppotaGameView*) v;
+ (void) showSwitchView;
+ (void) checkAutoLoginAndShowLoginView;
+ (void) checkAutoLoginAndShowChooseUserView;
+ (void) showLoginView;
+ (void) showLoginViewFromChooseUser:(AppotaGameView*) v;
+ (void) showLoginViewFromChooseUser:(AppotaGameView*) v withHideQuickLoginView:(BOOL) hideQuickLogin;
+ (void) showChooseUserView;
+ (void) showChooseUserViewFromView:(AppotaGameView*) v;
+ (BOOL) checkUserLogin;
+ (NSString*) getLocalCountry;
+ (void) logOut;
+ (void)logOutAlertWithView:(AppotaGameView*)gameView;
+ (NSString*) getAccessTokenFromLoginDict;
+ (NSString*) getUserIDFromLoginDict;
+ (NSString*) getUserNameFromLoginDict;
+ (NSString*) getKeyFromLoginDict:(NSDictionary*) loginDict_
                          withKey:(NSString*) key;
+ (NSString*) getUserNameFromDict:(NSDictionary*) loginDict_;
+ (NSDictionary*) getUserDictFromLoginDict:(NSDictionary*) loginDict_;
+ (void) saveLoginDict:(NSDictionary*) loginDict;
+(PAYMENT_METHOD) getPaymentMethodFromString:(NSString*) pMethod;
+(NSString*) getPaymentMethodString:(PAYMENT_METHOD) pMethod;
+(NSString*) getDescriptionStringFromListItem:(NSArray*) listPaymentItem;

+ (void) showUpdateInfoViewFromView:(AppotaGameView*) v
                   withUserInfoDict:(NSDictionary*) userInfoDict
                withRemoveSuperView:(BOOL) enableRemove
                  withWarningOption:(BOOL) enableWarning;

+ (void) showUpdateInfoViewFromView:(AppotaGameView*) v
                withRemoveSuperView:(BOOL) enableRemove
                  withWarningOption:(BOOL) enableWarning;

+ (void) showProfileViewFromView:(AppotaGameView*) v;
+ (void) showLogoutAlertViewWithHandler:(AppotaPaymentHandler) handler;
@end
