//
//  ApplicationData.h
//  Appvn
//
//  Created by tuent on 2/6/14.
//  Copyright (c) 2014 Appota. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjectData : NSObject
@property (nonatomic, copy) NSDictionary* objectDict;
- (NSString*)description;
- (id) initWithObjectDict:(NSDictionary*) applicationDict;
@end
