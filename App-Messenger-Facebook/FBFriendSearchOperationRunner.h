//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSyncStorePersonSearchOperation, NSOperationQueue;

@interface FBFriendSearchOperationRunner : NSObject
{
    FBSyncStorePersonSearchOperation *_currentlyRunningOperation;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)_processOperationResult:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)runPersonSearchOperation:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithOperationQueue:(id)arg1;
- (id)init;

@end
