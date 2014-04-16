//
//  AppotaSettingManager.h
//  AppotaSDK
//
//  Created by tuent on 2/25/14.
//
//

#import <Foundation/Foundation.h>

@interface AppotaSettingManager : NSObject
- (NSString*) getLocationInfo;
- (void) setTrackDictionary:(NSDictionary*) dict;
- (NSDictionary*) getTrackDictionary;
@end
