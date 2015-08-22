//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface FBBackgroundFetchThrottler : NSObject
{
    BOOL _hasOverallMinimumInterval;
    NSDate *_lastCalledDate;
    double _minimumIntervalUnderCellular;
    double _overallMinimumInterval;
}

@property(readonly, nonatomic) NSDate *lastCalledDate; // @synthesize lastCalledDate=_lastCalledDate;
@property(readonly, nonatomic) BOOL hasOverallMinimumInterval; // @synthesize hasOverallMinimumInterval=_hasOverallMinimumInterval;
@property(readonly, nonatomic) double overallMinimumInterval; // @synthesize overallMinimumInterval=_overallMinimumInterval;
@property(readonly, nonatomic) double minimumIntervalUnderCellular; // @synthesize minimumIntervalUnderCellular=_minimumIntervalUnderCellular;
- (void).cxx_destruct;
- (double)overallMinimumTimeInterval;
- (void)resetLastCalledDate;
- (BOOL)shouldBeCalledAtDate:(id)arg1 reachability:(unsigned int)arg2;
- (BOOL)shouldBeCalledWithTimeSinceLastCalled:(double)arg1 minimumInterval:(double)arg2;
- (_Bool)checkIfValid:(double)arg1;
- (id)initWithMinimumIntervalUnderCellular:(double)arg1 hasOverallMinimumInterval:(BOOL)arg2 overallMinimumInterval:(double)arg3;
- (id)init;

@end

