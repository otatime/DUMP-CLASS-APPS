//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBVPVExperimentContext : FBExperimentContext
{
    BOOL _fireVPVfromVPVd;
    BOOL _useSampledHeightImpressionTracking;
    BOOL _storyHeightTrackingEnabled;
    BOOL _maxHeightTrackingEnabled;
    BOOL _bugFixSuspendImpressionOffScreen;
    unsigned int _maxRecentlySeenVPVs;
    NSString *_ignoreVPVDFields;
    double _sampledImpressionThrottleDelay;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) BOOL bugFixSuspendImpressionOffScreen; // @synthesize bugFixSuspendImpressionOffScreen=_bugFixSuspendImpressionOffScreen;
@property(readonly, copy, nonatomic) NSString *ignoreVPVDFields; // @synthesize ignoreVPVDFields=_ignoreVPVDFields;
@property(readonly, nonatomic) unsigned int maxRecentlySeenVPVs; // @synthesize maxRecentlySeenVPVs=_maxRecentlySeenVPVs;
@property(readonly, nonatomic) BOOL maxHeightTrackingEnabled; // @synthesize maxHeightTrackingEnabled=_maxHeightTrackingEnabled;
@property(readonly, nonatomic) BOOL storyHeightTrackingEnabled; // @synthesize storyHeightTrackingEnabled=_storyHeightTrackingEnabled;
@property(readonly, nonatomic) double sampledImpressionThrottleDelay; // @synthesize sampledImpressionThrottleDelay=_sampledImpressionThrottleDelay;
@property(readonly, nonatomic) BOOL useSampledHeightImpressionTracking; // @synthesize useSampledHeightImpressionTracking=_useSampledHeightImpressionTracking;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL fireVPVfromVPVd;

@end

