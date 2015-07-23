//
//  GlobalGameVariables.m
//  AppotaGameSDKV4Test
//
//  Created by Tue Nguyen on 7/23/15.
//  Copyright (c) 2015 Hieu. All rights reserved.
//

#import "GlobalGameVariables.h"

@implementation GlobalGameVariables
+ (instancetype) sharedInstance {
    static GlobalGameVariables *_sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[GlobalGameVariables alloc] init];
    });
    
    return _sharedInstance;
}

@end
