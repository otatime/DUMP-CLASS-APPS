//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPServiceRequest.h"

@class NSString, PPAuthNAuthCredentials, PPFundingOption, PayPalShippingAddress;

@interface PPExecuteShippingFundingOptionPaymentRequest : PPServiceRequest
{
    NSString *_deviceGUID;
    NSString *_dysonData;
    NSString *_paymentId;
    NSString *_checkoutSessionId;
    PayPalShippingAddress *_shippingAddress;
    PPFundingOption *_fundingOption;
    PPAuthNAuthCredentials *_credentials;
    NSString *_bnCode;
}

+ (id)baseURLforEnvironment:(id)arg1;
+ (Class)responseClass;
@property(copy, nonatomic) NSString *bnCode; // @synthesize bnCode=_bnCode;
@property(copy, nonatomic) PPAuthNAuthCredentials *credentials; // @synthesize credentials=_credentials;
@property(copy, nonatomic) PPFundingOption *fundingOption; // @synthesize fundingOption=_fundingOption;
@property(copy, nonatomic) PayPalShippingAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(copy, nonatomic) NSString *checkoutSessionId; // @synthesize checkoutSessionId=_checkoutSessionId;
@property(copy, nonatomic) NSString *paymentId; // @synthesize paymentId=_paymentId;
@property(copy, nonatomic) NSString *dysonData; // @synthesize dysonData=_dysonData;
@property(copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
- (void).cxx_destruct;
- (id)body;
- (id)headers;
- (id)initWithEnvironment:(id)arg1 withCredentials:(id)arg2 withDeviceGUID:(id)arg3 withDysonData:(id)arg4 withPaymentId:(id)arg5 withCheckoutSessionId:(id)arg6 withShippingAddress:(id)arg7 withFundingOption:(id)arg8 withBnCode:(id)arg9;
- (id)path;

@end

