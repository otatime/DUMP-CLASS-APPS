//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsChangesApplierItemAppliedChangeFactory, ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter, ComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController, ComGoogleAppsBigtopDataItemsStorageItemVisibilityCoordinator, ComGoogleAppsBigtopDataItemsStorageItemsQueryManager, ComGoogleAppsBigtopDataItemsStorageItemsSyncStateTableController, ComGoogleAppsBigtopDataItemsStorageItemsTableController, ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkTableController, ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator;

@interface ComGoogleAppsBigtopDataItemsStorageChangesCoordinator : NSObject
{
    id <ComGoogleCommonTimeClock> clock_;
    id <JavaUtilConcurrentExecutor> executor_;
    ComGoogleAppsBigtopDataItemsChangesApplierItemAppliedChangeFactory *itemAppliedChangeFactory_;
    ComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController *itemChangesToSyncUpTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemVisibilityCoordinator *itemVisibilityCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageItemsQueryManager *itemsQueryManager_;
    ComGoogleAppsBigtopDataItemsStorageItemsSyncStateTableController *itemsSyncStateTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemsTableController *itemsTableController_;
    ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkTableController *localBulkOpWorkTableController_;
    ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter *singleItemChangeConverter_;
    ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator *syncReasonsCoordinator_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_createItemAppliedChangeWithComGoogleAppsBigtopServicesGmailBigTopGmailThread_withComGoogleAppsBigtopDataItemsItemsProto_SingleItemChange_;
+ (id)__annotations_insertSingleItemChangeWithComGoogleAppsXplatSqlSqlTransaction_withComGoogleAppsBigtopDataItemsItemsProto_Change_withBoolean_withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeStateEnum_withLong_withJavaLangInteger_withComGoogleAppsBigtopServicesGmailBigTopGmailThread__params;
+ (id)__annotations_initWithComGoogleCommonTimeClock_withJavaUtilConcurrentExecutor_withComGoogleAppsBigtopDataItemsChangesApplierItemAppliedChangeFactory_withComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController_withComGoogleAppsBigtopDataItemsStorageItemVisibilityCoordinator_withComGoogleAppsBigtopDataItemsStorageItemsQueryManager_withComGoogleAppsBigtopDataItemsStorageItemsSyncStateTableController_withComGoogleAppsBigtopDataItemsStorageItemsTableController_withComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkTableController_withComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter_withComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (id)insertBulkUndoChangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2 withNSString:(id)arg3 withComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds:(id)arg4 withJavaLangLong:(id)arg5;
- (id)insertLocalWorkForBulkItemRollingBackWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds:(id)arg3;
- (id)handleBulkItemChangeRollbackWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsStorageItemChangeToSyncUp:(id)arg2;
- (id)insertItemChangesForSingleItemRollingBackWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsStorageItemChangeToSyncUp:(id)arg2;
- (id)handleSingleItemChangeRollbackWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsStorageItemChangeToSyncUp:(id)arg2;
- (id)dedupeAndRemoveNullsWithJavaUtilList:(id)arg1;
- (id)insertItemChangesForRollingBackWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)insertItemChangesForRollingBackByGroupIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2;
- (id)markLocalOnlySingleItemChangesForBulkChangeAsOldWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2;
- (id)markChangesAsOldWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2;
- (id)markChangesAsFailedWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)markChangesAsSucceededWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableMap:(id)arg2;
- (id)hasPendingChangesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)createItemAppliedChangeWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_SingleItemChange:(id)arg2;
- (id)toItemsChangeToServerWithComGoogleAppsBigtopDataItemsItemsProto_BulkUndoChange:(id)arg1 withLong:(long long)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds:(id)arg3 withLong:(long long)arg4;
- (id)toItemsChangeToServerWithComGoogleAppsBigtopDataItemsItemsProto_BulkItemChange:(id)arg1 withLong:(long long)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds:(id)arg3 withLong:(long long)arg4;
- (id)toItemsChangeToServerWithComGoogleAppsBigtopDataItemsItemsProto_ClusterChange:(id)arg1 withLong:(long long)arg2;
- (id)toItemsChangeToServerWithComGoogleAppsBigtopDataItemsItemsProto_SingleItemChange:(id)arg1 withLong:(long long)arg2;
- (id)getBatchOfChangesToSyncUpWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getChangesToSyncUpWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)insertSingleItemChangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_Change:(id)arg2 withBoolean:(BOOL)arg3 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeStateEnum:(id)arg4 withLong:(long long)arg5 withJavaLangInteger:(id)arg6 withComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg7;
- (id)insertLocalOnlySingleItemChangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_Change:(id)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeStateEnum:(id)arg3 withLong:(long long)arg4 withInt:(int)arg5 withComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg6;
- (id)insertClusterChangeToSyncToServerWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_Change:(id)arg2 withLong:(long long)arg3;
- (id)insertSingleItemChangeToSyncToServerWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_Change:(id)arg2 withLong:(long long)arg3 withComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg4;
- (id)handleBulkOpAcksAndNacksWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2 withJavaUtilList:(id)arg3 withJavaUtilList:(id)arg4;
- (id)getBulkOpWatermarkWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg2;
- (id)getItemListConfigForBulkItemChangeWithComGoogleAppsBigtopDataItemsItemsProto_BulkItemChange:(id)arg1;
- (id)insertBulkItemChangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_Change:(id)arg2 withLong:(long long)arg3;
- (id)getPendingAndRecentItemChangesByItemRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2;
- (id)initWithComGoogleCommonTimeClock:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2 withComGoogleAppsBigtopDataItemsChangesApplierItemAppliedChangeFactory:(id)arg3 withComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController:(id)arg4 withComGoogleAppsBigtopDataItemsStorageItemVisibilityCoordinator:(id)arg5 withComGoogleAppsBigtopDataItemsStorageItemsQueryManager:(id)arg6 withComGoogleAppsBigtopDataItemsStorageItemsSyncStateTableController:(id)arg7 withComGoogleAppsBigtopDataItemsStorageItemsTableController:(id)arg8 withComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkTableController:(id)arg9 withComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter:(id)arg10 withComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator:(id)arg11;

@end
