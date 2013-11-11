//
//  AppotaGameView.h
//  AppotaSDK
//
//  Created by tuent on 10/31/13.
//
//

#import <UIKit/UIKit.h>
@class AppotaPaymentLoginDialog;
@interface AppotaGameView : UIView {
    BOOL isViewMoveUp;
}
- (AppotaPaymentLoginDialog*) getDialog;
- (IBAction)closeButtonClick:(id)sender;
- (void) setMoveViewUp:(BOOL) moveUp
          withTimeShow:(float) timeShow
            withOffset:(float) offset;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *closeButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *gameBackGroundImageView;
@end
