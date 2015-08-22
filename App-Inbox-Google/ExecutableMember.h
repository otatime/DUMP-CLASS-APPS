//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangReflectAccessibleObject.h"

#import "JavaLangReflectGenericDeclaration.h"
#import "JavaLangReflectMember.h"

@class IOSClass, JavaMethodMetadata, NSMethodSignature, NSString;

@interface ExecutableMember : JavaLangReflectAccessibleObject <JavaLangReflectGenericDeclaration, JavaLangReflectMember>
{
    IOSClass *class_;
    SEL selector_;
    NSMethodSignature *methodSignature_;
    JavaMethodMetadata *metadata_;
    const char *binaryParameterTypes_;
}

- (void)dealloc;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)metadata;
@property(readonly) NSMethodSignature *signature;
- (BOOL)isBridge;
- (BOOL)isVarArgs;
- (id)toGenericString;
- (id)getParameterAnnotations;
- (id)getDeclaredAnnotations;
- (id)internalName;
- (id)getExceptionTypes;
- (BOOL)isSynthetic;
- (id)getGenericExceptionTypes;
- (id)getGenericParameterTypes;
- (id)getTypeParameters;
- (id)getDeclaringClass;
- (const char *)getBinaryParameterTypes;
- (id)getParameterTypes;
- (int)getNumParams;
- (int)getModifiers;
- (id)getName;
- (id)initWithMethodSignature:(id)arg1 selector:(SEL)arg2 class:(id)arg3 metadata:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
