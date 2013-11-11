//
//  AppotaGamePaymentDialogView.h
//  AppotaSDK
//
//  Created by tuent on 10/31/13.
//
//

#import "AppotaGameView.h"
#import "AppotaPopoverView.h"

@interface AppotaGamePaymentDialogView : AppotaGameView <UITableViewDataSource, UITableViewDelegate, AppotaPopoverViewDelegate> {
    __unsafe_unretained IBOutlet UILabel *titleLabel;
    __unsafe_unretained IBOutlet UIImageView *tabBarIconImageView;    
    __unsafe_unretained IBOutlet UILabel *userNameLabel;
    UIButton *chooseLangButton;
}
@property (unsafe_unretained, nonatomic) IBOutlet UITableView *paymentMethodTableView;

@end
