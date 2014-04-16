//
//  AppotaUtil+ShowViewHelper.h
//  AppotaSDK
//
//  Created by tuent on 11/22/13.
//
//

#import <AppotaSDK/AppotaSDK.h>
#import "AppotaUtil.h"

@interface AppotaUtil (ShowViewHelper)
+ (id) getNearestViewWithClass:(NSString*) className
                      withView:(UIView*) currentView;
+ (UIView*) getConfigurePaymentView;
+ (void) hideOrShowPaymentButton:(BOOL) hide;
+ (void) showPaymentView;
+ (void) showPaymentViewFromView:(AppotaGameView*) v;
+ (void) showSwitchView;
+ (void) checkAutoLoginAndShowLoginView;
+ (void) checkAutoLoginAndShowChooseUserView;
+ (void) showLoginView;
+ (void) showLoginViewFromChooseUser:(AppotaGameView*) v;
+ (void) showLoginViewFromChooseUser:(AppotaGameView*) v withHideQuickLoginView:(BOOL) hideQuickLogin;
+ (void) showChooseUserView;
+ (void) showChooseUserViewFromView:(AppotaGameView*) v;
+ (void) showChooseUserViewAndLoadListUser;
+ (void) showLogoutAlertViewWithHandler:(AppotaPaymentHandler) handler;
+ (void) showUpdateInfoViewFromView:(AppotaGameView*) v
                   withUserInfoDict:(NSDictionary*) userInfoDict
                withRemoveSuperView:(BOOL) enableRemove
                  withWarningOption:(BOOL) enableWarning;

+ (void) showUpdateInfoViewFromView:(AppotaGameView*) v
                withRemoveSuperView:(BOOL) enableRemove
                  withWarningOption:(BOOL) enableWarning;

+ (void) showProfileViewFromView:(AppotaGameView*) v;
+ (CGRect) getViewFrame:(UIView*) view;
+ (void) hideOrShowAllPreviousView:(BOOL) isHide
                   withCurrentView:(UIView*) currentView
                        fromDialog:(AppotaPaymentDialog*) dialog;
+ (void) showDropDownAlertViewWithTitle:(NSString*) title
                           withTimeShow:(float) timeShow;
@end
