//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaxAnnotationResource.h"

@class IOSClass, JavaxAnnotationResource_AuthenticationTypeEnum, NSString;

@interface JavaxAnnotationResource : NSObject <JavaxAnnotationResource>
{
    JavaxAnnotationResource_AuthenticationTypeEnum *authenticationType;
    NSString *description;
    NSString *mappedName;
    NSString *name;
    BOOL shareable;
    IOSClass *type;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
+ (id)typeDefault;
+ (BOOL)shareableDefault;
+ (id)nameDefault;
+ (id)mappedNameDefault;
+ (id)descriptionDefault;
+ (id)authenticationTypeDefault;
@property(readonly) IOSClass *type; // @synthesize type;
@property(readonly) BOOL shareable; // @synthesize shareable;
@property(readonly) NSString *name; // @synthesize name;
@property(readonly) NSString *mappedName; // @synthesize mappedName;
@property(readonly, copy) NSString *description;
@property(readonly) JavaxAnnotationResource_AuthenticationTypeEnum *authenticationType; // @synthesize authenticationType;
- (id)annotationType;
- (id)initWithAuthenticationType:(id)arg1 withDescription:(id)arg2 withMappedName:(id)arg3 withName:(id)arg4 withShareable:(BOOL)arg5 withType:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
