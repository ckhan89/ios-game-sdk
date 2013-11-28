//
//  AppotaPaymentInfoDetailView.h
//  AppotaSDK
//
//  Created by tuent on 11/1/13.
//
//

#import <UIKit/UIKit.h>

@interface AppotaPaymentInfoDetailView : UIView
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *dropInfoButton;
- (IBAction)dropInfoButtonClick:(id)sender;
@property (unsafe_unretained, nonatomic) IBOutlet UIScrollView *infoScrollView;
- (void) setUpViewWithListPayment:(NSArray*) listPayment;
@end
