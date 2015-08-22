//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuBoostableWorkQueue.h"

@class NSMutableArray, NSString, NSThread;

@interface CumulusObjCWorkQueue : NSObject <JCGCuBoostableWorkQueue>
{
    NSThread *workerThread_;
    NSString *threadName_;
    BOOL isShuttingDown_;
    BOOL isRunning_;
    id <JCGCuThreadGuard> threadGuard_;
    NSMutableArray *queuedDelayedItems_;
    NSMutableArray *queuedImmediateItems_;
    NSMutableArray *swappedImmediateQueue_;
    double initialPriority_;
}

@property double initialPriority; // @synthesize initialPriority=initialPriority_;
@property id <JCGCuThreadGuard> threadGuard; // @synthesize threadGuard=threadGuard_;
@property BOOL isRunning; // @synthesize isRunning=isRunning_;
@property BOOL isShuttingDown; // @synthesize isShuttingDown=isShuttingDown_;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=threadName_;
@property(retain, nonatomic) NSThread *workerThread; // @synthesize workerThread=workerThread_;
- (id)getThreadGuard;
- (id)getLock;
- (void)setPriorityBoostWithBoolean:(BOOL)arg1;
- (BOOL)enqueueWithJavaLangRunnable:(id)arg1;
- (BOOL)enqueueWithInt:(int)arg1 withJavaLangRunnable:(id)arg2;
- (void)sanityCheck:(id)arg1;
- (void)maybeRunWorkItems;
- (void)scheduleNextPoke;
- (void)shutdown;
- (void)newThreadMainLoop;
- (void)dealloc;
- (void)commonInitWithThread:(id)arg1 enableThreadGuard:(BOOL)arg2;
- (id)initWithThread:(id)arg1 enableThreadGuard:(BOOL)arg2;
- (id)initWithNewThreadNamed:(id)arg1 priority:(double)arg2 enableThreadGuard:(BOOL)arg3;
- (id)initWithNewThreadNamed:(id)arg1 priority:(double)arg2;
- (id)initWithNewThreadEnableThreadGuard:(BOOL)arg1;
- (id)initWithNewThread;
- (id)initWithEnableThreadGuard:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
