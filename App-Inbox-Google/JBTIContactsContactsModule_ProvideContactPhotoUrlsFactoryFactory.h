//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTIContactsContactsModule, NSString;

@interface JBTIContactsContactsModule_ProvideContactPhotoUrlsFactoryFactory : NSObject <DaggerInternalFactory>
{
    JBTIContactsContactsModule *module_;
    id <JavaxInjectProvider> monogramsProvider_;
    id <JavaxInjectProvider> multiLoginUrlRewriterProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTIContactsContactsModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3;
- (void)dealloc;
- (id)get;
- (id)initWithJBTIContactsContactsModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
