//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "FBNetworkerRequestDelegate.h"
#import "FBServiceTransactionMutating.h"

@class FBMStickerResourceManager, FBNetworkerRequest, NSData, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface FBStickerResourceDownloadOperation : NSOperation <FBNetworkerRequestDelegate, FBServiceTransactionMutating>
{
    FBNetworkerRequest *_resourceNetworkerRequest;
    FBMStickerResourceManager *_resourceManager;
    NSURL *_url;
    id <FBNetworkDispatch> _networkDispatcher;
    unsigned long long _fbId;
    unsigned int _resourceType;
    unsigned long long _stickerPackFbId;
    BOOL _ofOwnedStickerPack;
    double _requestBeginTime;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _operationExecuting;
    BOOL _operationFinished;
    NSData *_data;
    NSError *_error;
}

@property BOOL operationFinished; // @synthesize operationFinished=_operationFinished;
@property BOOL operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)_finishOperation;
- (void)_startOperation;
- (void)_cancelOperation;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)changePriorityToNewPriority:(int)arg1;
- (void)cancel;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isAsynchronous;
- (id)initWithStickerResourceManager:(id)arg1 networkDispatcher:(id)arg2 resourceURL:(id)arg3 fbId:(unsigned long long)arg4 resourceType:(unsigned int)arg5 stickerPackFbId:(unsigned long long)arg6 ofOwnedStickerPack:(BOOL)arg7 priority:(int)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
