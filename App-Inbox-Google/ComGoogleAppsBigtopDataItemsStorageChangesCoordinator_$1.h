//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_Change, ComGoogleAppsBigtopDataItemsStorageChangesCoordinator, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageChangesCoordinator_$1 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsStorageChangesCoordinator *this$0_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    ComGoogleAppsBigtopDataItemsItemsProto_Change *val$change_;
    long long val$localApplyTimeMs_;
    long long val$changeGroupId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsStorageChangesCoordinator:(id)arg1 withComGoogleAppsXplatSqlSqlTransaction:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_Change:(id)arg3 withLong:(long long)arg4 withLong:(long long)arg5;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

