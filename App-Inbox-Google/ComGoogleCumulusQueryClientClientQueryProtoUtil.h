//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusQueryClientClientQueryProtoUtil : NSObject
{
}

+ (void)initialize;
+ (id)createEmptyBlendedResultWithComGoogleCumulusQueryQueryProto_QueryKey:(id)arg1;
+ (id)fixupObjectInfosWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCommonBaseFunction:(id)arg2;
+ (void)addQueryIntentToLoadIntentWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusSyncClientLoadIntent:(id)arg2;
+ (id)getRefsToLoadWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (id)removeObjectsFromResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withJavaUtilMap:(id)arg2;
+ (id)removeFromResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryClientClientQueryProtoUtil_ObjectRemovalFunction:(id)arg2 withJavaUtilList:(id)arg3;
+ (id)removeObjectsFromListWithJavaUtilList:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusQueryClientClientQueryProtoUtil_ObjectRemovalFunction:(id)arg3 withJavaUtilList:(id)arg4;
+ (BOOL)isNonDeltaSyncSourceWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1;
+ (id)getAllObjectsInResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (BOOL)isBackgroundSyncSourceWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1;
+ (BOOL)isMoreQueryWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (BOOL)needsBackfillWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withJavaUtilSet:(id)arg2;
+ (BOOL)shallowEqualsObjectInfoWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
+ (id)applyConstraintsToListWithJavaUtilList:(id)arg1 withComGoogleCumulusQueryQueryProto_Constraints:(id)arg2 withInt:(int)arg3;
+ (id)applyConstraintsWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
+ (id)mergeFullListsWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withBoolean:(BOOL)arg3;
+ (id)mergeFullResultsWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (id)calculateFullResultListWithComGoogleCumulusQueryQueryProto_Constraints:(id)arg1 withJavaUtilCollection:(id)arg2 withJavaUtilList:(id)arg3;
+ (id)calculateFullResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (id)trimListByBoundsWithJavaUtilList:(id)arg1 withComGoogleCumulusQueryQueryProto_Constraints:(id)arg2;
+ (id)applyNewResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (id)mergeInternalResultsIncludingSourceWithComGoogleCumulusQueryInternalResult:(id)arg1 withComGoogleCumulusQueryInternalResult:(id)arg2;
+ (id)mergeResultsWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2;
+ (BOOL)equivalentConstraintsWithComGoogleCumulusQueryQueryProto_Constraints:(id)arg1 withComGoogleCumulusQueryQueryProto_Constraints:(id)arg2;
+ (BOOL)matchFullQueryVersionWithInt:(int)arg1 withComGoogleCumulusQueryQueryProto_Constraints:(id)arg2 withInt:(int)arg3 withComGoogleCumulusQueryQueryProto_Constraints:(id)arg4;
+ (BOOL)resultVersionMatchesQueryWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2;
- (id)init;

@end
