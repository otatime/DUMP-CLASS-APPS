//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsXplatLoggingEventsFlushable.h"
#import "ComGoogleAppsXplatLoggingEventsLogHandler.h"
#import "ComGoogleAppsXplatLoggingEventsStoppable.h"

@class ComGoogleAppsXplatUtilConcurrentExecutionGuard, JavaUtilConcurrentAtomicAtomicInteger, NSString;

@interface ComGoogleAppsXplatLoggingEventsEventUploader : NSObject <ComGoogleAppsXplatLoggingEventsLogHandler, ComGoogleAppsXplatLoggingEventsFlushable, ComGoogleAppsXplatLoggingEventsStoppable>
{
    id <ComGoogleAppsXplatLoggingEventsLogTransport> transport_;
    id <ComGoogleAppsXplatLoggingEventsEventStore> store_;
    id <ComGoogleCommonBaseFunction> requestBatcher_;
    id <ComGoogleAppsXplatLoggingEventsEventUploader_Strategy> strategy_;
    id <JavaUtilConcurrentExecutor> executor_;
    ComGoogleAppsXplatUtilConcurrentExecutionGuard *guard_;
    JavaUtilConcurrentAtomicAtomicInteger *droppedData_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)sendWithInt:(int)arg1;
- (id)stop;
- (id)emptyStoreIntoRequestWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1;
- (id)flush;
- (void)maybeSend;
- (int)getNumDropped;
- (void)handleWithId:(id)arg1;
- (id)initWithComGoogleAppsXplatLoggingEventsLogTransport:(id)arg1 withComGoogleAppsXplatLoggingEventsEventStore:(id)arg2 withComGoogleCommonBaseFunction:(id)arg3 withComGoogleAppsXplatLoggingEventsEventUploader_Strategy:(id)arg4 withJavaUtilConcurrentExecutor:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
