//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgApacheHarmonySecurityFortressSecurityAccess.h"

@class NSString;

@interface JavaSecuritySecurity_SecurityDoor : NSObject <OrgApacheHarmonySecurityFortressSecurityAccess>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)init;
- (id)getServiceWithJavaSecurityProvider:(id)arg1 withNSString:(id)arg2;
- (id)getAliasesWithJavaSecurityProvider_Service:(id)arg1;
- (void)renumProviders;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
