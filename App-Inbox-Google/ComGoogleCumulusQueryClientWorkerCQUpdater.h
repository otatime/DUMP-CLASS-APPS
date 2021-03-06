//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonUpdateObserver.h"

@class ComGoogleCumulusQueryClientCQUpdateQueue, ComGoogleCumulusQueryClientWorkerCQBatchMonitor, ComGoogleCumulusQueryClientWorkerCQUpdater_QueryUpdateMap, ComGoogleCumulusQueryClientWorkerQueryManager, ComGoogleCumulusQueryClientWorkerQueryResultCache, NSString;

@interface ComGoogleCumulusQueryClientWorkerCQUpdater : NSObject <ComGoogleCumulusCommonUpdateObserver>
{
    ComGoogleCumulusQueryClientWorkerQueryManager *queryManager_;
    id <ComGoogleCumulusQueryClientWorkerQueryRegistry> queryRegistry_;
    id <ComGoogleCumulusApiPluginSegmentedQueryMatcherFactory> queryMatcherFactory_;
    ComGoogleCumulusQueryClientWorkerQueryResultCache *resultCache_;
    id <JCGCuDelayedWorkQueue> workQueue_;
    id <ComGoogleCumulusApiPluginRanker> ranker_;
    id <ComGoogleCumulusApiPluginSegmentRanker> segmentRanker_;
    id <ComGoogleCumulusApiPluginSnippetGenerator> snippetGenerator_;
    id <ComGoogleCumulusApiPluginObjectInfoDecorator> objectInfoDecorator_;
    id <ComGoogleCumulusApiPluginSegmentSnippetGenerator> segmentSnippetGenerator_;
    id <ComGoogleCumulusQuerySegmentSpecifierInternal> segmentSpecifier_;
    ComGoogleCumulusQueryClientWorkerCQBatchMonitor *batchMonitor_;
    id <ComGoogleCumulusApiTypeObjectLoader> objectLoader_;
    ComGoogleCumulusQueryClientWorkerCQUpdater_QueryUpdateMap *pendingMatchedMap_;
    ComGoogleCumulusQueryClientWorkerCQUpdater_QueryUpdateMap *pendingUnmatchedMap_;
    ComGoogleCumulusQueryClientWorkerCQUpdater_QueryUpdateMap *pendingUnknownMatchMap_;
    ComGoogleCumulusQueryClientCQUpdateQueue *updateQueue_;
    id <JavaUtilMap> additionalObjectsCache_;
    id <ComGoogleCommonBaseReceiver> zombieReceiver_;
}

+ (void)initialize;
- (void)dealloc;
- (id)createObjectInfoWithComGoogleCumulusCommonUpdateObserver_Update:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo_ChangeTypeEnum:(id)arg2 withComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg3 withNSString:(id)arg4 withComGoogleCumulusQueryQueryProto_Query:(id)arg5 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg6;
- (void)loadObjectsFromCacheOrLoaderWithJavaUtilMap:(id)arg1 withJavaUtilCollection:(id)arg2 withJavaUtilCollection:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4 withComGoogleCumulusCommonMetricKeyProto_MetricEnum:(id)arg5 withInt:(int)arg6 withJCGCuCallback:(id)arg7;
- (void)dispatchResultAfterLoadWithComGoogleCumulusQueryClientCQObjectUpdateMap:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg3 withBoolean:(BOOL)arg4 withJavaUtilMap:(id)arg5 withNSString:(id)arg6 withComGoogleCumulusApiMetricsSpan:(id)arg7 withJavaLangRunnable:(id)arg8;
- (void)computeAndDispatchResultWithComGoogleCumulusQueryClientCQObjectUpdateMap:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg3 withBoolean:(BOOL)arg4 withNSString:(id)arg5 withComGoogleCumulusApiMetricsSpan:(id)arg6 withJavaUtilMap:(id)arg7 withJavaLangRunnable:(id)arg8;
- (void)onLocalRemoveWithNSString:(id)arg1 withComGoogleCumulusApiMetricsSpan:(id)arg2 withBoolean:(BOOL)arg3;
- (id)retrieveQueryFromSqidWithNSString:(id)arg1;
- (void)updateQueriesForChangeWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg2 withJavaUtilCollection:(id)arg3 withJavaUtilCollection:(id)arg4 withComGoogleCumulusApiMetricsSpan:(id)arg5 withBoolean:(BOOL)arg6;
- (void)processResultWithComGoogleCumulusApiPluginSegmentedQueryMatcher_Result:(id)arg1 withBoolean:(BOOL)arg2 withComGoogleCumulusQueryQueryProto_Query:(id)arg3 withComGoogleCumulusQueryClientWorkerCQUpdater_PreparedUpdate:(id)arg4;
- (void)processMatchingWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withJavaUtilMap:(id)arg2 withBoolean:(BOOL)arg3 withComGoogleCumulusQueryClientWorkerCQUpdater_PreparedUpdate:(id)arg4;
- (void)matchQueriesWithPreparedUpdateWithBoolean:(BOOL)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3 withComGoogleCumulusQueryClientWorkerCQUpdater_PreparedUpdate:(id)arg4;
- (void)reissueQueriesWithJavaUtilCollection:(id)arg1;
- (void)completeBatchWithNSString:(id)arg1;
- (void)completeQueryWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4;
- (void)runMatchWithBoolean:(BOOL)arg1 withJavaUtilList:(id)arg2 withComGoogleCumulusCommonUpdateObserver_Update:(id)arg3;
- (void)matchResultsForRemoteUpdateWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1 withJavaUtilCollection:(id)arg2 withComGoogleCumulusApiMetricsSpan:(id)arg3;
- (id)createMapWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
- (void)onRemoteUpdateWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1 withJavaUtilCollection:(id)arg2 withComGoogleCumulusApiMetricsSpan:(id)arg3;
- (BOOL)onMatchUpdateWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg2 withBoolean:(BOOL)arg3 withJavaUtilCollection:(id)arg4 withNSString:(id)arg5 withComGoogleCumulusApiMetricsSpan:(id)arg6 withBoolean:(BOOL)arg7;
- (void)onLocalUpdateWithNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(BOOL)arg3 withJavaUtilCollection:(id)arg4 withNSString:(id)arg5 withComGoogleCumulusApiMetricsSpan:(id)arg6 withBoolean:(BOOL)arg7;
- (id)initWithComGoogleCumulusQueryClientWorkerQueryManager:(id)arg1 withComGoogleCumulusQueryClientWorkerQueryRegistry:(id)arg2 withComGoogleCumulusApiPluginSegmentedQueryMatcherFactory:(id)arg3 withComGoogleCumulusQueryClientQueryResultCache:(id)arg4 withComGoogleCumulusApiPluginRanker:(id)arg5 withComGoogleCumulusApiPluginSegmentRanker:(id)arg6 withComGoogleCumulusApiPluginSnippetGenerator:(id)arg7 withComGoogleCumulusApiPluginObjectInfoDecorator:(id)arg8 withComGoogleCumulusApiPluginSegmentSnippetGenerator:(id)arg9 withComGoogleCumulusQuerySegmentSpecifierInternal:(id)arg10 withComGoogleCumulusQueryClientWorkerCQBatchMonitor:(id)arg11 withComGoogleCumulusCommonUtilEventBus:(id)arg12 withComGoogleCumulusQueryClientCQUpdateQueue:(id)arg13 withComGoogleCumulusApiTypeObjectLoader:(id)arg14 withComGoogleCumulusCommonVarExporter:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

