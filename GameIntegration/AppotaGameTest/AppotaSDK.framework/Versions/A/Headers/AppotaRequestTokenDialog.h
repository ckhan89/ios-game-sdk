//
//  AppotaRequestTokenDialog.h
//  AppotaExample2
//
//  Created by tuent on 5/10/13.
//
//

#import "AppotaPaymentSDKDialog.h"
#import "AppotaPaymentAPI.h"

@interface AppotaRequestTokenDialog : AppotaPaymentSDKDialog {
    BOOL isDialogLoaded;
    AppotaTopUpWebHandler handler;
}

- (void) showRequestViewWithHandler:(AppotaTopUpWebHandler) requestHandler;
@end
