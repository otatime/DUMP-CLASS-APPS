//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface FBVSPDeltaPaymentMethodRemoved : NSObject <TBase, NSCoding>
{
    long long __paymentMethodId;
    BOOL __paymentMethodId_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPaymentMethodId;
- (BOOL)paymentMethodIdIsSet;
@property(nonatomic, getter=paymentMethodId, setter=setPaymentMethodId:) long long paymentMethodId;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentMethodId:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

