//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaSecurityProtectionDomain : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (BOOL)impliesWithJavaSecurityPermission:(id)arg1;
- (id)getPrincipals;
- (id)getPermissions;
- (id)getCodeSource;
- (id)getClassLoader;
- (id)initWithJavaSecurityCodeSource:(id)arg1 withJavaSecurityPermissionCollection:(id)arg2 withJavaLangClassLoader:(id)arg3 withJavaSecurityPrincipalArray:(id)arg4;
- (id)initWithJavaSecurityCodeSource:(id)arg1 withJavaSecurityPermissionCollection:(id)arg2;

@end
