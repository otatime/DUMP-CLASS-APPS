//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangReflectParameterizedType.h"

@class IOSClass, JavaLangClassLoader, LibcoreReflectListOfTypes, NSString;

@interface LibcoreReflectParameterizedTypeImpl : NSObject <JavaLangReflectParameterizedType>
{
    LibcoreReflectListOfTypes *args_;
    LibcoreReflectParameterizedTypeImpl *ownerType0_;
    id <JavaLangReflectType> ownerTypeRes_;
    IOSClass *rawType_;
    NSString *rawTypeName_;
    JavaLangClassLoader *loader_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)getResolvedType;
- (id)getRawType;
- (id)getOwnerType;
- (id)getActualTypeArguments;
- (id)initWithLibcoreReflectParameterizedTypeImpl:(id)arg1 withNSString:(id)arg2 withLibcoreReflectListOfTypes:(id)arg3 withJavaLangClassLoader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

