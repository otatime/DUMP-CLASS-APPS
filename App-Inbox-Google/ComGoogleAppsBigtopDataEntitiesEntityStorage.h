//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataEntitiesEntitySyncStateTableController, ComGoogleAppsBigtopDataEntitiesEntityType;

@interface ComGoogleAppsBigtopDataEntitiesEntityStorage : NSObject
{
    id <JavaUtilConcurrentExecutor> executor_;
    id <ComGoogleAppsBigtopDataEntitiesEntityStorageStrategy> storageStrategy_;
    ComGoogleAppsBigtopDataEntitiesEntitySyncStateTableController *entitySyncStateTableController_;
    ComGoogleAppsBigtopDataEntitiesEntityType *entityType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getSyncStateOrNullWithComGoogleAppsXplatSqlSqlTransaction_;
+ (void)initialize;
- (void)dealloc;
- (id)deleteAllDirtyEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)hasDirtyEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)countEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withBoolean:(BOOL)arg2;
- (id)getSyncStateOrNullWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)deleteSyncStateWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)updateSyncStateWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (id)insertSyncStateWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (id)markAllEntitiesAsDirtyWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)listEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3;
- (id)getEntityByIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getEntitiesByIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)deleteEntityWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)updateEntityWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(id)arg2;
- (id)insertOrUpdateEntityWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(id)arg2;
- (id)insertOrUpdateAllWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)insertEntityWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(id)arg2;
- (id)initWithJavaUtilConcurrentExecutor:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntityStorageStrategy:(id)arg2 withComGoogleAppsBigtopDataEntitiesEntitySyncStateTableController:(id)arg3 withComGoogleAppsBigtopDataEntitiesEntityType:(id)arg4;

@end
