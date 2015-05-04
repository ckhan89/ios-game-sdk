//
//  AppotaEngine+DNS.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 9/27/14.
//
//

#import <AppotaSDK/AppotaSDK.h>

@interface AppotaEngine (DNS)
@property (nonatomic, strong) id associatedObject;
+ (NSString*) getAlternativeDNS;
- (void) proceedAlternativeDNSContent;
+ (NSString*) replaceURLWithAlternativeDNS:(NSString*) url;
@end
