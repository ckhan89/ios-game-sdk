//
//  AppotaPaymentDiaglogView.h
//  AppotaSDK
//
//  Created by tuent on 10/9/13.
//
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "AppotaPaymentDialogView.h"

@class AppotaPaymentDialog;
static NSString *ChargingSMSKey = @"charing_sms_key";
static NSString *ChangeSMSDict = @"change_sms_dict_key";
@interface AppotaPaymentSMSDialogView : AppotaPaymentDialogView
{
    // SMS variable
    __unsafe_unretained IBOutlet UIImageView *scrollViewBackground;
    __unsafe_unretained IBOutlet UITextView *smsSyntaxTextView;
    NSArray *listSMSOption;
    MFMessageComposeViewController *viewController;
    NSString *inAppId;
}

@property (nonatomic, strong) NSString *noticeURL;
@property (nonatomic, strong) NSString *state;
@property (nonatomic, strong) NSString *target;

//- (void) setupViewWithSMSStructureDict:(NSDictionary*) smsDict;
- (void) setupViewWithSMSStructureDict:(NSDictionary*) smsDict
                     withListSMSAmount:(NSArray*) listSMSAmount
                       withDescription:(NSString*) description
                            withDialog:(AppotaPaymentDialog*) paymentDialog;
@end
