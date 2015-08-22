//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMPendingThread, NSSet;

@interface MNThreadViewModelLoaderForPendingThreadRequest : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _failureBlock;
    FBMPendingThread *_pendingThread;
    NSSet *_requestedUserIds;
    long long _userStoreRequestID;
}

@property(readonly, copy, nonatomic) NSSet *requestedUserIds; // @synthesize requestedUserIds=_requestedUserIds;
@property(readonly, copy, nonatomic) FBMPendingThread *pendingThread; // @synthesize pendingThread=_pendingThread;
@property(readonly, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(readonly, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) long long userStoreRequestID; // @synthesize userStoreRequestID=_userStoreRequestID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPendingThread:(id)arg1 requestedUserIds:(id)arg2 successBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;

@end

