//
//  AppotaPaymentResult.h
//  AppotaSDK
//
//  Created by Tue Nguyen on 11/19/14.
//  Class including all information about a successful payment
//  type (CARD, BANK, SMS, INAPP)

#import <Foundation/Foundation.h>

@interface AppotaPaymentResult : NSObject

- (instancetype) initWithObjectDict:(NSDictionary*) objectDict;

/**
 *  Money Amount of current payment result in float
 *  For example card payment 10000 vnd -> amount 10000.0 , Apple IAP $0.99 -> amount 0.99
 */
@property (nonatomic, readonly) CGFloat amountPaymentResult;

/**
 *  Appota unique transaction ID to identify and verify transaction
 */
@property (nonatomic, readonly) NSString *transactionID;

/**
 *  Type of payment
 *  CARD, BANK, SMS, INAPP (for Apple IAP)
 */
@property (nonatomic, readonly) NSString *type;

/**
 *  Return currency of the payment
 *  For example VND or USD
 */
@property (nonatomic, readonly) NSString *currency;

/**
 *  Time of the payment in format hh:mm:ss mm/dd/yyy for example : "11:27:32 02/12/2014"
 */
@property (nonatomic, readonly) NSString *time;

/**
 *  Only valid for Apple Payment (type INAPP)
 *  Apple product id of the payment IAP
 */
@property (nonatomic, readonly) NSString * appleProductID;
@end
