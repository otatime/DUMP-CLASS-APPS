//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface FBVSPDeltaPaymentForcedFetch : NSObject <TBase, NSCoding>
{
    long long __fetchTransferFbId;
    BOOL __fetchPaymentMethods;
    BOOL __fetchTransferFbId_isset;
    BOOL __fetchPaymentMethods_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetFetchPaymentMethods;
- (BOOL)fetchPaymentMethodsIsSet;
@property(nonatomic, getter=fetchPaymentMethods, setter=setFetchPaymentMethods:) BOOL fetchPaymentMethods;
- (void)unsetFetchTransferFbId;
- (BOOL)fetchTransferFbIdIsSet;
@property(nonatomic, getter=fetchTransferFbId, setter=setFetchTransferFbId:) long long fetchTransferFbId;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFetchTransferFbId:(long long)arg1 fetchPaymentMethods:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

