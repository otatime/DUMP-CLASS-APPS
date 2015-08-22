//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTISmartMailSmartMailModule, NSString;

@interface JBTISmartMailSmartMailModule_ProvideTaskAssistanceSmartMailServicesFactory : NSObject <DaggerInternalFactory>
{
    JBTISmartMailSmartMailModule *module_;
    id <JavaxInjectProvider> multiLoginUrlRewriterProvider_;
    id <JavaxInjectProvider> metricsRecorderProvider_;
    id <JavaxInjectProvider> applicationInfoProvider_;
    id <JavaxInjectProvider> dateTimeFormatterProvider_;
    id <JavaxInjectProvider> timeServiceProvider_;
    id <JavaxInjectProvider> experimentsProvider_;
    id <JavaxInjectProvider> smartMailTranslatorProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTISmartMailSmartMailModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8;
- (void)dealloc;
- (id)get;
- (id)initWithJBTISmartMailSmartMailModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
