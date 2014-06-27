//
//  PaymentConfigCardData.h
//  AppotaSDK
//
//  Created by tuent on 2/26/14.
//
//

#import "ObjectData.h"

@interface PaymentConfigCardData : ObjectData
- (NSString*) getCardCodeString;
- (NSString*) getSerialString;
- (NSString*) getVendorString;
@end
