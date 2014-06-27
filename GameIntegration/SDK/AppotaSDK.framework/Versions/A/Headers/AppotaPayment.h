//
//  AppotaPayment.h
//  AppotaSDK
//
//  Created by tuent on 10/31/13.
//
//

#import <Foundation/Foundation.h>

typedef enum {
    PAYMENT_SMS = 0,
    PAYMENT_PREMIUM_SMS = 1,
    PAYMENT_CARD = 2,
    PAYMENT_INTERNET_BANKING = 3,
    PAYMENT_PAYPAL = 4,
    PAYMENT_MOL = 5,
    PAYMENT_BAOKIM = 6,
    PAYMENT_UNIPIN = 7,
    PAYMENT_APPLE = 8,
    PAYMENT_EWALLET = 9,
} PAYMENT_METHOD;

@interface AppotaPayment : NSObject {
    PAYMENT_METHOD paymentMethod;
    float amount;
    float coinAmount;
    NSString *currency;
    NSString *coinImage;
    NSString *coinName;    
    NSString *paymentDescription;
    NSString *productId;
}

- (id) initWithPaymentItem:(AppotaPayment*) pItem;

- (id) initWithPaymentMethod:(PAYMENT_METHOD) paymentMethod_
                  withAmount:(float) amount_
              withCoinAmount:(float) coinAmount_
                withCurrency:(NSString*) currency_
                withCoinName:(NSString*) coinName
               withCoinImage:(NSString*) coinImage_
      withPaymentDescription:(NSString*) paymentDescription_;

- (id) initWithPaymentMethod:(PAYMENT_METHOD) paymentMethod_
                  withAmount:(float) amount_
              withCoinAmount:(float) coinAmount_
                withCurrency:(NSString*) currency_
                withCoinName:(NSString*) coinName_
               withCoinImage:(NSString*) coinImage_
      withPaymentDescription:(NSString*) paymentDescription_
               withProductId:(NSString*) productId_
;

- (PAYMENT_METHOD)paymentMethod;

- (void)setPaymentMethod:(PAYMENT_METHOD)newValue;

- (float)amount;

- (void)setAmount:(float)newValue;

- (float)coinAmount;

- (void)setCoinAmount:(float)newValue;

- (NSString *)coinImage;

- (void)setCoinImage:(NSString *)newValue;

- (NSString *)paymentDescription;

- (void)setPaymentDescription:(NSString *)newValue;

- (NSString *)currency;

- (void)setCurrency:(NSString *)newValue;

- (NSString *)coinName;

- (void)setCoinName:(NSString *)newValue;

- (NSString *)productId;

- (void)setProductId:(NSString *)newValue;

- (void) printItem;

+ (NSString*) paymentMethodConfigToString:(PAYMENT_METHOD) paymentMethod;

+ (PAYMENT_METHOD) stringConfigToPaymentMethod:(NSString*) string;

-(NSString*) getPaymentMethodString;

@end
