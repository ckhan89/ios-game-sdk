//
//  AppotaTransactionCell.h
//  AppotaSDK
//
//  Created by tuent on 11/11/13.
//
//

#import <UIKit/UIKit.h>

@interface AppotaTransactionCell : UITableViewCell
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *idTransactionLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *timeTransactionLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *typeTransactionLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *amountTransactionLabel;
- (void) setupCellWithDictionary:(NSDictionary*) transactionDict;
@end
