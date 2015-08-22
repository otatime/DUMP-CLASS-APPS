//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMBatchThreadRequestBehavior, FBMBatchThreadRequestFilter, MNModelRequestConfiguration;

@interface FBMBatchThreadRequest : FBValueObject <NSCopying>
{
    FBMBatchThreadRequestFilter *_filter;
    MNModelRequestConfiguration *_configuration;
    FBMBatchThreadRequestBehavior *_behavior;
}

@property(readonly, copy, nonatomic) FBMBatchThreadRequestBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, copy, nonatomic) MNModelRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) FBMBatchThreadRequestFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)initWithFilter:(id)arg1 configuration:(id)arg2 behavior:(id)arg3;

@end

