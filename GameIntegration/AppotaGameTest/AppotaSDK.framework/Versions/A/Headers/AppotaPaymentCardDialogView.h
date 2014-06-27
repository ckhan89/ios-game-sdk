//
//  AppotaPaymentCardDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/17/13.
//
//

#import "AppotaPaymentDialogView.h"
#import "AppotaGameDropDown.h"
#import "AppotaPaymentInfoDetailView.h"

@interface AppotaPaymentCardDialogView : AppotaPaymentDialogView <AppotaGameDropDownDelegate, UITextFieldDelegate>
{
    __unsafe_unretained IBOutlet UIView *paymentDetailBackGroundView;
    __unsafe_unretained IBOutlet UITextField *serialTextField;
    __unsafe_unretained IBOutlet UITextField *codeTextField;
    
    __unsafe_unretained IBOutlet UIImageView *serialTextFieldImageView;
    __unsafe_unretained IBOutlet UIImageView *codeTextFieldImageView;
    __unsafe_unretained IBOutlet UIButton *payButton;
    
    AppotaGameDropDown *chooseVendorDropdown;
}


@property (unsafe_unretained, nonatomic) IBOutlet UIButton *openVendorButton;
- (IBAction)openVendor:(id)sender;
- (void) updatePayButtonDictionary;
@end
