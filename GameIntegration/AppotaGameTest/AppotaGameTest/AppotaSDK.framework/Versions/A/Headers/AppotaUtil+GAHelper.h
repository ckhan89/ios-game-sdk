//
//  AppotaUtil+GAHelper.h
//  AppotaSDK
//
//  Created by tuent on 11/22/13.
//
//

#import <AppotaSDK/AppotaSDK.h>

@interface AppotaUtil (GAHelper)
#pragma mark - GA tracking function
+ (NSString*) getGapotaUserAgentString;
+ (NSString*) getDefaultUserAgentSring;
+ (void) trackGapotaPageWithScreen:(NSString*) title;
+ (void) trackGapotaEventWithCategory:(NSString*) cate
                      withEventAction:(NSString*) action;
@end
