//
//  AppotaDefaultController.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 7/26/14.
//
//

#import <Foundation/Foundation.h>

@interface AppotaDefaultController : NSObject
+ (void) saveLoginMethod:(NSString*) method;
+ (NSString*) getLoginMethod;
@end
