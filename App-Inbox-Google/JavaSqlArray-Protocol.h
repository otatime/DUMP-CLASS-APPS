//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JavaSqlArray <NSObject, JavaObject>
- (void)free;
- (id <JavaSqlResultSet>)getResultSetWithJavaUtilMap:(id <JavaUtilMap>)arg1;
- (id <JavaSqlResultSet>)getResultSetWithLong:(long long)arg1 withInt:(int)arg2 withJavaUtilMap:(id <JavaUtilMap>)arg3;
- (id <JavaSqlResultSet>)getResultSetWithLong:(long long)arg1 withInt:(int)arg2;
- (id <JavaSqlResultSet>)getResultSet;
- (NSString *)getBaseTypeName;
- (int)getBaseType;
- (id)getArrayWithJavaUtilMap:(id <JavaUtilMap>)arg1;
- (id)getArrayWithLong:(long long)arg1 withInt:(int)arg2 withJavaUtilMap:(id <JavaUtilMap>)arg3;
- (id)getArrayWithLong:(long long)arg1 withInt:(int)arg2;
- (id)getArray;
@end
