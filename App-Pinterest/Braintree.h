//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BTClient, BTPayPalButton, NSMutableSet;

@interface Braintree : NSObject
{
    BTClient *_client;
    BTPayPalButton *_payPalButton;
    NSMutableSet *_retainedPaymentProviders;
}

+ (void)initAppSwitchingOptions;
+ (BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
+ (void)setReturnURLScheme:(id)arg1;
+ (id)libraryVersion;
+ (id)braintreeWithClientToken:(id)arg1;
@property(retain, nonatomic) NSMutableSet *retainedPaymentProviders; // @synthesize retainedPaymentProviders=_retainedPaymentProviders;
@property(retain, nonatomic) BTPayPalButton *payPalButton; // @synthesize payPalButton=_payPalButton;
@property(retain, nonatomic) BTClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)payPalButtonWithDelegate:(id)arg1;
- (id)paymentProviderWithDelegate:(id)arg1;
- (void)tokenizeApplePayPayment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tokenizeCardWithNumber:(id)arg1 expirationMonth:(id)arg2 expirationYear:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tokenizeCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)paymentButtonWithDelegate:(id)arg1 paymentProviderTypes:(id)arg2;
- (id)paymentButtonWithDelegate:(id)arg1;
- (id)dropInViewControllerWithDelegate:(id)arg1;
- (id)initWithClientToken:(id)arg1;
- (id)init;

@end
