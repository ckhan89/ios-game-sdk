//
//  PaymentConfigCardData.h
//  AppotaSDK
//
//  Created by tuent on 2/26/14.
//
//

#import "AppotaObjectData.h"

@interface PaymentConfigCardData : AppotaObjectData
- (NSString*) getCardCodeString;
- (NSString*) getSerialString;
- (NSString*) getVendorString;
@end
