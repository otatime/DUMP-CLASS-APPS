//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopDataEntitiesEntityStorageStrategy.h"

@class ComGoogleAppsBigtopDataEntitiesSimpleEntityStorageStrategy, NSString;

@interface ComGoogleAppsBigtopDataContactsContactsStorageStrategy : NSObject <ComGoogleAppsBigtopDataEntitiesEntityStorageStrategy>
{
    ComGoogleAppsBigtopDataEntitiesSimpleEntityStorageStrategy *simpleStorageStrategy_;
    id <JavaUtilConcurrentExecutor> executor_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)insertAllEmailsAndSearchTokensWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonUtilConcurrentListenableFuture:(id)arg2 withComGoogleAppsBigtopServicesContactsBigTopContact:(id)arg3;
- (id)swapTransformWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withComGoogleCommonUtilConcurrentListenableFuture:(id)arg2;
- (id)insertSearchTokenWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonUtilConcurrentListenableFuture:(id)arg2 withNSString:(id)arg3;
- (id)insertEmailAddressWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonUtilConcurrentListenableFuture:(id)arg2 withComGoogleAppsBigtopServicesContactsBigTopEmail:(id)arg3;
- (id)deleteAllDirtyEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)hasDirtyEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)countEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withBoolean:(BOOL)arg2;
- (id)markAllEntitiesAsDirtyWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)listEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withInt:(int)arg2 withLong:(long long)arg3;
- (id)getEntitiesByIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)getItemRowIdOrNullWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)deleteEntityWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)updateEntityWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(id)arg2 withJavaLangLong:(id)arg3;
- (id)insertEntityWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(id)arg2;
- (id)initWithComGoogleAppsBigtopDataEntitiesSimpleEntityStorageStrategy:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
