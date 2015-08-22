//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBHttpExecutorListener.h"

@class FBHttpExecutor, FBNetworkActivityManager, NSNotificationCenter, NSObject<OS_dispatch_queue>, NSString;

@interface FBNetworkerMiscListener : NSObject <FBHttpExecutorListener>
{
    FBHttpExecutor *_executor;
    NSNotificationCenter *_notificationCenter;
    FBNetworkActivityManager *_activityManager;
    unsigned int _taskID;
    BOOL _backgrounded;
    BOOL _idle;
    unsigned int _taskCount;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedListenerForExecutor:(id)arg1;
- (void).cxx_destruct;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_didEnterBackground;
- (void)_willEnterForeground;
- (void)setIdle:(BOOL)arg1;
- (void)decrementActiveCount;
- (void)incrementActiveCount;
- (void)httpRequest:(id)arg1 didCancelWithStatus:(id)arg2 wasStarted:(BOOL)arg3;
- (void)httpRequest:(id)arg1 didFailWithStatus:(id)arg2 error:(id)arg3 wasStarted:(BOOL)arg4;
- (void)httpRequest:(id)arg1 didSucceedWithStatus:(id)arg2;
- (void)httpRequest:(id)arg1 willRetryWithStatus:(id)arg2 error:(id)arg3;
- (void)httpRequest:(id)arg1 didStartWithStatus:(id)arg2;
- (void)httpRequestWasAdded:(id)arg1;
- (void)dealloc;
- (id)initWithExecutor:(id)arg1 notificationCenter:(id)arg2 activityManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

