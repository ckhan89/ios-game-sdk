//
//  NIDropDown.h
//  NIDropDown
//
//  Created by Bijesh N on 12/28/12.
//  Copyright (c) 2012 Nitor Infotech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AppotaDropDown;
@protocol AppotaDropDownDelegate
- (void) niDropDownDelegateMethod: (AppotaDropDown *) sender;
@end

@interface AppotaDropDown : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSString *animationDirection;
    UIImageView *imgView;
    NSTextAlignment cellAlight;
    NSString *generalImageURL;
}
@property (nonatomic, retain) id <AppotaDropDownDelegate> delegate;
@property (nonatomic, retain) NSString *animationDirection;
@property (readwrite) int buttonIndex;

-(void)hideDropDown:(UIButton *)b;
- (id)showDropDown:(UIButton *)b withHeight:(CGFloat *)height withArray:(NSArray *)arr withImageArray:(NSArray *)imgArr withDirection:(NSString *)direction withCellAlight:(NSTextAlignment) al;
- (id)showDropDown:(UIButton *)b withHeight:(CGFloat *)height withArray:(NSArray *)arr withImageArray:(NSArray *)imgArr withImageURL:(NSString*) imageURL withDirection:(NSString *)direction withCellAlight:(NSTextAlignment) al;
- (UITableView*) getTableView;
- (UIButton*) getBtnSender;
@end
