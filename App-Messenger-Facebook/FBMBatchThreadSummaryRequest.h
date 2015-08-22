//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMBatchThreadSummaryRequestBehavior, FBMBatchThreadSummaryRequestFilter, MNModelRequestConfiguration;

@interface FBMBatchThreadSummaryRequest : FBValueObject <NSCopying>
{
    FBMBatchThreadSummaryRequestFilter *_filter;
    MNModelRequestConfiguration *_configuration;
    FBMBatchThreadSummaryRequestBehavior *_behavior;
}

@property(readonly, copy, nonatomic) FBMBatchThreadSummaryRequestBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, copy, nonatomic) MNModelRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) FBMBatchThreadSummaryRequestFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)initWithFilter:(id)arg1 configuration:(id)arg2 behavior:(id)arg3;

@end

