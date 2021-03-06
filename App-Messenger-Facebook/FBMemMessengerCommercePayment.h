//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedMessengerPaymentFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"
#import "MNPaymentsPayableDataModel.h"

@class FBPaymentsCurrencyQuantity, NSString;

@interface FBMemMessengerCommercePayment : FBMemModelObject <MNPaymentsPayableDataModel, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedMessengerPaymentFieldsProtocol>
{
}

@property(readonly, nonatomic) FBPaymentsCurrencyQuantity *payableAmount;
@property(readonly, copy, nonatomic) NSString *purposeIdentifier;
@property(readonly, copy, nonatomic) NSString *styleIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

