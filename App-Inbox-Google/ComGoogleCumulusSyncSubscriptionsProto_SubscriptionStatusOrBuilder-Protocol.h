//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusQueryQueryProto_QueryKey, ComGoogleCumulusSyncSubscriptionsProto_SubscriptionStateEnum, ComGoogleCumulusSyncSyncProto_BackwardRange, NSString;

@protocol ComGoogleCumulusSyncSubscriptionsProto_SubscriptionStatusOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCumulusSyncSubscriptionsProto_SubscriptionStateEnum *)getSubscriptionState;
- (BOOL)hasSubscriptionState;
- (double)getLastDoneSyncingTime;
- (BOOL)hasLastDoneSyncingTime;
- (int)getCount;
- (BOOL)hasCount;
- (BOOL)getIsDoneSyncing;
- (BOOL)hasIsDoneSyncing;
- (NSString *)getForwardSyncToken;
- (BOOL)hasForwardSyncToken;
- (ComGoogleCumulusSyncSyncProto_BackwardRange *)getSyncedRangeWithInt:(int)arg1;
- (id <JavaUtilList>)getSyncedRangeList;
- (int)getSyncedRangeCount;
- (ComGoogleCumulusQueryQueryProto_QueryKey *)getKey;
- (BOOL)hasKey;
@end

