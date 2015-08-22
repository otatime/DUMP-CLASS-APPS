//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class Credential, NSString;

@interface PaymentReceiverProfile : NSObject <TBase, NSCoding>
{
    long long __id;
    long long __merchantId;
    int __paymentReceiverType;
    NSString *__externalPaymentReceiverId;
    NSString *__displayName;
    NSString *__host;
    long long __createdAt;
    long long __updatedAt;
    Credential *__credential;
    BOOL __id_isset;
    BOOL __merchantId_isset;
    BOOL __paymentReceiverType_isset;
    BOOL __externalPaymentReceiverId_isset;
    BOOL __displayName_isset;
    BOOL __host_isset;
    BOOL __createdAt_isset;
    BOOL __updatedAt_isset;
    BOOL __credential_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetCredential;
- (BOOL)credentialIsSet;
@property(retain, nonatomic, getter=credential, setter=setCredential:) Credential *credential;
- (void)unsetUpdatedAt;
- (BOOL)updatedAtIsSet;
@property(nonatomic, getter=updatedAt, setter=setUpdatedAt:) long long updatedAt;
- (void)unsetCreatedAt;
- (BOOL)createdAtIsSet;
@property(nonatomic, getter=createdAt, setter=setCreatedAt:) long long createdAt;
- (void)unsetHost;
- (BOOL)hostIsSet;
@property(retain, nonatomic, getter=host, setter=setHost:) NSString *host;
- (void)unsetDisplayName;
- (BOOL)displayNameIsSet;
@property(retain, nonatomic, getter=displayName, setter=setDisplayName:) NSString *displayName;
- (void)unsetExternalPaymentReceiverId;
- (BOOL)externalPaymentReceiverIdIsSet;
@property(retain, nonatomic, getter=externalPaymentReceiverId, setter=setExternalPaymentReceiverId:) NSString *externalPaymentReceiverId;
- (void)unsetPaymentReceiverType;
- (BOOL)paymentReceiverTypeIsSet;
@property(nonatomic, getter=paymentReceiverType, setter=setPaymentReceiverType:) int paymentReceiverType;
- (void)unsetMerchantId;
- (BOOL)merchantIdIsSet;
@property(nonatomic, getter=merchantId, setter=setMerchantId:) long long merchantId;
- (void)unsetId;
- (BOOL)idIsSet;
@property(nonatomic, getter=id, setter=setId:) long long id;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 merchantId:(long long)arg2 paymentReceiverType:(int)arg3 externalPaymentReceiverId:(id)arg4 displayName:(id)arg5 host:(id)arg6 createdAt:(long long)arg7 updatedAt:(long long)arg8 credential:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

