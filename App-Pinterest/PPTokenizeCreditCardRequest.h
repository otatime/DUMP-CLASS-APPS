//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPServiceRequest.h"

@class PPAuthNAuthCredentials, PPZebraCreditCardInfo;

@interface PPTokenizeCreditCardRequest : PPServiceRequest
{
    PPZebraCreditCardInfo *_creditCard;
    PPAuthNAuthCredentials *_credentials;
}

+ (id)baseURLforEnvironment:(id)arg1;
+ (Class)responseClass;
- (void).cxx_destruct;
- (id)body;
- (id)headers;
- (id)initWithEnvironment:(id)arg1 credentials:(id)arg2 creditCard:(id)arg3;
- (id)path;

@end

