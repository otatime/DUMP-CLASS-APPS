//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientSyncMarker.h"

@class NSString;

@interface ComGoogleCumulusSyncClientSyncMarkerImpl : NSObject <ComGoogleCumulusSyncClientSyncMarker>
{
    id <ComGoogleCumulusSyncClientSyncIndex> syncIndex_;
    id <ComGoogleCumulusSyncClientSyncMarkerImpl_GroupMarkerFactory> groupMarkerFactory_;
}

- (void)dealloc;
- (void)evictWithBoolean:(BOOL)arg1 withComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg2 withNSString:(id)arg3 withComGoogleCumulusSyncClientSyncIndex_Iterator:(id)arg4 withInt:(int)arg5 withComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum:(id)arg6;
- (void)markPreviousVersionsWithComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg1;
- (void)markAllNotMatchingFilterWithComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg1;
- (void)markOutsideBoundsWithComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg1;
- (void)markToLimitWithComGoogleCumulusSyncSyncProto_StoredSubscription:(id)arg1 withInt:(int)arg2;
- (id)initWithComGoogleCumulusSyncClientSyncIndex:(id)arg1 withComGoogleCumulusSyncClientSyncMarkerImpl_GroupMarkerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

