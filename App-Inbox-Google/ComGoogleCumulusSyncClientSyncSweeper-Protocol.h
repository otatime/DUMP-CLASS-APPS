//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum, ComGoogleCumulusSyncSyncProto_StoredSubscription;

@protocol ComGoogleCumulusSyncClientSyncSweeper <NSObject, JavaObject>
- (void)sweepSubscriptionWithComGoogleCumulusSyncSyncProto_StoredSubscription:(ComGoogleCumulusSyncSyncProto_StoredSubscription *)arg1 withJavaUtilMap:(id <JavaUtilMap>)arg2 withComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum:(ComGoogleCumulusApiPluginSweepFilter_EvictionPhaseEnum *)arg3;
@end
