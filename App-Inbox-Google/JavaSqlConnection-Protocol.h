//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangAutoCloseable.h"
#import "JavaObject.h"
#import "JavaSqlWrapper.h"
#import "NSObject.h"

@class IOSIntArray, IOSObjectArray, JavaSqlSQLWarning, JavaUtilProperties, NSString;

@protocol JavaSqlConnection <JavaSqlWrapper, JavaLangAutoCloseable, NSObject, JavaObject>
- (id <JavaSqlStruct>)createStructWithNSString:(NSString *)arg1 withNSObjectArray:(IOSObjectArray *)arg2;
- (id <JavaSqlArray>)createArrayOfWithNSString:(NSString *)arg1 withNSObjectArray:(IOSObjectArray *)arg2;
- (JavaUtilProperties *)getClientInfo;
- (NSString *)getClientInfoWithNSString:(NSString *)arg1;
- (void)setClientInfoWithJavaUtilProperties:(JavaUtilProperties *)arg1;
- (void)setClientInfoWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (BOOL)isValidWithInt:(int)arg1;
- (id <JavaSqlSQLXML>)createSQLXML;
- (id <JavaSqlNClob>)createNClob;
- (id <JavaSqlBlob>)createBlob;
- (id <JavaSqlClob>)createClob;
- (void)setTypeMapWithJavaUtilMap:(id <JavaUtilMap>)arg1;
- (void)setTransactionIsolationWithInt:(int)arg1;
- (id <JavaSqlSavepoint>)setSavepointWithNSString:(NSString *)arg1;
- (id <JavaSqlSavepoint>)setSavepoint;
- (void)setReadOnlyWithBoolean:(BOOL)arg1;
- (void)setHoldabilityWithInt:(int)arg1;
- (void)setCatalogWithNSString:(NSString *)arg1;
- (void)setAutoCommitWithBoolean:(BOOL)arg1;
- (void)rollbackWithJavaSqlSavepoint:(id <JavaSqlSavepoint>)arg1;
- (void)rollback;
- (void)releaseSavepointWithJavaSqlSavepoint:(id <JavaSqlSavepoint>)arg1;
- (id <JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)arg1 withNSStringArray:(IOSObjectArray *)arg2;
- (id <JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id <JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id <JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)arg1 withIntArray:(IOSIntArray *)arg2;
- (id <JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (id <JavaSqlPreparedStatement>)prepareStatementWithNSString:(NSString *)arg1;
- (id <JavaSqlCallableStatement>)prepareCallWithNSString:(NSString *)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id <JavaSqlCallableStatement>)prepareCallWithNSString:(NSString *)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id <JavaSqlCallableStatement>)prepareCallWithNSString:(NSString *)arg1;
- (NSString *)nativeSQLWithNSString:(NSString *)arg1;
- (BOOL)isReadOnly;
- (BOOL)isClosed;
- (JavaSqlSQLWarning *)getWarnings;
- (id <JavaUtilMap>)getTypeMap;
- (int)getTransactionIsolation;
- (id <JavaSqlDatabaseMetaData>)getMetaData;
- (int)getHoldability;
- (NSString *)getCatalog;
- (BOOL)getAutoCommit;
- (id <JavaSqlStatement>)createStatementWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id <JavaSqlStatement>)createStatementWithInt:(int)arg1 withInt:(int)arg2;
- (id <JavaSqlStatement>)createStatement;
- (void)commit;
- (void)close;
- (void)clearWarnings;
@end
