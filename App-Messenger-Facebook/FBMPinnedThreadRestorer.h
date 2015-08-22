//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMPinnedThreadsRestoring.h"

@class FBMThreadStore, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface FBMPinnedThreadRestorer : NSObject <FBMPinnedThreadsRestoring>
{
    FBMThreadStore *_threadStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_pendingRequestPinnedGroupInfos;
    BOOL _threadStoreIsStarted;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _successBlock;
    long long _pendingRequestId;
}

@property(nonatomic) long long pendingRequestId; // @synthesize pendingRequestId=_pendingRequestId;
- (void).cxx_destruct;
- (void)restorePinnedThreads:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_cancelPendingRequestAndFailIfCancelled:(BOOL)arg1;
- (void)_startThreadStore;
- (id)_requestForPinnedGroupInfos:(id)arg1;
- (void)_handleFailure:(id)arg1;
- (void)_handleSuccess:(id)arg1;
- (void)_handleProgress:(id)arg1 longOperationBegan:(BOOL)arg2;
- (void)dealloc;
- (id)initWithThreadStore:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

