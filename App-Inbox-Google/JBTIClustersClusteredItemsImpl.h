//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTIItemsItemImpl.h"

#import "JBTClusteredItems.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum, ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher, ComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver, JBTCCachedValue, JBTClusterTypeEnum, JBTIClustersClusterConfigImpl, JBTICommonSapiSpan_Factory, JBTICommonUserInfo, JBTIItemsBulkCommandSpecificationFactory, JBTIItemsItemListRefresher, JBTIItemsItemsImpl, JBTIMetricsCounterManager, NSString;

@interface JBTIClustersClusteredItemsImpl : JBTIItemsItemImpl <JBTClusteredItems>
{
    id <JBTId> id__;
    id <JBTId> clusterConfigId_;
    NSString *labelId_;
    JBTClusterTypeEnum *clusterType_;
    JBTICommonUserInfo *userInfo_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    JBTIItemsItemsImpl *itemsImpl_;
    id <JBTICommonTransactionFactory> transactionFactory_;
    id <DaggerLazy> bulkCommandHelper_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <DaggerLazy> smartMailComponentFilter_;
    id <DaggerLazy> clusterThrottlingHelper_;
    JBTIItemsItemListRefresher *itemListRefresher_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher *settingsFetcher_;
    ComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver *settingsSaver_;
    JBTIMetricsCounterManager *counterManager_;
    JBTIItemsBulkCommandSpecificationFactory *bulkCommandSpecificationFactory_;
    ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum *viewType_;
    id <JavaUtilList> items_;
    BOOL hasMoreItems_;
    JBTCCachedValue *cachedSendersSummary_;
    JBTCCachedValue *cachedSmartMail_;
    JBTCCachedValue *cachedSmartMailAccordion_;
    JBTCCachedValue *cachedUnseenCount_;
    JBTCCachedValue *cachedHasUnreadMessages_;
    int cachedSendersSummaryMaxLength_;
    JBTIClustersClusterConfigImpl *clusterConfig_;
    BOOL hasBeenMutated_;
    BOOL isLocal_;
    JBTCCachedValue *cachedLayouts_;
    id <DaggerLazy> topicFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_clusterConfig_;
+ (id)__annotations_setUserHasConfirmedMutationWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_requireConfirmationForMutationsWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_getClusterConfig;
+ (id)__annotations_setClusterWithJBTIClustersClusterConfigImpl__params;
+ (id)__annotations_removeFromClusterWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_moveToClusterWithJBTClusterConfig_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_moveToInboxWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_markAsSpamWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_trashWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_archiveWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_getMaxItemCountForUI;
+ (id)__annotations_getAffectedItemCountWithJBTCommand_TypeEnum_withJBTCommand_Config__params;
+ (id)__annotations_initWithJavaUtilList_withBoolean_withJBTId_withComGoogleCommonBaseOptional_withNSString_withJBTClusterTypeEnum_withJBTICommonUserInfo_withComGoogleCumulusCommonUtilClock_withJBTIItemsItemsImpl_withJBTICommonTransactionFactory_withDaggerLazy_withJBTICommonSapiSpan_Factory_withDaggerLazy_withDaggerLazy_withJBTIItemsItemListRefresher_withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata_withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher_withComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver_withJBTISearchSearchClickLogger_Factory_withDaggerLazy_withJBTIMetricsCounterManager_withComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum_withJBTIItemsBulkCommandSpecificationFactory__params;
+ (void)initialize;
+ (id)copyWithItemsWithJBTIClustersClusteredItemsImpl:(id)arg1 withJavaUtilList:(id)arg2 withBoolean:(BOOL)arg3;
- (void)dealloc;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (void)setUserHasConfirmedMutationWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)requireConfirmationForMutationsWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)getLogFeedbackString;
- (int)getUnseenHash;
- (id)getClusterType;
- (id)getClusterConfig;
- (void)setClusterWithJBTIClustersClusterConfigImpl:(id)arg1;
- (void)logDoesNotHaveMoreItems;
- (void)refreshInboxOnUndoIfThrottledWithJBTICommonTransaction:(id)arg1;
- (void)addBulkCommandToTransactionWithComGoogleAppsBigtopServicesGmailModifyLabelsCommand:(id)arg1 withJBTICommonTransaction:(id)arg2;
- (void)addRemoveFromClusterToTransactionWithJBTICommonTransaction:(id)arg1;
- (id)removeFromClusterWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canRemoveFromCurrentCluster;
- (void)addMoveToClusterToTransactionWithJBTClusterConfig:(id)arg1 withJBTICommonTransaction:(id)arg2;
- (id)moveToClusterWithJBTClusterConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (BOOL)canMoveToClusterWithJBTClusterConfig:(id)arg1;
- (void)addMoveToInboxTransactionWithJBTICommonTransaction:(id)arg1;
- (id)moveToInboxWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canMoveToInbox;
- (BOOL)isInInbox;
- (void)addMarkAsSpamToTransactionWithJBTICommonTransaction:(id)arg1;
- (id)markAsSpamWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canMarkAsSpam;
- (void)addTrashToTransactionWithJBTICommonTransaction:(id)arg1;
- (id)trashWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canTrash;
- (void)addArchiveToTransactionWithJBTICommonTransaction:(id)arg1;
- (id)archiveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canArchive;
- (BOOL)isArchived;
- (BOOL)canMutate;
- (long long)getNextBumpTimeSec;
- (BOOL)hasNextBumpTimeSec;
- (int)getMaxItemCountForUI;
- (id)getAffectedItemCountWithJBTCommand_TypeEnum:(id)arg1 withJBTCommand_Config:(id)arg2;
- (id)getApproximateItemCount;
- (BOOL)canBeSweptInSection;
- (int)getItemCount;
- (int)countUnseenConversations;
- (int)getUnseenCount;
- (id)getApproximateUnseenCount;
- (BOOL)shouldSuppressSmartMail;
- (id)getGenericSmartMail;
- (id)getSmartMailList;
- (id)getDebugSendersSummaryWithInt:(int)arg1;
- (BOOL)hasUnreadMessages;
- (id)getSendersSummaryWithInt:(int)arg1;
- (id)getViewTypeForExpandedClusterWithComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum:(id)arg1;
- (id)createClusterItemListWithInt:(int)arg1 withComGoogleCommonBaseOptional:(id)arg2 withNSString:(id)arg3;
- (id)getClusterItemListForTopicsWithInt:(int)arg1;
- (id)getClusterItemListWithInt:(int)arg1;
- (long long)getReceivedTimeMs;
- (id)getChildItems;
- (id)getItems;
- (void)setIsLocalWithBoolean:(BOOL)arg1;
- (BOOL)isLocal;
- (id)getClusterQueryString;
- (id)getClusteredItemsQueryString;
- (id)getItemType;
- (id)getClusterId;
- (id)getId;
- (id)initWithJavaUtilList:(id)arg1 withBoolean:(BOOL)arg2 withJBTId:(id)arg3 withComGoogleCommonBaseOptional:(id)arg4 withNSString:(id)arg5 withJBTClusterTypeEnum:(id)arg6 withJBTICommonUserInfo:(id)arg7 withComGoogleCumulusCommonUtilClock:(id)arg8 withJBTIItemsItemsImpl:(id)arg9 withJBTICommonTransactionFactory:(id)arg10 withDaggerLazy:(id)arg11 withJBTICommonSapiSpan_Factory:(id)arg12 withDaggerLazy:(id)arg13 withDaggerLazy:(id)arg14 withJBTIItemsItemListRefresher:(id)arg15 withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata:(id)arg16 withComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher:(id)arg17 withComGoogleAppsBigtopSyncClientImplSettingsSettingsSaver:(id)arg18 withJBTISearchSearchClickLogger_Factory:(id)arg19 withDaggerLazy:(id)arg20 withJBTIMetricsCounterManager:(id)arg21 withComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum:(id)arg22 withJBTIItemsBulkCommandSpecificationFactory:(id)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
