//
//  CMNavBarNotificationView.h
//  Moped
//
//  Modified by Eduardo Pinho on 1/12/13.
//  Created by Engin Kurutepe on 1/4/13.
//  Copyright (c) 2013 Codeminer42 All rights reserved.
//  Copyright (c) 2013 Moped Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *kCMNavBarNotificationViewTapReceivedNotification;

typedef void (^CMNotificationSimpleAction)(id);
@protocol AppotaGameSDKNavBarNotificationViewDelegate;
@class OBGradientView;
@interface AppotaGameSDKNavBarNotificationView : UIView

@property (nonatomic, strong) UILabel *textLabel;
@property (nonatomic, strong) UILabel *detailTextLabel;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, assign) id<AppotaGameSDKNavBarNotificationViewDelegate> delegate;
@property (nonatomic, strong) UIView * contentView;

@property (nonatomic) NSTimeInterval duration;

+ (AppotaGameSDKNavBarNotificationView *) notifyWithText:(NSString*)text
                                 detail:(NSString*)detail
                                  image:(UIImage*)image
                            andDuration:(NSTimeInterval)duration;

+ (AppotaGameSDKNavBarNotificationView *) notifyWithText:(NSString*)text
                                 detail:(NSString*)detail
                            andDuration:(NSTimeInterval)duration;

+ (AppotaGameSDKNavBarNotificationView *) notifyWithText:(NSString*)text
                              andDetail:(NSString*)detail;

+ (AppotaGameSDKNavBarNotificationView *) notifyWithText:(NSString*)text
                                 detail:(NSString*)detail
                                  image:(UIImage*)image
                               duration:(NSTimeInterval)duration
                          andTouchBlock:(CMNotificationSimpleAction)block;

+ (AppotaGameSDKNavBarNotificationView *) notifyWithText:(NSString*)text
                                 detail:(NSString*)detail
                               duration:(NSTimeInterval)duration
                          andTouchBlock:(CMNotificationSimpleAction)block;

+ (AppotaGameSDKNavBarNotificationView *) notifyWithText:(NSString*)text
                                 detail:(NSString*)detail
                          andTouchBlock:(CMNotificationSimpleAction)block;

+ (void) setBackgroundImage:(UIImage *)image;
- (void) setBackgroundColor:(UIColor *)color;

@end

@protocol AppotaGameSDKNavBarNotificationViewDelegate <NSObject>

@optional
- (void)didTapOnNotificationView:(AppotaGameSDKNavBarNotificationView *)notificationView;

@end
