//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCancelable.h"

@class FBGraphRequest, FBSimpleNetworkerRequest, MNRichMediaChunkResponseHandler, MNRichMediaUploadConfig, NSObject<OS_dispatch_queue>, NSString;

@interface MNRichMediaChunkRequestSender : NSObject <FBCancelable>
{
    unsigned int _chunkIndex;
    NSString *_serverSessionID;
    id <FBNetworkDispatch> _dispatcher;
    MNRichMediaChunkResponseHandler *_responseHandler;
    MNRichMediaUploadConfig *_config;
    NSObject<OS_dispatch_queue> *_queue;
    FBGraphRequest *_graphRequest;
    FBSimpleNetworkerRequest *_request;
}

- (void).cxx_destruct;
- (void)_createRequest;
- (void)_createGraphRequestForSubsequentChunks:(id)arg1;
- (void)_createGraphRequestForInitialChunk:(id)arg1;
- (void)_createGraphRequestWithData:(id)arg1;
- (void)invalidateRequest;
- (void)cancel;
- (void)send;
- (id)initWithChunkIndex:(unsigned int)arg1 chunkData:(id)arg2 config:(id)arg3 session:(id)arg4 dispatcher:(id)arg5 responseHandler:(id)arg6 queue:(id)arg7;

@end

