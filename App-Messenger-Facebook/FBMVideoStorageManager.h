//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaAssetStorageManager.h"
#import "FBMessageAttachmentPreparerListener.h"
#import "FBSessionClassProvidable.h"

@class FBDiskStore, FBPreferences, FBUserSession, NSObject<OS_dispatch_queue>, NSString;

@interface FBMVideoStorageManager : NSObject <FBSessionClassProvidable, FBMessageAttachmentPreparerListener, FBMediaAssetStorageManager>
{
    FBUserSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    FBDiskStore *_sessionDiskStore;
    FBPreferences *_preferences;
}

- (void).cxx_destruct;
- (void)messageWithOfflineId:(id)arg1 didCancelPrepareAttachmentForSend:(id)arg2 resultPath:(id)arg3 stage:(id)arg4;
- (void)messageWithOfflineId:(id)arg1 didFailPrepareAttachmentForSend:(id)arg2 resultPath:(id)arg3 stage:(id)arg4;
- (void)messageWithOfflineId:(id)arg1 didPrepareAttachmentForSend:(id)arg2 resultPath:(id)arg3;
- (void)messageWithOfflineId:(id)arg1 willPrepareAttachmentForSend:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 didCancelPrepareAttachmentForUpload:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 didFailPrepareAttachmentForUpload:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 didPrepareAttachmentForUpload:(id)arg2;
- (void)messageWithOfflineId:(id)arg1 willPrepareAttachmentForUpload:(id)arg2;
- (id)_proxyURLIfNecessary:(id)arg1 forCacheKey:(id)arg2;
- (id)directoryPathForVideoStorage;
- (id)generateVideoFilePathForMessage:(id)arg1;
- (BOOL)videoAttachmentHasAssetsLibraryPrefix:(id)arg1;
- (id)fetchVideoFilePathForMessageSynchronously:(id)arg1;
- (void)fetchVideoPathForMessage:(id)arg1 videoAttachment:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)_deleteFileAtPath:(id)arg1;
- (void)_unstoreLocalVideoAttachment:(id)arg1 forCacheKey:(id)arg2;
- (void)_storeLocalVideoAttachment:(id)arg1 forCacheKey:(id)arg2;
- (void)storeLocalVideoAttachment:(id)arg1 forMessage:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

