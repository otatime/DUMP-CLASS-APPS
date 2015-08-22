//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class CRNetStatDispatch, CRRequestState, NSURLSessionTask;

@interface CRNSURLSessionTaskProxy : NSProxy
{
    NSURLSessionTask *_taskDelegate;
    CRNetStatDispatch *_dispatch;
    CRRequestState *_reqState;
    unsigned int _resumeDataSize;
}

@property(nonatomic) unsigned int resumeDataSize; // @synthesize resumeDataSize=_resumeDataSize;
@property(retain, nonatomic) CRRequestState *reqState; // @synthesize reqState=_reqState;
@property(readonly, nonatomic) CRNetStatDispatch *dispatch; // @synthesize dispatch=_dispatch;
@property(readonly, nonatomic) NSURLSessionTask *taskDelegate; // @synthesize taskDelegate=_taskDelegate;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)responseFinishedWithError:(id)arg1;
- (void)finishedDownloadingToURL:(id)arg1;
- (void)receivedResponse:(id)arg1;
- (void)receivedBytes:(unsigned int)arg1;
- (void)suspend;
- (void)resume;
- (void)cancel;
- (id)initDownloadTaskWithSession:(id)arg1 resumeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (id)initDownloadTaskWithSession:(id)arg1 url:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (id)initDownloadTaskWithSession:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (CDUnknownBlockType)wrapDownloadCompletionHandler:(CDUnknownBlockType)arg1 forSession:(id)arg2;
- (id)initDataTaskWithSession:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (id)initDataTaskWithSession:(id)arg1 URL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dispatch:(id)arg4;
- (CDUnknownBlockType)wrapDataCompletionHandler:(CDUnknownBlockType)arg1 forSession:(id)arg2;
- (id)initWithTaskDelegate:(id)arg1 dispatch:(id)arg2;

@end

