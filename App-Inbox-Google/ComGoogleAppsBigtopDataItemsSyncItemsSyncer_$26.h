//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsItemsSyncProtos_ItemsSyncResponse, ComGoogleAppsBigtopDataItemsSyncItemsSyncer, ComGoogleAppsXplatSqlSqlTransaction, ComGoogleCommonCollectRange, NSString;

@interface ComGoogleAppsBigtopDataItemsSyncItemsSyncer_$26 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsSyncItemsSyncer *this$0_;
    long long val$oldHighestSyncedVersion_;
    long long val$newHighestSyncedVersion_;
    ComGoogleAppsBigtopDataItemsItemsSyncProtos_ItemsSyncResponse *val$response_;
    ComGoogleCommonCollectRange *val$oldMailWatermarks_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsSyncItemsSyncer:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withComGoogleAppsBigtopDataItemsItemsSyncProtos_ItemsSyncResponse:(id)arg4 withComGoogleCommonCollectRange:(id)arg5 withComGoogleAppsXplatSqlSqlTransaction:(id)arg6;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
