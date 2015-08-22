//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetMessageProducer.h"
#import "ComGoogleCumulusCommonNetMessageReceiver.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusCommonNetMessageProducer_PriorityEnum, ComGoogleCumulusCommonVarExporter, ComGoogleCumulusSyncClientSyncFrontendHandler_RequestResponseValidator, NSString;

@interface ComGoogleCumulusSyncClientSyncFrontendHandler : NSObject <ComGoogleCumulusCommonNetMessageProducer, ComGoogleCumulusCommonNetMessageReceiver>
{
    id <ComGoogleCumulusSyncClientWorkerSubscriptionRegistry> subscriptionRegistry_;
    id <ComGoogleCumulusSyncClientSyncPolicy> syncPolicy_;
    id <ComGoogleCumulusCommonClientRetryPolicy> retryPolicy_;
    ComGoogleCumulusCommonVarExporter *varExporter_;
    id <ComGoogleCommonBaseReceiver> syncCompleteEventBus_;
    id <ComGoogleCommonBaseReceiver> workerEventBus_;
    id <ComGoogleCommonBaseReceiver> newSyncBus_;
    id <ComGoogleCommonBaseReceiver> storeWipeBus_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    ComGoogleCumulusSyncClientSyncFrontendHandler_RequestResponseValidator *validator_;
    id <ComGoogleCommonBaseReceiver> retryReceiver_;
    ComGoogleCumulusCommonNetMessageProducer_PriorityEnum *syncPriority_;
    id <ComGoogleCumulusSyncClientSyncFrontendHandler_MatchedObjectsHandler> objectHandler_;
    id <JavaUtilMap> backwardRanges_;
    id <JavaUtilCollection> forwardRanges_;
    id <JavaUtilCollection> serverActions_;
}

+ (void)initialize;
- (void)dealloc;
- (id)buildSendFullQueryMapWithJavaUtilSet:(id)arg1;
- (void)markSubscriptionFailedWithNSString:(id)arg1 withComGoogleCumulusSyncSyncProto_Error:(id)arg2;
- (void)dispose;
- (id)produceMessageWithComGoogleCumulusCommonNetMessageProducer_PriorityEnum:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (void)clearRequestState;
- (void)resetRequest;
- (BOOL)hasRequest;
- (void)setPendingRequestWithJavaUtilCollection:(id)arg1 withJavaUtilCollection:(id)arg2 withJavaUtilCollection:(id)arg3;
- (void)setObjectHandlerWithComGoogleCumulusSyncClientSyncFrontendHandler_MatchedObjectsHandler:(id)arg1;
- (void)setSyncPriorityWithComGoogleCumulusCommonNetMessageProducer_PriorityEnum:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientWorkerSubscriptionRegistry:(id)arg1 withComGoogleCumulusSyncClientSyncPolicy:(id)arg2 withComGoogleCumulusCommonClientRetryPolicy:(id)arg3 withComGoogleCumulusCommonVarExporter:(id)arg4 withComGoogleCommonBaseReceiver:(id)arg5 withComGoogleCommonBaseReceiver:(id)arg6 withComGoogleCommonBaseReceiver:(id)arg7 withComGoogleCommonBaseReceiver:(id)arg8 withComGoogleCumulusCommonUtilEventBus:(id)arg9 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg10 withComGoogleCumulusSyncClientSyncFrontendHandler_RequestResponseValidator:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
