//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommandCommandProto_SyncStatus, ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusCommonUtilEventBus, ComGoogleCumulusCommonVarExporter, ComGoogleCumulusSyncClientCommandAborter, ComGoogleCumulusSyncClientCommandProtoHandler, ComGoogleCumulusSyncClientLoadIntent;

@interface ComGoogleCumulusSyncClientWorkerCommandProtoManager : NSObject
{
    ComGoogleCumulusSyncClientCommandProtoHandler *commandProtoHandler_;
    id <ComGoogleCumulusSyncClientObjectManager> objectManager_;
    id <ComGoogleCumulusSyncClientMissingObjectIntentManager> missingObjectIntentManager_;
    id <ComGoogleCumulusSyncClientSyncPolicy> syncPolicy_;
    id <ComGoogleCumulusSyncClientObjectSyncer> backgroundSyncer_;
    ComGoogleCumulusCommonUtilEventBus *workerEventBus_;
    id <JavaUtilList> updateObservers_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <ComGoogleCumulusCommonClientRetryPolicy> commandRetryPolicy_;
    id <ComGoogleCumulusCommonClientRetryPolicy> backgroundRetryPolicy_;
    ComGoogleCumulusCommonVarExporter *varExporter_;
    ComGoogleCumulusCommonUtilEventBus *batchStatusBus_;
    ComGoogleCumulusCommonUtilEventBus *networkLogBus_;
    id <JavaUtilMap> statusResponseProducerMap_;
    ComGoogleCumulusCommandCommandProto_SyncStatus *syncStatus_;
    ComGoogleCumulusSyncClientCommandAborter *commandAborter_;
    ComGoogleCumulusSyncClientLoadIntent *frontendProducerIntent_;
    id <JavaUtilMap> responseProcessorMap_;
    id <ComGoogleCommonBaseReceiver> commandAbortReceiver_;
    id <ComGoogleCommonBaseReceiver> syncStatusUpdate_;
    id <ComGoogleCommonBaseReceiver> networkLogReceiver_;
}

+ (void)initialize;
- (void)dealloc;
- (void)finishCqUpdateProcessingWithJavaUtilMap:(id)arg1 withComGoogleCumulusApiMetricsSpan:(id)arg2;
- (id)getRetryPolicyWithNSString:(id)arg1 withComGoogleCumulusSyncPrioritizedSyncState_SyncReasonEnum:(id)arg2;
- (void)setSyncStatusForAllProducersWithComGoogleCumulusCommandCommandProto_SyncStatus:(id)arg1;
- (id)getStatusBus;
- (id)initWithComGoogleCumulusSyncClientCommandProtoHandler:(id)arg1 withComGoogleCumulusSyncClientObjectManager:(id)arg2 withComGoogleCumulusSyncClientSyncPolicy:(id)arg3 withComGoogleCumulusApiTypeCommandProcessor:(id)arg4 withComGoogleCumulusSyncClientObjectSyncer:(id)arg5 withComGoogleCumulusCommonUtilEventBus:(id)arg6 withComGoogleCumulusCommonUtilEventBus:(id)arg7 withJavaUtilList:(id)arg8 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg9 withComGoogleCumulusCommonUtilEventBus:(id)arg10 withComGoogleCumulusCommonUtilEventBus:(id)arg11 withComGoogleCumulusCommonClientRetryPolicy:(id)arg12 withComGoogleCumulusCommonClientRetryPolicy:(id)arg13 withComGoogleCumulusCommonUtilEventBus:(id)arg14 withComGoogleCumulusCommonVarExporter:(id)arg15 withJCGCuDelayedWorkQueue:(id)arg16 withJCGCuPrioritizedWorkQueue:(id)arg17 withComGoogleCumulusSyncClientObjectStore:(id)arg18;

@end

