//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSecurityBasicPermission.h"

#import "JavaIoSerializable.h"
#import "JavaSecurityGuard.h"

@class NSString;

@interface JavaSqlSQLPermission : JavaSecurityBasicPermission <JavaSecurityGuard, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (BOOL)impliesWithJavaSecurityPermission:(id)arg1;
- (id)getActions;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

