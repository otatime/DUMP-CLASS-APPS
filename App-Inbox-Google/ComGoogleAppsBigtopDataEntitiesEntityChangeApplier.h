//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesInternalProto_EntityChangeConfig, ComGoogleAppsBigtopDataEntitiesEntityChangesToSyncUpTableController, ComGoogleAppsBigtopDataEntitiesEntityStorage, ComGoogleAppsBigtopDataEntitiesEntitySyncStatusManager, ComGoogleAppsBigtopDataEntitiesEntitySyncer, ComGoogleAppsBigtopDataEntitiesEntityType, ComGoogleAppsXplatSqlSqlDatabase, JavaUtilRandom;

@interface ComGoogleAppsBigtopDataEntitiesEntityChangeApplier : NSObject
{
    ComGoogleAppsXplatSqlSqlDatabase *database_;
    ComGoogleAppsBigtopDataEntitiesEntityStorage *entityStorage_;
    ComGoogleAppsBigtopDataEntitiesEntitiesInternalProto_EntityChangeConfig *changeConfig_;
    ComGoogleAppsBigtopDataEntitiesEntityType *entityType_;
    id <JavaUtilConcurrentExecutor> executor_;
    ComGoogleAppsBigtopDataEntitiesEntityChangesToSyncUpTableController *entityChangesToSyncUpTableController_;
    JavaUtilRandom *random_;
    ComGoogleAppsBigtopDataEntitiesEntitySyncStatusManager *entitySyncStatusManager_;
    ComGoogleAppsBigtopDataEntitiesEntitySyncer *syncer_;
    id <ComGoogleAppsXplatPubsubPublisher> entityDataChangePublisher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)applyLocalChangeWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest:(id)arg2;
- (void)checkChangeTypeAllowedWithComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest:(id)arg1;
- (id)changeWithComGoogleAppsBigtopDataEntitiesEntitiesProto_ChangeEntityRequest:(id)arg1;
- (id)initWithComGoogleAppsXplatSqlSqlDatabase:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntityStorage:(id)arg2 withComGoogleAppsBigtopDataEntitiesEntitiesInternalProto_EntityChangeConfig:(id)arg3 withComGoogleAppsBigtopDataEntitiesEntityType:(id)arg4 withJavaUtilConcurrentExecutor:(id)arg5 withComGoogleAppsBigtopDataEntitiesEntityChangesToSyncUpTableController:(id)arg6 withJavaUtilRandom:(id)arg7 withComGoogleAppsBigtopDataEntitiesEntitySyncStatusManager:(id)arg8 withComGoogleAppsBigtopDataEntitiesEntitySyncer:(id)arg9 withComGoogleAppsXplatPubsubPublisher:(id)arg10;

@end
