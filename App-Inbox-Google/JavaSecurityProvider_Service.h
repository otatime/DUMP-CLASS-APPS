//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSClass, JavaSecurityProvider, NSString;

@interface JavaSecurityProvider_Service : NSObject
{
    JavaSecurityProvider *provider_;
    NSString *type_;
    NSString *algorithm_;
    NSString *className__;
    id <JavaUtilList> aliases_;
    id <JavaUtilMap> attributes_;
    IOSClass *implementation_;
    NSString *lastClassName_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (BOOL)supportsParameterWithId:(id)arg1;
- (id)newInstanceWithId:(id)arg1;
- (id)getAliases;
- (id)getAttributeWithNSString:(id)arg1;
- (id)getClassName;
- (id)getProvider;
- (id)getAlgorithm;
- (id)getType;
- (void)putAttributeWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)addAliasWithNSString:(id)arg1;
- (id)initWithJavaSecurityProvider:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withJavaUtilList:(id)arg5 withJavaUtilMap:(id)arg6;

@end
