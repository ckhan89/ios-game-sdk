//
//  AppotaChooseUserDialogView.h
//  AppotaSDK
//
//  Created by tuent on 11/1/13.
//
//

#import "AppotaGamePaymentDialogView.h"

@interface AppotaChooseUserDialogView : AppotaGamePaymentDialogView
{
    __unsafe_unretained IBOutlet UIButton *chooseOtherButton;
}
- (IBAction)chooseOtherUserClick:(id)sender;
- (void) reloadTable;
@end
