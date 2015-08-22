//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMBatchThreadResponse, NSSet;

@interface FBMBatchThreadHandlerResponse : FBValueObject <NSCopying>
{
    FBMBatchThreadResponse *_consumerResponse;
    NSSet *_filtersStillNeedingFetch;
}

@property(readonly, copy, nonatomic) NSSet *filtersStillNeedingFetch; // @synthesize filtersStillNeedingFetch=_filtersStillNeedingFetch;
@property(readonly, copy, nonatomic) FBMBatchThreadResponse *consumerResponse; // @synthesize consumerResponse=_consumerResponse;
- (void).cxx_destruct;
- (id)initWithConsumerResponse:(id)arg1 filtersStillNeedingFetch:(id)arg2;

@end

