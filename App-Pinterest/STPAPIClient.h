//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString, NSURL;

@interface STPAPIClient : NSObject
{
    NSString *_publishableKey;
    NSOperationQueue *_operationQueue;
    NSURL *_apiURL;
}

+ (id)JSONStringForObject:(id)arg1;
+ (id)stripeUserAgentDetails;
+ (id)errorFromStripeResponse:(id)arg1;
+ (void)validateKey:(id)arg1;
+ (id)sharedClient;
+ (id)formEncodedDataForPayment:(id)arg1;
@property(retain, nonatomic) NSURL *apiURL; // @synthesize apiURL=_apiURL;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) NSString *publishableKey; // @synthesize publishableKey=_publishableKey;
- (void).cxx_destruct;
- (void)createTokenWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPublishableKey:(id)arg1;
- (id)init;
- (void)createTokenWithBankAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createTokenWithCard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createTokenWithPayment:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

