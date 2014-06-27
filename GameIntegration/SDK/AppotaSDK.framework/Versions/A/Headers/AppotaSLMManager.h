//
//  AppotaSLMManager.h
//  AppotaSDK
//
//  Created by tuent on 2/28/14.
//
//

#import <Foundation/Foundation.h>

@interface AppotaSLMManager : NSObject
+ (AppotaSLMManager *)sharedInstance;

- (NSArray*) getListSLM;

+ (BOOL) validateSLMWithData:(NSData*) data;
@end
