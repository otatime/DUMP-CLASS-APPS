//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTISapiModule, NSString;

@interface JBTISapiModule_ProvideNonCriticalStartupHookImplFactory : NSObject <DaggerInternalFactory>
{
    JBTISapiModule *module_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
    id <JavaxInjectProvider> customFromSettingsProvider_;
    id <JavaxInjectProvider> locationManagerProvider_;
    id <JavaxInjectProvider> localReminderBumperProvider_;
    id <JavaxInjectProvider> taskAliasUpdaterProvider_;
    id <JavaxInjectProvider> taskAssistanceRefresherProvider_;
    id <JavaxInjectProvider> setAliasTaskRefresherProvider_;
    id <JavaxInjectProvider> locationAliasLastSnoozeUpdaterProvider_;
    id <JavaxInjectProvider> zeroStateSuggestionsCacheProvider_;
    id <JavaxInjectProvider> settingsCachePersistenceManagerProvider_;
    id <JavaxInjectProvider> experimentsProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTISapiModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8 withJavaxInjectProvider:(id)arg9 withJavaxInjectProvider:(id)arg10 withJavaxInjectProvider:(id)arg11 withJavaxInjectProvider:(id)arg12;
- (void)dealloc;
- (id)get;
- (id)initWithJBTISapiModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8 withJavaxInjectProvider:(id)arg9 withJavaxInjectProvider:(id)arg10 withJavaxInjectProvider:(id)arg11 withJavaxInjectProvider:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
