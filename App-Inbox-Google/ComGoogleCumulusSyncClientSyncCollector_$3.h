//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback.h"

@class ComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum, ComGoogleCumulusApiPluginSweepFilter_SubscriptionStateEnum, ComGoogleCumulusQueryQueryProto_Subscription, ComGoogleCumulusSyncClientSyncCollector, ComGoogleCumulusSyncSyncProto_StoredSubscription, NSString;

@interface ComGoogleCumulusSyncClientSyncCollector_$3 : NSObject <ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback>
{
    ComGoogleCumulusSyncClientSyncCollector *this$0_;
    int count_;
    int objectDeleteCount_;
    id <JavaUtilMap> val$subscriptionChangeMap_;
    NSString *val$sqid_;
    ComGoogleCumulusQueryQueryProto_Subscription *val$subscription_;
    ComGoogleCumulusApiPluginSweepFilter_SubscriptionStateEnum *val$subscriptionState_;
    ComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum *val$evictionPhase_;
    ComGoogleCumulusSyncSyncProto_StoredSubscription *val$storedSubscription_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientSyncCollector:(id)arg1 withJavaUtilMap:(id)arg2 withNSString:(id)arg3 withComGoogleCumulusQueryQueryProto_Subscription:(id)arg4 withComGoogleCumulusApiPluginSweepFilter_SubscriptionStateEnum:(id)arg5 withComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum:(id)arg6 withComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg7;
- (void)onLoadWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
