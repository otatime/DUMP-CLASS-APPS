//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeStateEnum, ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor, ComGoogleAppsBigtopServicesGmailModifyLabelsCommand, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor_$5 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor *this$0_;
    NSString *val$itemServerPermId_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    ComGoogleAppsBigtopServicesGmailModifyLabelsCommand *val$modifyLabelsCommand_;
    ComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeStateEnum *val$changeState_;
    long long val$changeGroupId_;
    int val$changeOrder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_applyWithComGoogleAppsBigtopServicesGmailBigTopGmailThread__params;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsStorageLocalBulkOpWorkProcessor:(id)arg1 withNSString:(id)arg2 withComGoogleAppsXplatSqlSqlTransaction:(id)arg3 withComGoogleAppsBigtopServicesGmailModifyLabelsCommand:(id)arg4 withComGoogleAppsBigtopDataItemsItemsInternalProto_ChangeStateEnum:(id)arg5 withLong:(long long)arg6 withInt:(int)arg7;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
