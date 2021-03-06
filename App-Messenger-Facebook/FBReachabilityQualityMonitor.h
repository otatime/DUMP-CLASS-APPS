//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReachabilityListener.h"
#import "FBReachabilityQualityDelegate.h"

@class FBRadioTechnologyFetcher, NSObject<OS_dispatch_queue>, NSString;

@interface FBReachabilityQualityMonitor : NSObject <FBReachabilityQualityDelegate, FBReachabilityListener>
{
    id <FBReachabilityQualityMonitorDelegate> _delegate;
    id <FBMovingAverage> _downloadBandwidthMovingAverage;
    id <FBMovingAverage> _uploadBandwidthMovingAverage;
    id <FBMovingAverage> _latencyMovingAverage;
    FBRadioTechnologyFetcher *_radioTechnologyFetcher;
    struct shared_ptr<bool> _initOutstanding;
    double _initialDownloadBandwidthEstimate;
    double _initialUploadBandwidthEstimate;
    double _initialLatencyEstimate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    struct mutex _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_latencyEstimateForReachabilityState:(unsigned int)arg1;
- (double)_uploadBandwidthEstimateForReachabilityState:(unsigned int)arg1;
- (double)_downloadBandwidthEstimateForReachabilityState:(unsigned int)arg1;
- (struct FBQualityEstimate)_getLatencyEstimate_unlocked;
- (struct FBQualityEstimate)_getUploadBandwidthEstimate_unlocked;
- (struct FBQualityEstimate)_getDownloadBandwidthEstimate_unlocked;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)latencyEstimate:(double)arg1;
- (void)uploadBandwidthEstimate:(double)arg1;
- (void)downloadBandwidthEstimate:(double)arg1;
@property(readonly, nonatomic) struct FBQualityEstimate latencyEstimate;
@property(readonly, nonatomic) struct FBQualityEstimate uploadBandwidthEstimate;
@property(readonly, nonatomic) struct FBQualityEstimate downloadBandwidthEstimate;
- (id)initWithDelegate:(id)arg1 downloadBandwidthMovingAverageFactory:(CDUnknownBlockType)arg2 uploadBandwidthMovingAverageFactory:(CDUnknownBlockType)arg3 latencyMovingAverageFactory:(CDUnknownBlockType)arg4 radioTechnologyFetcher:(id)arg5 notificationQueue:(id)arg6 concurrentQueue:(id)arg7;
- (id)initWithDelegate:(id)arg1 downloadBandwidthMovingAverageFactory:(CDUnknownBlockType)arg2 uploadBandwidthMovingAverageFactory:(CDUnknownBlockType)arg3 latencyMovingAverageFactory:(CDUnknownBlockType)arg4 notificationQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

