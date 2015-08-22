//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsXplatSqlSqlTransaction_TypeEnum, ComGoogleCommonUtilConcurrentSettableFuture, NSString;

@interface ComGoogleAppsXplatSqlSqlTransaction : NSObject
{
    id <JavaUtilConcurrentExecutor> executor_;
    id lock_;
    NSString *txId_;
    ComGoogleCommonUtilConcurrentSettableFuture *lastOperationFuture_;
    id <ComGoogleCommonCacheLoadingCache> sqliteSqlCache_;
    ComGoogleAppsXplatSqlSqlTransaction_TypeEnum *type_;
    BOOL isFutureChainClosed_;
    BOOL hasTransactionBegun_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> nextOperationFuture_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)unwrapExceptionIfCombinedExceptionOfEqualItemsWithJavaLangThrowable:(id)arg1;
- (void)dealloc;
- (void)logWithTxIdWithNSString:(id)arg1 withJavaLangThrowable:(id)arg2;
- (void)logWithTxIdWithNSString:(id)arg1;
- (void)logStatementWithNSString:(id)arg1 withComGoogleAppsXplatSqlSqlStatement:(id)arg2;
- (id)closeWhenWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1;
- (void)markFutureChainClosedAfterWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1;
- (void)markFutureChainClosed;
- (id)rollbackAndClose;
- (id)commitAndClose;
- (id)executeInsertWithComGoogleAppsXplatSqlSqlInsert:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeInsertWithComGoogleAppsXplatSqlSqlInsert:(id)arg1 withComGoogleAppsXplatSqlSqlParamValueArray:(id)arg2;
- (id)executeWriteInternalWithComGoogleAppsXplatSqlSqlWrite:(id)arg1 withJavaUtilList:(id)arg2;
- (void)checkWriteWithComGoogleAppsXplatSqlSqlWrite:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeWriteReturnSqlWriteResultWithComGoogleAppsXplatSqlSqlWrite:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeWriteWithComGoogleAppsXplatSqlSqlWrite:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeWriteWithComGoogleAppsXplatSqlSqlWrite:(id)arg1 withComGoogleAppsXplatSqlSqlParamValueArray:(id)arg2;
- (id)executeQueryInternalWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withJavaUtilList:(id)arg2;
- (void)verifyParamNamesAndTypesAndRangeWithComGoogleAppsXplatSqlContainsParams:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getRawParameterValuesWithJavaUtilList:(id)arg1;
- (id)executeQueryForNonNullLongsWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeQueryForNonNullLongsWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withComGoogleAppsXplatSqlSqlParamValueArray:(id)arg2;
- (id)executeQueryForRowIdWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeQueryForRowIdWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withComGoogleAppsXplatSqlSqlParamValueArray:(id)arg2;
- (id)executeQueryWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeQueryWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withComGoogleAppsXplatSqlSqlParamValueArray:(id)arg2;
- (void)ensureFutureChainIsNotClosed;
- (id)beginTransaction;
- (id)enqueueTransactionOperationWithComGoogleCommonUtilConcurrentAsyncFunction:(id)arg1;
- (BOOL)hasTransactionBegun;
- (BOOL)isReadOnly;
- (id)getType;
- (id)initWithJavaUtilConcurrentExecutor:(id)arg1 withComGoogleAppsXplatSqlSqlTransaction_TypeEnum:(id)arg2 withNSString:(id)arg3 withComGoogleCommonCacheLoadingCache:(id)arg4;

@end
