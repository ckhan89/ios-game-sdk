//
//  AppotaPaymentBankDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/21/13.
//
//

#import "AppotaPaymentDialogView.h"
#import "AppotaDropDown.h"

@interface AppotaPaymentBankDialogView : AppotaPaymentDialogView <AppotaDropDownDelegate> {
    
    __unsafe_unretained IBOutlet UIButton *chooseBankButton;
    __unsafe_unretained IBOutlet UIImageView *coinImageView;
    __unsafe_unretained IBOutlet UIButton *dropDownChooseBankButton;
    __unsafe_unretained IBOutlet UIButton *choseAmountButton;
    __unsafe_unretained IBOutlet UIButton *dropDownChooseAmountButton;

    AppotaDropDown *chooseBankDropDown;
    AppotaDropDown *chooseAmountDropDown;    
    
    __unsafe_unretained IBOutlet UIButton *payMobileButton;
    __unsafe_unretained IBOutlet UIButton *payPCButton;
    NSArray *listBanks;
    
    NSArray *listPayment;
    NSMutableArray *listPaymentString;
}
- (IBAction)payPCAction:(id)sender;
- (IBAction)payMobileAction:(id)sender;
- (IBAction)chooseBankAction:(id)sender;
- (IBAction)chooseAmountAction:(id)sender;
- (void) setupViewWithListPayment:(NSArray*) listPayment_
                        withState:(NSString*) state
                       withTarget:(NSString*) target
                    withNoticeURL:(NSString*) noticeUrl
                  withDescription:(NSString*) description
                       withDialog:(AppotaPaymentDialog*) paymentDialog;

- (void) setupViewWithListAmount:(NSArray*) listAmount_
                       withState:(NSString*) state
                      withTarget:(NSString*) target
                   withNoticeURL:(NSString*) noticeUrl
                 withDescription:(NSString*) description
                      withDialog:(AppotaPaymentDialog*) paymentDialog;
- (NSDictionary*) getPaymentData;
@end
