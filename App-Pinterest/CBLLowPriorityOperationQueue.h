//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

#import "CBLPinterestClientPriorityDelegate.h"

@class NSString;

@interface CBLLowPriorityOperationQueue : NSOperationQueue <CBLPinterestClientPriorityDelegate>
{
}

+ (id)sharedOperationQueue;
- (BOOL)shouldOperationBeLowPriority;
- (void)popLowPriorityForCurrentThread;
- (void)pushLowPriorityForCurrentThread;
- (CDUnknownBlockType)endBlock;
- (CDUnknownBlockType)startBlock;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (int)suggestedNumberOfMaxOperations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

