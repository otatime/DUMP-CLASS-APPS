//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@interface BTOfflineModeURLProtocol : NSURLProtocol
{
}

+ (void)setBackend:(id)arg1;
+ (id)backend;
+ (id)cardNamesAndRegexes;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)clientApiBaseURL;
- (id)cardTypeStringForNumber:(id)arg1;
- (id)generateNonce;
- (id)responseDictionaryForPayPalPaymentMethod;
- (id)responseDictionaryForCard:(id)arg1;
- (id)responseDictionaryForApplePayPayment;
- (id)responseDictionaryForPaymentMethod:(id)arg1;
- (id)queryDictionaryFromRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;

@end
