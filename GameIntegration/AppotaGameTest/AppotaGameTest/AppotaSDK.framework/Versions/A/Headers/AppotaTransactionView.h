//
//  AppotaTransactionView.h
//  AppotaSDK
//
//  Created by tuent on 11/15/13.
//
//

#import <UIKit/UIKit.h>

@interface AppotaTransactionView : UIView <UITableViewDataSource, UITableViewDelegate> {
    NSArray *listTransaction;
}
@property (unsafe_unretained, nonatomic) IBOutlet UITableView *transactionTableView;

- (void) reloadViewWithArray:(NSArray*) transactionArray;

@end
