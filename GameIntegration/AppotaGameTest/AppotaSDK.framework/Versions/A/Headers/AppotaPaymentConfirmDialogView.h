//
//  AppotaPaymentBankConfirmDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/21/13.
//
//

#import "AppotaPaymentDialogView.h"

@interface AppotaPaymentConfirmDialogView : AppotaPaymentDialogView {
    
    __unsafe_unretained IBOutlet UIButton *confirmButton;
    __unsafe_unretained IBOutlet UIImageView *descriptionBGImage;
    __unsafe_unretained IBOutlet UITextView *inputTextView;
    __unsafe_unretained IBOutlet UIImageView *inputBackgroundImageView;
}
//- (void) setupPCConfirmViewWithShortLink:(NSString*) shortLink;
//- (void) setupMobileConfirmView;
- (void) setupBankConfirmViewWitType:(NSString*) confirmType
                             withURL:(NSString*) url;

@end
