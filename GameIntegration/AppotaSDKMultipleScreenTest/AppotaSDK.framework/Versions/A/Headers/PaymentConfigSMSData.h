//
//  PaymentConfigSMSData.h
//  AppotaSDK
//
//  Created by tuent on 2/26/14.
//
//

#import "ObjectData.h"

typedef enum {
    APPOTA_SMS_DIRECT = 0,
    APPOTA_SMS_MOMT = 1,
    APPOTA_SMS_OTP = 2
} AppotaConfigSMSType;
@interface PaymentConfigSMSData : ObjectData
- (AppotaConfigSMSType) getConfigSMSType;
@end
