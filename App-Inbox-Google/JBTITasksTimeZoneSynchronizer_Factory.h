//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class NSString;

@interface JBTITasksTimeZoneSynchronizer_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> workerRpcPipelineProvider_;
    id <JavaxInjectProvider> checkReindexDueDatesNeededChannelProvider_;
    id <JavaxInjectProvider> timeServiceProvider_;
    id <JavaxInjectProvider> timeZoneDueDateUpdateTypeHandlerProvider_;
    id <JavaxInjectProvider> timeZoneChangeDueDatesUpdaterProvider_;
    id <JavaxInjectProvider> settingsFetcherProvider_;
    id <JavaxInjectProvider> settingsSaverProvider_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> workQueueProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJavaxInjectProvider:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8 withJavaxInjectProvider:(id)arg9;
- (void)dealloc;
- (id)get;
- (id)initWithJavaxInjectProvider:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7 withJavaxInjectProvider:(id)arg8 withJavaxInjectProvider:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

