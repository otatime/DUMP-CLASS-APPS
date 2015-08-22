//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRMAMeasurementConsumer.h"

#import "NRMAHarvestAware.h"

@class NRMAMetricSet, NSString;

@interface NRMASummaryMeasurementConsumer : NRMAMeasurementConsumer <NRMAHarvestAware>
{
    NRMAMetricSet *_summaryMeasurements;
}

@property(retain) NRMAMetricSet *summaryMeasurements; // @synthesize summaryMeasurements=_summaryMeasurements;
- (void).cxx_destruct;
- (void)aggregateAndNormalizeAndRecordValuesWithTotalTime:(double)arg1 scope:(id)arg2;
- (void)consumeMethodMeasurement:(id)arg1;
- (void)consumeHTTPMeasurement:(id)arg1;
- (void)consumeMeasurement:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
