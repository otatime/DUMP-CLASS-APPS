//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMemPeerToPeerPaymentMethod, NSArray, NSDate, NSDictionary;

@interface FBPaymentsPeerToPeerPaymentMethodsParsedData : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isCachedResponse;
    NSArray *_sendingPaymentMethods;
    NSArray *_receivingPaymentMethods;
    FBMemPeerToPeerPaymentMethod *_presetPaymentMethod;
    NSArray *_allPaymentMethods;
    NSDictionary *_response;
    NSDate *_downloadDate;
}

@property(readonly, copy, nonatomic) NSDate *downloadDate; // @synthesize downloadDate=_downloadDate;
@property(readonly, nonatomic) BOOL isCachedResponse; // @synthesize isCachedResponse=_isCachedResponse;
@property(readonly, copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSArray *allPaymentMethods; // @synthesize allPaymentMethods=_allPaymentMethods;
@property(readonly, copy, nonatomic) FBMemPeerToPeerPaymentMethod *presetPaymentMethod; // @synthesize presetPaymentMethod=_presetPaymentMethod;
@property(readonly, copy, nonatomic) NSArray *receivingPaymentMethods; // @synthesize receivingPaymentMethods=_receivingPaymentMethods;
@property(readonly, copy, nonatomic) NSArray *sendingPaymentMethods; // @synthesize sendingPaymentMethods=_sendingPaymentMethods;
- (void).cxx_destruct;
- (id)initWithSendingPaymentMethods:(id)arg1 receivingPaymentMethods:(id)arg2 presetPaymentMethod:(id)arg3 allPaymentMethods:(id)arg4 response:(id)arg5 isCachedResponse:(BOOL)arg6 downloadDate:(id)arg7;

@end

