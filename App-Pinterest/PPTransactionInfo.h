//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, PayPalPayment;

@interface PPTransactionInfo : NSObject <NSCopying>
{
    PayPalPayment *_payment;
    int _paymentMethod;
    NSString *_shippingFundingOptionPaymentId;
    NSString *_shippingFundingOptionCheckoutSessionId;
    NSArray *_shippingAddresses;
    NSArray *_fundingOptions;
}

@property(copy, nonatomic) NSArray *fundingOptions; // @synthesize fundingOptions=_fundingOptions;
@property(copy, nonatomic) NSArray *shippingAddresses; // @synthesize shippingAddresses=_shippingAddresses;
@property(copy, nonatomic) NSString *shippingFundingOptionCheckoutSessionId; // @synthesize shippingFundingOptionCheckoutSessionId=_shippingFundingOptionCheckoutSessionId;
@property(copy, nonatomic) NSString *shippingFundingOptionPaymentId; // @synthesize shippingFundingOptionPaymentId=_shippingFundingOptionPaymentId;
@property(nonatomic) int paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(copy, nonatomic) PayPalPayment *payment; // @synthesize payment=_payment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

