//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTEventListener.h"

@class JBTICommonSapiSpan_Factory, JBTICommonScheduler, JBTITasksTaskBumpListener, NSString;

@interface JBTITasksLocalReminderBumper : NSObject <JBTEventListener>
{
    id <JBTTaskList> taskList_;
    JBTICommonScheduler *scheduler_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <JBTICommonTransactionFactory> transactionFactory_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTITasksTaskBumpListener *taskBumpListener_;
    BOOL started_;
    int schedulerToken_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (long long)getNowSeconds;
- (void)invokeBumpReminderCommandWithJavaUtilList:(id)arg1 withJBTSpan:(id)arg2;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)stopWithJBTSpan:(id)arg1;
- (id)startWithJBTSpan:(id)arg1;
- (id)initWithJBTTaskList:(id)arg1 withJBTICommonScheduler:(id)arg2 withJBTICommonTransactionFactory:(id)arg3 withJBTICommonSapiSpan_Factory:(id)arg4 withComGoogleCumulusCommonUtilClock:(id)arg5 withJBTITasksTaskBumpListener:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
