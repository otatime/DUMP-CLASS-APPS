//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusSyncSyncProto_StoredSubscription;

@protocol ComGoogleCumulusSyncClientSyncMarker <NSObject, JavaObject>
- (void)markPreviousVersionsWithComGoogleCumulusSyncSyncProto_StoredSubscription:(ComGoogleCumulusSyncSyncProto_StoredSubscription *)arg1;
- (void)markAllNotMatchingFilterWithComGoogleCumulusSyncSyncProto_StoredSubscription:(ComGoogleCumulusSyncSyncProto_StoredSubscription *)arg1;
- (void)markOutsideBoundsWithComGoogleCumulusSyncSyncProto_StoredSubscription:(ComGoogleCumulusSyncSyncProto_StoredSubscription *)arg1;
- (void)markToLimitWithComGoogleCumulusSyncSyncProto_StoredSubscription:(ComGoogleCumulusSyncSyncProto_StoredSubscription *)arg1 withInt:(int)arg2;
@end
