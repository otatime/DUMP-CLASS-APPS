//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsXplatSqlUtilVirtualConnectionPool, NSString;

@interface ComGoogleAppsXplatSqlUtilVirtualConnection : NSObject
{
    ComGoogleAppsXplatSqlUtilVirtualConnectionPool *pool_;
    id <ComGoogleAppsXplatSqlUtilPlatformContext> platformContext_;
    id <JavaUtilConcurrentExecutor> serializingExecutor_;
    NSString *id__;
    int sessionId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)executeWithComGoogleAppsXplatSqlUtilVirtualConnection_RunWithConnection:(id)arg1;
- (void)release__;
- (id)getPlatformContext;
- (id)getSerializingExecutor;
- (id)getId;
- (id)initWithNSString:(id)arg1 withComGoogleAppsXplatSqlUtilVirtualConnectionPool:(id)arg2 withComGoogleAppsXplatSqlUtilPlatformContext:(id)arg3 withJavaUtilConcurrentExecutor:(id)arg4;

@end
