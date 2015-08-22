//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDecimalNumber;

@interface PayPalPaymentDetails : NSObject <NSCopying>
{
    NSDecimalNumber *_subtotal;
    NSDecimalNumber *_shipping;
    NSDecimalNumber *_tax;
}

+ (id)paymentDetailsWithSubtotal:(id)arg1 withShipping:(id)arg2 withTax:(id)arg3;
@property(copy, nonatomic) NSDecimalNumber *tax; // @synthesize tax=_tax;
@property(copy, nonatomic) NSDecimalNumber *shipping; // @synthesize shipping=_shipping;
@property(copy, nonatomic) NSDecimalNumber *subtotal; // @synthesize subtotal=_subtotal;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqualToPaymentDetails:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

