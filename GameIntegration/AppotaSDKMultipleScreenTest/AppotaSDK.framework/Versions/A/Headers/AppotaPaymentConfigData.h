//
//  PaymentConfigData.h
//  AppotaSDK
//
//  Created by tuent on 2/26/14.
//
//

#import "ObjectData.h"
#import "AppotaPayment.h"

@interface AppotaPaymentConfigData : ObjectData
@property (readwrite) PAYMENT_METHOD paymentMethod;

- (id) initWithObjectDict:(NSDictionary *)applicationDict
        withPaymentMethod:(PAYMENT_METHOD) paymentMethod;

- (NSString*) getLogoString;

- (NSString*) getNameString;

- (NSString*) getVendorID;

- (NSString*) getVendorName;

- (NSString*) getVendorLogo;

- (NSURL*) getVendorLogoURL;

- (NSString*) getPaymentMethodString;

- (NSArray*) getListAmount;

- (NSString*) getCurrency;

- (NSString*) getPaymentType;
@end
