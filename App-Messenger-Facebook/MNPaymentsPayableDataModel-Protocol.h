//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPaymentsCurrencyQuantity, NSString;

@protocol MNPaymentsPayableDataModel <NSObject>
@property(readonly, nonatomic) FBPaymentsCurrencyQuantity *payableAmount;
@property(readonly, copy, nonatomic) NSString *purposeIdentifier;
@property(readonly, copy, nonatomic) NSString *styleIdentifier;
@end
