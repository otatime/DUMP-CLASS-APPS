//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsXplatSqlUtilVirtualConnection_RunWithConnection.h"

@class ComGoogleAppsXplatSqlSqlQuery, ComGoogleAppsXplatSqlSqliteSqliteTransaction, NSString;

@interface ComGoogleAppsXplatSqlSqliteSqliteTransaction_$2 : NSObject <ComGoogleAppsXplatSqlUtilVirtualConnection_RunWithConnection>
{
    ComGoogleAppsXplatSqlSqliteSqliteTransaction *this$0_;
    ComGoogleAppsXplatSqlSqlQuery *val$query_;
    id <JavaUtilList> val$parameterValues_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsXplatSqlSqliteSqliteTransaction:(id)arg1 withComGoogleAppsXplatSqlSqlQuery:(id)arg2 withJavaUtilList:(id)arg3;
- (id)runWithComGoogleAppsXplatSqlUtilVirtualConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
