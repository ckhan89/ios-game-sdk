//
//  AppotaPaymentDialog.h
//  AppotaSDK
//
//  Created by tuent on 10/9/13.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import <MessageUI/MessageUI.h>
//#import "PayPalMobile.h"

@class AppotaPaymentDialogView;
@class AppotaPaymentController;
@interface AppotaPaymentDialog : AppotaPaymentSDKDialog{
//    PayPalPaymentViewController *pppViewController;
    AppotaPaymentDialogView *appotaPaymentView;
    NSMutableArray *listPaymentController;
    AppotaPaymentHandler paymentHandler;
    
    MFMessageComposeViewController *smsViewController;
    UIViewController *smsContentViewController;
    
    // Payment variable
    NSString *paymentState;
    NSString *paymentTarget;
    NSString *paymentNoticeURL;
    NSString *paymentDescription;
    NSArray *paymentListOption;
    NSString *paymentInAppID;
    BOOL enableDialog;
}
//@property(nonatomic, strong, readwrite) PayPalPayment *completedPaypalPayment;

- (UIViewController*) getSMSContentViewController;

- (void) showSMSPaymentDialogWithAmount:(int) amount
                            withSMSDict:(NSDictionary*) smsDict
                            withInAppID:(NSString*) inAppID
                  withCompletionHandler:(AppotaPaymentHandler) handler;

- (void) showSMSPaymentDialogWithListAmount:(NSArray*) listAmount
                                withSMSDict:(NSDictionary*) smsDict
                            withDescription:(NSString*) description
                      withCompletionHandler:(AppotaPaymentHandler) handler;

- (NSMutableArray*) getListPaymentController;

- (void) addPaymentController:(AppotaPaymentController*) controller;
//- (void) showSMSPaymentDialog;
//- (void) showPaypalPaymentDiaglog;

- (void) showUnPINPaymentDialogWithDescription:(NSString*) descriptionString
                                   withHandler:(AppotaPaymentHandler) handler;

- (void) showCardPaymentDialogWithDescription:(NSString*) descriptionString
                                  withHandler:(AppotaPaymentHandler) handler;

- (void) showPaypalPaymentDialogWithInputWithState:(NSString *)state
                                        withTarget:(NSString *)target
                                     withNoticeUrl:(NSString *)noticeUrl withDescriptionString:(NSString *)descriptionString withHandler:(AppotaPaymentHandler)handler;


- (void) showPaypalPaymentDialogWithAmount:(float) amount
                                  withState:(NSString*) state
                                 withTarget:(NSString*) target
                              withNoticeUrl:(NSString*) noticeUrl
                              enableDialog:(BOOL) enableDialog
                                withHandler:(AppotaPaymentHandler) handler;
//- (void) showPaypalPaymentDialogWithListAmount:(NSArray*) listAmount
//                         withDescriptionString:(NSString*) descriptionString
//                                   withHandler:(AppotaPaymentHandler)handler;

- (void) showPaypalPaymentDialogWithListItem:(NSArray*) listAmount
                                   withState:(NSString*) state
                                  withTarget:(NSString*) target
                               withNoticeUrl:(NSString*) noticeUrl
                       withDescriptionString:(NSString*) descriptionString
                                 withHandler:(AppotaPaymentHandler)handler;

- (void) showBankPaymentDialogWithListPayment:(NSArray*) listPayment
                                    withState:(NSString*) state
                                   withTarget:(NSString*) target
                                withNoticeUrl:(NSString*) noticeUrl
                        withDescriptionString:(NSString*) descriptionString
                                  withHandler:(AppotaPaymentHandler)handler;

- (void) showBankPaymentDialogWithListAmount:(NSArray*) listAmount
                                   withState:(NSString*) state
                                  withTarget:(NSString*) target
                               withNoticeUrl:(NSString*) noticeUrl
                       withDescriptionString:(NSString*) descriptionString
                                 withHandler:(AppotaPaymentHandler)handler;

- (void) showBankPaymentDialogWithAmount:(int) amount
                               withState:(NSString*) state
                              withTarget:(NSString*) target
                           withNoticeUrl:(NSString*) noticeUrl
                   withDescriptionString:(NSString*) descriptionString
                             withHandler:(AppotaPaymentHandler)handler;


- (void) showBankPaymentDialogWithState:(NSString*) state
                             withTarget:(NSString*) target
                          withNoticeUrl:(NSString*) noticeUrl
                  withDescriptionString:(NSString*) descriptionString
                            withHandler:(AppotaPaymentHandler)handler;

- (void) showApplePaymentDialogWithListItem:(NSArray*) listIAPItem
                                  withState:(NSString*) state
                                 withTarget:(NSString*) target
                              withNoticeUrl:(NSString*) noticeUrl
                      withDescriptionString:(NSString*) descriptionString
                                withHandler:(AppotaPaymentHandler)handler;
#pragma mark - IBAction
- (void) resendPaypal:(id) sender;
- (void) confirmPaypal:(id) sender;
- (void) payUnPINAction:(id) sender;
- (void) payCardAction:(id) sender;
- (void) clickChooseItem:(id) sender;
- (void) clickChooseMessage:(id) sender;
//- (void) clickChoosePaypal:(id) sender;
- (void) clickChoosePaypalWithValue:(id) sender;
- (void) closePaymentView;
- (void) clickChooseMobileBank:(id) sender;
- (void) clickChoosePCBank:(id) sender;
- (void) clickChooseApple:(id) sender;
- (void) confirmBankPayment:(id) sender;
@end
