//
//  AppotaUserLoginResult.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 11/22/14.
//
//


@interface AppotaUserLoginResult : NSObject
- (instancetype) initWithObjectDict:(NSDictionary*) objectDict;
@property (nonatomic, readonly) NSString *userName;
@property (nonatomic, readonly) NSString *userID;
@property (nonatomic,readonly) NSString *accessToken;
@property (nonatomic, readonly) NSString *email;
@end
