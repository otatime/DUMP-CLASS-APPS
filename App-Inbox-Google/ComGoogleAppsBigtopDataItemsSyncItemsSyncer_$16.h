//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlDatabase_RunInTransaction.h"

@class ComGoogleAppsBigtopDataItemsItemsSyncProtos_ItemsSyncResponse, ComGoogleAppsBigtopDataItemsSyncItemsSyncer, ComGoogleAppsBigtopDataItemsSyncItemsSyncer_MainSyncData;

@interface ComGoogleAppsBigtopDataItemsSyncItemsSyncer_$16 : ComGoogleAppsXplatSqlSqlDatabase_RunInTransaction
{
    ComGoogleAppsBigtopDataItemsSyncItemsSyncer *this$0_;
    ComGoogleAppsBigtopDataItemsItemsSyncProtos_ItemsSyncResponse *val$response_;
    ComGoogleAppsBigtopDataItemsSyncItemsSyncer_MainSyncData *val$mainSyncData_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsSyncItemsSyncer:(id)arg1 withComGoogleAppsBigtopDataItemsItemsSyncProtos_ItemsSyncResponse:(id)arg2 withComGoogleAppsBigtopDataItemsSyncItemsSyncer_MainSyncData:(id)arg3 withNSString:(id)arg4;
- (id)runWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;

@end
