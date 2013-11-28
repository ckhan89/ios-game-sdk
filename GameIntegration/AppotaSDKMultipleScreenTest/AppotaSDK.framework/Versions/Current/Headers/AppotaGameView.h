//
//  AppotaGameView.h
//  AppotaSDK
//
//  Created by tuent on 10/31/13.
//
//

#import <UIKit/UIKit.h>
#import "AppotaPopoverView.h"
@class AppotaPaymentLoginDialog;
@interface AppotaGameView : UIView <AppotaPopoverViewDelegate>{
    BOOL isViewMoveUp;
    UIButton *chooseLangButton;    
}
- (AppotaPaymentLoginDialog*) getDialog;
- (IBAction)closeButtonClick:(id)sender;
- (void) setMoveViewUp:(BOOL) moveUp
          withTimeShow:(float) timeShow
            withOffset:(float) offset;
- (void) setLanguage:(NSString*) langString;
- (void) addChooseLanguageButton;
- (void) setUpChooseLangButton;
- (void) didTapChooseLanguage:(id) sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *closeButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *gameBackGroundImageView;
@end
