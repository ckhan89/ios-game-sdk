//
//  Language.h
//  LanguageDemo
//
//  Created by Donly Chan on 12-7-21.
//  Copyright (c) 2012年 MAGICALBOY. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppotaGameSDKLanguage : NSObject

+(void)initialize;
+ (void) setLanguage:(NSString *)l fromLang:(NSString*) fromLang;
+(void)setLanguage:(NSString *)l;
+(NSString *)get:(NSString *)key alter:(NSString *)alternate;
+(NSString *)get:(NSString *)key;
+(NSString*) getLanguage;
+(NSString *)get:(NSString *)key enablePreviousBundle:(BOOL) enablePreviousBundle;
@end
