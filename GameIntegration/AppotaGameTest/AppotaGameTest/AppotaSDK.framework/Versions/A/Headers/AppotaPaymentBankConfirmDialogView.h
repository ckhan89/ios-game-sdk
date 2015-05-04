//
//  AppotaPaymentBankConfirmDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/21/13.
//
//

#import "AppotaPaymentDialogView.h"

@interface AppotaPaymentBankConfirmDialogView : AppotaPaymentDialogView {
    
    __unsafe_unretained IBOutlet UIButton *confirmBankButton;
    __unsafe_unretained IBOutlet UIImageView *descriptionBGImage;
    __unsafe_unretained IBOutlet UITextView *shortLinkUITextView;
    __unsafe_unretained IBOutlet UIImageView *shortLinkBGImage;
}
- (void) setupPCConfirmViewWithShortLink:(NSString*) shortLink;
- (void) setupMobileConfirmView;
- (void) setupConfirmViewWitType:(NSString*) confirmType
                         withURL:(NSString*) url;
@end
