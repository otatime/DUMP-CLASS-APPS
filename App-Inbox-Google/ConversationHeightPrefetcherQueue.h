//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ConversationHeightPrefetcherDelegate.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface ConversationHeightPrefetcherQueue : NSObject <ConversationHeightPrefetcherDelegate>
{
    NSMutableArray *queue_;
    NSMutableSet *done_;
    NSMutableSet *prefetchers_;
    BOOL wasWorking_;
    BOOL backgroundPrefetch_;
    int parallelComputationLimit_;
    id <ConversationHeightPrefetcherQueueDelegate> _delegate;
}

+ (id)sharedConversationHeightPrefetcherQueue;
@property(nonatomic) __weak id <ConversationHeightPrefetcherQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int parallelComputationLimit; // @synthesize parallelComputationLimit=parallelComputationLimit_;
@property(nonatomic) BOOL backgroundPrefetch; // @synthesize backgroundPrefetch=backgroundPrefetch_;
- (void).cxx_destruct;
- (id)doneCacheKeyForConversation:(id)arg1;
- (BOOL)isPrefetching:(id)arg1;
- (void)computeNextConversationHeight;
- (void)maybeCompleteQueue;
- (void)conversationHeightPrefetcherDidFinish:(id)arg1;
- (void)maybeComputeNextConversationHeights;
- (id)createConversationHeightPrefetcher;
- (void)scheduleNextConversationHeightComputation;
- (void)shutdown;
- (BOOL)working;
- (void)removeConversation:(id)arg1;
- (void)addConversation:(id)arg1;
- (void)clear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

