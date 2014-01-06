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
+ (UIWindow*) getKeyWindow;
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
+ (NSDictionary*) getRemoteConfigDict;
+ (NSDictionary*) getLoginDictFromDefault;
+ (NSString*) getPTrackingID;
+ (NSString*) getAppVersion;
+ (NSDictionary *) getDeviceDictionary;
+ (UIImage*) getAppIcon;
+ (NSString*) getAppName;
+ (NSString*) getAppBundleId;
+ (CGAffineTransform)transformForOrientation;
+ (BOOL) checkUserLogin;
+ (NSString*) getLocalCountry;
+ (NSString*) getLocalLanguage;
+ (void) logOut;
+ (void) logOutWithoutDialog;
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
+ (NSDictionary*) getPaymentCallBackDictFromState:(AppotaPaymentState) pMethod
                                  withPaymentDict:(NSDictionary*) paymentDict
                                        withError:(NSError*) error;
+ (NSString *) getTargetFromLoginDict;
+ (NSString*) getAmountStringWithFloatValue:(float) amountValue;
+ (NSString*) getTwitterOauthTokenFromArray:(NSArray*) tokenArray;
+ (NSString*) getTwitterAccessTokenFromArray:(NSArray*) tokenArray;
+ (NSString*) getAppotaPushDeviceToken;
#pragma mark - Post protocol
+ (void) postPaymentWithState:(AppotaPaymentState) paymentState
                     withDict:(NSDictionary*) dict
                    withError:(NSError*) error;
+ (void) postFinishLogin:(NSDictionary*) loginDict;
+ (void) postFinishLogout:(NSString*) userName;
+ (void) postSwitchUser:(NSDictionary*) userDict;
+ (NSString*) getImagePathDir;
+ (NSString*) getImagePathWithURL:(NSString*) url;
+ (UIImage*) getImageWithURL:(NSString*) url;
+ (NSString *)URLStringByAppendingQueryString:(NSString *)queryString
                          withString:(NSString*) string;
+(NSString *) urlEncoded:(NSString*) refString;
@end

