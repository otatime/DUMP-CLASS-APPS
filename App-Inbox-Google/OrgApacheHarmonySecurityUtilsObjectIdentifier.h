//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSIntArray, NSString;

@interface OrgApacheHarmonySecurityUtilsObjectIdentifier : NSObject
{
    IOSIntArray *oid_;
    int hash__;
    NSString *soid_;
    NSString *sOID_;
    NSString *name_;
    id group_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)hashIntArrayWithIntArray:(id)arg1;
+ (void)validateOidWithIntArray:(id)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)description;
- (id)toOIDString;
- (BOOL)isEqual:(id)arg1;
- (id)getGroup;
- (id)getName;
- (id)getOid;
- (id)initWithIntArray:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (id)initWithIntArray:(id)arg1;

@end
