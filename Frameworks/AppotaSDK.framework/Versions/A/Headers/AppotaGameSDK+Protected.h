//
//  AppotaGameSDK+Protected.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 11/20/14.
//
//

#import "AppotaGameSDK.h"
#import "AppotaTrackObject.h"
#import "AppotaUserLoginResult.h"
#import "AppotaDevConfigObject.h"
@class FBFrictionlessRecipientCache;
@interface AppotaGameSDK (Protected)
@property(readonly, strong)  AppotaTrackObject *trackObject;
@property(readonly, strong)  AppotaUserLoginResult *userLoginResultObject;
@property(readonly, strong)  AppotaDevConfigObject *paymentConfigObject;
@property(nonatomic, assign) BOOL isHideWelcomeView;
@property(assign, nonatomic) BOOL isKeepLoginSession;
@property (readwrite) BOOL autoShowPaymentButton;
@property (strong, nonatomic)  FBFrictionlessRecipientCache *friendCache;
@end
