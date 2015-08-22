//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBImageProcessingRequestProtocol.h"

@class NSString;

@interface FBImageProcessingRequest : NSObject <FBImageProcessingRequestProtocol>
{
    struct RecursiveMutex _lock;
    BOOL _canCancelRequestIfNeeded;
    BOOL _canExecuteInBackground;
    unsigned int _status;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _cancelBlock;
    FBImageProcessingRequest *_topRequester;
    FBImageProcessingRequest *_previousRequester;
    FBImageProcessingRequest *_nextRequester;
    double _requestTime;
}

@property(retain, nonatomic) FBImageProcessingRequest *nextRequester; // @synthesize nextRequester=_nextRequester;
@property(nonatomic) __weak FBImageProcessingRequest *previousRequester; // @synthesize previousRequester=_previousRequester;
@property(nonatomic) __weak FBImageProcessingRequest *topRequester; // @synthesize topRequester=_topRequester;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) BOOL canExecuteInBackground; // @synthesize canExecuteInBackground=_canExecuteInBackground;
@property(nonatomic) BOOL canCancelRequestIfNeeded; // @synthesize canCancelRequestIfNeeded=_canCancelRequestIfNeeded;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;
- (void)addRequester:(id)arg1;
- (void)reportProgress;
- (void)clear;
- (void)finish;
- (void)cancel;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 reportProgress:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

