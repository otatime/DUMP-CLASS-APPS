//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusSyncClientForwardSyncRegistry : NSObject
{
    id <ComGoogleCumulusCommonClientRetryPolicy> subscriptionRetryPolicy_;
    id <JavaUtilMap> queryToTrackerMap_;
    id <JavaUtilList> syncTrackers_;
}

+ (void)initialize;
- (void)dealloc;
- (void)addTrackerWithComGoogleCumulusSyncClientForwardSyncTracker:(id)arg1;
- (void)addKeysWithComGoogleCumulusSyncClientForwardSyncTracker:(id)arg1 withJavaUtilCollection:(id)arg2;
- (BOOL)isEmpty;
- (BOOL)shouldSyncTrackerWithComGoogleCumulusSyncClientForwardSyncTracker:(id)arg1;
- (id)getTrackerWithNSString:(id)arg1;
- (id)toProto;
- (void)ensureSyncWithComGoogleCumulusQueryQueryProto_QueryKey:(id)arg1 withComGoogleCumulusCommonIntentProto_Intent:(id)arg2 withBoolean:(BOOL)arg3;
- (void)newSyncWithComGoogleCumulusCommonIntentProto_Intent:(id)arg1;
- (id)getTrackersToSync;
- (BOOL)isDoneSyncing;
- (void)removeQueryByIdWithNSString:(id)arg1;
- (void)removeQueryWithComGoogleCumulusQueryQueryProto_QueryKey:(id)arg1;
- (void)addNewOrUpgradeQueryWithComGoogleCumulusQueryQueryProto_QueryKey:(id)arg1 withNSString:(id)arg2;
- (id)completeRangeRequestWithComGoogleCumulusSyncSyncProto_ForwardRange:(id)arg1 withJavaUtilMap:(id)arg2 withBoolean:(BOOL)arg3;
- (void)initializeSyncRangesWithJavaUtilCollection:(id)arg1 withJavaUtilMap:(id)arg2 withJavaUtilMap:(id)arg3;
- (void)log;
- (id)initWithComGoogleCumulusCommonClientRetryPolicy:(id)arg1;

@end

