//
//  AppotaPaymentDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/17/13.
//
//

#import <UIKit/UIKit.h>
#import "AppotaPopoverView.h"
#import "AppotaPaymentInfoDetailView.h"
@class AppotaPaymentDialog;
@class AppotaPaymentLoginDialog;

@interface AppotaPaymentDialogView : UIView <AppotaPopoverViewDelegate>{
    __unsafe_unretained IBOutlet UIView *tabBarView;
    __unsafe_unretained IBOutlet UIImageView *iconImageView;
    __unsafe_unretained IBOutlet UITextView *paymentDetailTextView;
    __unsafe_unretained IBOutlet UIButton *paymentDetailButton;
    __unsafe_unretained IBOutlet UIButton *backPaymentButton;
    __unsafe_unretained IBOutlet UILabel *titleLabel;
    __unsafe_unretained IBOutlet UIImageView *tabBarIconImageView;
    __unsafe_unretained IBOutlet UIScrollView *descriptionScrollView;
    
    __unsafe_unretained IBOutlet UIButton *dropInForButton;
    UIButton *chooseLangButton;
    __unsafe_unretained IBOutlet UILabel *payDescriptinLabel;
    
    __unsafe_unretained IBOutlet UIImageView *payBackGroundImageView;
    BOOL isViewMoveUp;
    
    __unsafe_unretained IBOutlet UIScrollView *paymentItemscrollView;
    __unsafe_unretained IBOutlet AppotaPaymentInfoDetailView *detailPaymentInfoView;    
}

- (void) addChooseLanguageButton;
- (IBAction)showPaymentDetailDescription:(id)sender;
- (void) setUpViewWithTitle:(NSString*) title
            withDescription:(NSString*) description
          withPaymentDialog:(AppotaPaymentDialog*) paymentDialog;
- (void) setupViewWithListItem:(NSArray*) listPaymentItem
               withDescription:(NSString*) description
                    withDialog:(AppotaPaymentDialog*) paymentDialog;
- (void) closePaymentView;
- (AppotaPaymentLoginDialog*) getDialog;

- (void) setMoveViewUp:(BOOL) moveUp
          withTimeShow:(float) timeShow
            withOffset:(float) offset;
- (void) setUpContentScrollViewSizeAndDetailInfoViewWithListPayment:(NSArray*) paymentList;
- (void) hideOrShowAllPreviousView:(BOOL) isHide;
@end
