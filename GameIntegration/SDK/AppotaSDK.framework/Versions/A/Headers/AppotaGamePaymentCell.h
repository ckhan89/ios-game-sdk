//
//  AppotaGamePaymentCell.h
//  AppotaSDK
//
//  Created by tuent on 11/1/13.
//
//

#import <UIKit/UIKit.h>

@interface AppotaGamePaymentCell : UITableViewCell {
//    NSArray *paymentDictList;
    NSDictionary *userInfoDict;
}
@property (unsafe_unretained, nonatomic) id gamePayTable;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *gameCellBGImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *gamePaymentIconImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *gamePaymentMethodLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *gamePaymentDescriptionLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *gamePointImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *deleteAccountButton;

- (IBAction)deleteAccountClick:(id)sender;

- (void) setUpGamePaymentWithObject:(id) pObject;
- (void) setUpChooseUserWithDict:(NSDictionary*) uDictInfo;
@end
