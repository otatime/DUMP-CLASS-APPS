//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsChangesSyncCoordinator, ComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController, ComGoogleAppsBigtopDataItemsStorageItemsSyncStatusManager, ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator, ComGoogleAppsBigtopDataItemsSyncItemsSyncer, ComGoogleAppsXplatSqlSqlDatabase, ComGoogleAppsXplatUtilConcurrentExecutionGuard;

@interface ComGoogleAppsBigtopDataItemsSyncItemsBackfiller : NSObject
{
    ComGoogleAppsXplatSqlSqlDatabase *database_;
    ComGoogleAppsBigtopDataItemsChangesSyncCoordinator *syncCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator *syncReasonsCoordinator_;
    ComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController *itemChangesToSyncUpTableController_;
    id <ComGoogleAppsBigtopDataItemsSyncServiceMissingItemsSyncProtos_ItemsSyncService_ServerInterface> itemsSyncServer_;
    ComGoogleAppsBigtopDataItemsStorageItemsSyncStatusManager *itemsSyncStatusManager_;
    ComGoogleAppsBigtopDataItemsSyncItemsSyncer *itemsSyncer_;
    id <JavaUtilConcurrentExecutor> executor_;
    ComGoogleAppsXplatUtilConcurrentExecutionGuard *backfillGuard_;
    id <ComGoogleAppsXplatPubsubPublisher> itemsStorageUpdatesPublisher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleAppsXplatSqlSqlDatabase_withComGoogleAppsBigtopDataItemsChangesSyncCoordinator_withComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator_withComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController_withComGoogleAppsBigtopDataItemsSyncServiceMissingItemsSyncProtos_ItemsSyncService_ServerInterface_withComGoogleAppsBigtopDataItemsStorageItemsSyncStatusManager_withComGoogleAppsBigtopDataItemsSyncItemsSyncer_withJavaUtilConcurrentExecutor_withComGoogleAppsXplatPubsubPubSubHub_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (id)handleSyncViewResponseWithComGoogleAppsBigtopDataItemsItemsSyncProtos_ItemsSyncViewResponse:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg2;
- (id)guardedBackfillViewWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1;
- (id)hasPendingInboxBulkOp;
- (id)checkForInboxBulkOpThenBackfillViewWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1;
- (id)backfillViewWithComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig:(id)arg1;
- (id)initWithComGoogleAppsXplatSqlSqlDatabase:(id)arg1 withComGoogleAppsBigtopDataItemsChangesSyncCoordinator:(id)arg2 withComGoogleAppsBigtopDataItemsStorageSyncReasonsCoordinator:(id)arg3 withComGoogleAppsBigtopDataItemsStorageItemChangesToSyncUpTableController:(id)arg4 withComGoogleAppsBigtopDataItemsSyncServiceMissingItemsSyncProtos_ItemsSyncService_ServerInterface:(id)arg5 withComGoogleAppsBigtopDataItemsStorageItemsSyncStatusManager:(id)arg6 withComGoogleAppsBigtopDataItemsSyncItemsSyncer:(id)arg7 withJavaUtilConcurrentExecutor:(id)arg8 withComGoogleAppsXplatPubsubPubSubHub:(id)arg9;

@end
