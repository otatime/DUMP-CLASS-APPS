//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSqlSQLException.h"

@interface JavaSqlSQLClientInfoException : JavaSqlSQLException
{
    id <JavaUtilMap> failedProperties_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)getFailedProperties;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilMap:(id)arg3 withJavaLangThrowable:(id)arg4;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilMap:(id)arg3;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withJavaUtilMap:(id)arg4 withJavaLangThrowable:(id)arg5;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withJavaUtilMap:(id)arg4;
- (id)initWithNSString:(id)arg1 withJavaUtilMap:(id)arg2 withJavaLangThrowable:(id)arg3;
- (id)initWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)initWithJavaUtilMap:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)initWithJavaUtilMap:(id)arg1;
- (id)init;

@end

