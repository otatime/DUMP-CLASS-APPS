//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiQuerySettings;

@interface ComGoogleCumulusApiQuerySettings_Builder : NSObject
{
    ComGoogleCumulusApiQuerySettings *this$0_;
    BOOL built_;
}

- (void)dealloc;
- (id)build;
- (id)setQueryExecutionWithComGoogleCumulusQueryQueryProto_Query_QueryExecutionEnum:(id)arg1;
- (id)setHighRankBoundIsExclusive;
- (id)setLowRankBoundIsExclusive;
- (id)setRankingOrderWithNSString:(id)arg1;
- (id)setDisallowConsistencyFetch;
- (id)setObjectFetch;
- (id)setUpdateOnly;
- (id)setRemoteOnly;
- (id)setLocalOnly;
- (id)setPriorityWithComGoogleCumulusApiQuerySettings_PriorityEnum:(id)arg1;
- (id)setOnlyCacheSlices;
- (id)setIsImmediateQuery;
- (id)setTimeoutMillisWithInt:(int)arg1;
- (id)setShouldBackfill;
- (id)setDeliverIntermediateResults;
- (id)setContinuous;
- (id)initWithComGoogleCumulusApiQuerySettings:(id)arg1;

@end
