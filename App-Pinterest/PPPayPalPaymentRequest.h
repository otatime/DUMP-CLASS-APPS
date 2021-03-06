//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPServiceRequest.h"

@class NSString, PPAuthNAuthCredentials, PPZebraRequestData;

@interface PPPayPalPaymentRequest : PPServiceRequest
{
    PPZebraRequestData *_requestData;
    PPAuthNAuthCredentials *_credentials;
    NSString *_metadataID;
}

+ (id)baseURLforEnvironment:(id)arg1;
+ (Class)responseClass;
@property(retain, nonatomic) NSString *metadataID; // @synthesize metadataID=_metadataID;
@property(retain, nonatomic) PPAuthNAuthCredentials *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) PPZebraRequestData *requestData; // @synthesize requestData=_requestData;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqualToRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)body;
- (id)headers;
- (id)initWithEnvironment:(id)arg1 credentials:(id)arg2 payment:(id)arg3 metadataID:(id)arg4;
- (id)path;

@end

