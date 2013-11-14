//
//  AppotaSwitchUserDialogView.h
//  AppotaSDK
//
//  Created by tuent on 11/5/13.
//
//

#import <UIKit/UIKit.h>
#import "AppotaGameView.h"

@interface AppotaSwitchUserDialogView : AppotaGameView
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *logOutButton;
- (IBAction)logOutClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *switchButton;
- (IBAction)switchClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *paymentButton;
- (IBAction)paymentClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *curveView;

@end
