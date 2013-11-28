//
//  AppotaPaymentDescriptionCell.h
//  AppotaSDK
//
//  Created by tuent on 10/21/13.
//
//

#import <UIKit/UIKit.h>
#import "AppotaPayment.h"

@interface AppotaPaymentDescriptionCell : UIView {
    
}
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *coinImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *contentLabel;
- (void) setUpCellWithItem:(AppotaPayment*) pItem;
@end
