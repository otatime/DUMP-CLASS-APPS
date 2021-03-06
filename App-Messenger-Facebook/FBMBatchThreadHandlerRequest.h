//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMBatchThreadRequestFilter, MNModelRequestConfiguration;

@interface FBMBatchThreadHandlerRequest : FBValueObject <NSCopying>
{
    FBMBatchThreadRequestFilter *_filter;
    MNModelRequestConfiguration *_configuration;
    long long _requestId;
}

@property(readonly, copy, nonatomic) MNModelRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) FBMBatchThreadRequestFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)initWithRequestId:(long long)arg1 filter:(id)arg2 configuration:(id)arg3;

@end

