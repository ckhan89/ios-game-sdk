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
- (NSString*) getLocationInfo;
- (void) setTrackDictionary:(NSDictionary*) dict;
- (NSDictionary*) getTrackDictionary;
/**
 *
 *
 *  @return Always return 2 country based on SDK location and current supporting language
 */
+ (NSArray*) getListSupportLanguageCountry;
+ (NSString*) getCountryLanguageNameWithLanguage:(NSString *)lang;
+ (NSString*) getCountryImageNameWithLanguage:(NSString*) lang;
@end
