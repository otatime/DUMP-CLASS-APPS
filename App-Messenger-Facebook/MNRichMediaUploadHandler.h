//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNRichMediaUploadListener.h"

@class FBQueuePerformer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MNRichMediaUploadHandler : NSObject <MNRichMediaUploadListener>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBQueuePerformer *_queuePerformer;
    id <MNRichMediaUploadJobFactory> _uploadJobFactory;
    id <FBNetworkDispatch> _networkDispatcher;
    NSMutableDictionary *_uploads;
    NSMutableArray *_pendingTokens;
    NSString *_currentUploadToken;
    NSMutableArray *_resumableTokens;
    long long _resumableUploadsMemoryUsageInBytes;
}

- (void).cxx_destruct;
- (void)_uploadHasFinishedResumably:(id)arg1;
- (void)_uploadHasFinishedForever:(id)arg1;
- (void)uploadHasProgressed:(id)arg1 withProgressInformation:(struct MNRichMediaUploadJobProgressInformation)arg2;
- (void)uploadWasCancelled:(id)arg1 metrics:(id)arg2;
- (void)uploadDidFail:(id)arg1 withFailureReason:(unsigned int)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4;
- (void)uploadDidSucceed:(id)arg1 withContentFBID:(id)arg2 metrics:(id)arg3;
- (struct MNRichMediaUploadJobMetadata)uploadMetadataForToken:(id)arg1;
- (void)resumeUploadingForToken:(id)arg1 listener:(id)arg2;
- (BOOL)uploadIsResumable:(id)arg1;
- (void)cancelUploadByToken:(id)arg1;
- (id)startUploadJobWithContent:(id)arg1 config:(id)arg2 listener:(id)arg3;
- (void)_initiateUploadIfPossible;
- (void)_deleteUploadForToken:(id)arg1;
- (void)_removePendingUploadByToken:(id)arg1;
- (id)_popPendingUpload;
- (void)_insertResumableUpload:(id)arg1;
- (void)_insertPendingUpload:(id)arg1;
- (id)initWithUploadJobFactory:(id)arg1 userSession:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
