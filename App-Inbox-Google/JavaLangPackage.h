//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangReflectAnnotatedElement.h"

@class JavaNetURL, NSString;

@interface JavaLangPackage : NSObject <JavaLangReflectAnnotatedElement>
{
    NSString *name_;
    NSString *specTitle_;
    NSString *specVersion_;
    NSString *specVendor_;
    NSString *implTitle_;
    NSString *implVersion_;
    NSString *implVendor_;
    JavaNetURL *sealBase_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getPackages;
+ (id)getPackageWithNSString:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (BOOL)isSealedWithJavaNetURL:(id)arg1;
- (BOOL)isSealed;
- (BOOL)isCompatibleWithWithNSString:(id)arg1;
@property(readonly) unsigned int hash;
- (id)getSpecificationVersion;
- (id)getSpecificationVendor;
- (id)getSpecificationTitle;
- (id)getName;
- (id)getImplementationVersion;
- (id)getImplementationVendor;
- (id)getImplementationTitle;
- (BOOL)isAnnotationPresentWithIOSClass:(id)arg1;
- (id)getDeclaredAnnotations;
- (id)getAnnotations;
- (id)getAnnotationWithIOSClass:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withNSString:(id)arg7 withJavaNetURL:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
