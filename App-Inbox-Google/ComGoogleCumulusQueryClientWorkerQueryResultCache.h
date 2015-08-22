//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusQueryClientQueryResultCache.h"
#import "ComGoogleCumulusQueryClientReferenceUpdater.h"
#import "ComGoogleCumulusSyncClientCachedObjectOracle.h"

@class ComGoogleCumulusCommonUtilEventBus, ComGoogleCumulusSyncRefState_SliceIdList, NSString;

@interface ComGoogleCumulusQueryClientWorkerQueryResultCache : NSObject <ComGoogleCumulusQueryClientQueryResultCache, ComGoogleCumulusSyncClientCachedObjectOracle, ComGoogleCumulusQueryClientReferenceUpdater>
{
    id <JavaUtilMap> resultMap_;
    id <JavaUtilMap> referenceStateMap_;
    ComGoogleCumulusSyncRefState_SliceIdList *sliceIdList_;
    ComGoogleCumulusCommonUtilEventBus *addedCacheReferenceBus_;
    ComGoogleCumulusCommonUtilEventBus *removedCacheReferenceBus_;
    id <ComGoogleCumulusSyncClientObjectSyncer> objectSyncer_;
    id <ComGoogleCommonBaseReceiver> objectForceSyncedReceiver_;
}

+ (void)initialize;
- (void)dealloc;
- (id)createCachedResultWithBoolean:(BOOL)arg1;
- (void)removeFromFullBlendedWithNSString:(id)arg1 withComGoogleCumulusQueryClientClientQueryProtoUtil_ObjectRemovalFunction:(id)arg2;
- (id)getReferencedSlicesWithComGoogleCumulusApiTypeObjectReader:(id)arg1;
- (BOOL)hasSubscriptionWithComGoogleCumulusApiTypeObjectReader:(id)arg1;
- (BOOL)checkQRCReferences;
- (void)referenceRemovedWithComGoogleCumulusSyncRefState:(id)arg1;
- (void)referenceUpdatedWithComGoogleCumulusSyncRefState:(id)arg1;
- (id)getSliceCountsWithComGoogleCumulusCommonBaseProto_ObjectId:(id)arg1;
- (void)handleChangeReferenceWithComGoogleCumulusSyncRefState:(id)arg1 withNSString:(id)arg2;
- (void)removeReferenceWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1;
- (id)getCachedResults;
- (void)removeReferencesWithJavaLangIterable:(id)arg1;
- (void)removeObjectInfoReferencesWithJavaLangIterable:(id)arg1;
- (void)updateReferenceWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg2;
- (void)addReferenceWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1;
- (void)addReferencesWithJavaLangIterable:(id)arg1;
- (void)addObjectInfoReferencesWithJavaLangIterable:(id)arg1;
- (id)createRefMapWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
- (void)commitResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2;
- (id)removeObjectsWithComGoogleCumulusQueryInternalResult:(id)arg1 withBoolean:(BOOL)arg2;
- (void)removeResultReferencesWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
- (void)removeResultReferencesWithComGoogleCumulusQueryFullResult:(id)arg1;
- (void)addResultReferencesWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
- (void)addResultReferencesWithComGoogleCumulusQueryFullResult:(id)arg1;
- (BOOL)isNewReferenceWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1;
- (id)getRefStateWithNSString:(id)arg1;
- (id)getCachedResultWithNSString:(id)arg1;
- (id)getVersionWithNSString:(id)arg1;
- (BOOL)isCachedWithNSString:(id)arg1;
- (int)size;
- (BOOL)needsBackfillWithNSString:(id)arg1 withJavaUtilSet:(id)arg2 withBoolean:(BOOL)arg3;
- (id)getFullLocalResultWithNSString:(id)arg1;
- (id)getUnclippedFullResultWithNSString:(id)arg1;
- (id)getFullResultWithNSString:(id)arg1;
- (void)trimToVisibleResults;
- (void)clearResultsWithJavaUtilCollection:(id)arg1;
- (id)applyResultWithComGoogleCumulusQueryInternalResult:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusCommonObjectChecker:(id)arg3;
- (id)initWithComGoogleCumulusApiPluginSlicer:(id)arg1 withComGoogleCumulusSyncClientObjectSyncer:(id)arg2 withComGoogleCumulusCommonUtilEventBus:(id)arg3 withComGoogleCumulusCommonUtilEventBus:(id)arg4 withComGoogleCumulusCommonUtilEventBus:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
