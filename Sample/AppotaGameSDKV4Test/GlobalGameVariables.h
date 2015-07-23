//
//  GlobalGameVariables.h
//  AppotaGameSDKV4Test
//
//  Created by Tue Nguyen on 7/23/15.
//  Copyright (c) 2015 Hieu. All rights reserved.
//

#import <Foundation/Foundation.h>
// You Game State can be changed during game play
@interface GlobalGameVariables : NSObject
@property (nonatomic, strong) NSString *gameState;
@property (nonatomic, strong) NSString *gameUserID;
@property (nonatomic, strong) NSString *gameServerID;
+ (instancetype) sharedInstance;
@end
