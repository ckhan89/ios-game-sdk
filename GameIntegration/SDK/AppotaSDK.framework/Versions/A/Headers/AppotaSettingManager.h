//
//  AppotaSettingManager.h
//  AppotaSDK
//
//  Created by tuent on 2/25/14.
//
//

#import <Foundation/Foundation.h>

@interface AppotaSettingManager : NSObject
+ (AppotaSettingManager *)sharedInstance;
- (NSString*) getPIDFromTrackDictionary;
- (NSString*) getLocationInfo;
- (void) setTrackDictionary:(NSDictionary*) dict;
- (NSDictionary*) getTrackDictionary;
+ (NSString*) getForcedSetLanguage;
+ (void) setForcedLanguage:(NSString*) l;
@end
