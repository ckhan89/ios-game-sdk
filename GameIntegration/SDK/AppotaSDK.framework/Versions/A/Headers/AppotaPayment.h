//
//  AppotaPayment.h
//  AppotaSDK
//
//  Created by tuent on 10/31/13.
//
//

#import <Foundation/Foundation.h>

typedef enum {
    PAYMENT_SMS,
    PAYMENT_PREMIUM_SMS,
    PAYMENT_CARD,
    PAYMENT_INTERNET_BANKING,
    PAYMENT_PAYPAL,
    PAYMENT_MOL,
    PAYMENT_BAOKIM,
    PAYMENT_UNIPIN,
    PAYMENT_APPLE
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
@end
