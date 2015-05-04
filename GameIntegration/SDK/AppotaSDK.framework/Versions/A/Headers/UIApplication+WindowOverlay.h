//
//  UIApplication+WindowOverlay.h
//  AppotaSDK
//
//  Created by tuent on 10/31/13.
//
//

#import <UIKit/UIKit.h>

@interface UIApplication (WindowOverlay)
@property (nonatomic, readonly) UIView *baseWindowView;
-(void)addWindowOverlay:(UIView *)view;
@end
