//
//  AppotaGameDropDown.h
//  AppotaSDK
//
//  Created by tuent on 3/5/14.
//
//

#import <UIKit/UIKit.h>

@class AppotaGameDropDown;
@protocol AppotaGameDropDownDelegate
- (void) niDropDownDelegateMethod: (AppotaGameDropDown *) sender;
@end


@interface AppotaGameDropDown : UIView <UITableViewDelegate, UITableViewDataSource> {
//    UIImageView *imgView;
    NSTextAlignment cellAlight;
}
@property (nonatomic, retain) id <AppotaGameDropDownDelegate> delegate;
@property (readwrite) int buttonIndex;

- (UITableView*) getTableView;
- (UIButton*) getBtnSender;
- (id) showDropDownWithButtonSender:(UIButton*) b
                         withHeight:(CGFloat) height
            withBackgroundImageName:(NSString*) backGroundImageName
                    withListContent:(NSArray*) listContent
                      withDirection:(NSString *)direction
                     withCellAlight:(NSTextAlignment) al;
//-(void)hideDropDown:(UIButton *)b;
//- (id)showDropDown:(UIButton *)b withHeight:(CGFloat *)height withArray:(NSArray *)arr withImageArray:(NSArray *)imgArr withDirection:(NSString *)direction withCellAlight:(NSTextAlignment) al;
//- (id)showDropDown:(UIButton *)b withHeight:(CGFloat *)height withArray:(NSArray *)arr withImageArray:(NSArray *)imgArr withImageURL:(NSString*) imageURL withDirection:(NSString *)direction withCellAlight:(NSTextAlignment) al;
//- (UITableView*) getTableView;
//- (UIButton*) getBtnSender;

@end
