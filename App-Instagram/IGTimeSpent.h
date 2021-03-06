//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGEventAggregator.h"

#import "FBAnalyticsTimeSpentDelegate.h"

@class FBAnalyticsTimeSpent, NSString;

@interface IGTimeSpent : IGEventAggregator <FBAnalyticsTimeSpentDelegate>
{
    FBAnalyticsTimeSpent *_timeSpent;
}

- (void).cxx_destruct;
- (void)analyticsTimeSpent:(id)arg1 didProduceBitArray:(id)arg2;
- (void)reset;
- (void)save;
- (void)update:(double)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

