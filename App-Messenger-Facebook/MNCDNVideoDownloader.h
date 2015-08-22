//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNCDNVideoDownloadRunnerListening.h"

@class FBClientProxy, MNAsyncOperationTracker, NSString;

@interface MNCDNVideoDownloader : NSObject <FBSessionClassProvidable, MNCDNVideoDownloadRunnerListening>
{
    id <MNCDNAssetDownloading> _assetDownloader;
    id <FBNetworkDispatch> _networkDispatcher;
    FBClientProxy *_clientProxy;
    MNAsyncOperationTracker *_asyncOperationTracker;
}

- (void).cxx_destruct;
- (void)videoRunner:(id)arg1 didReceiveProgressUpdate:(float)arg2 forVideoDownloadRequest:(id)arg3 forDownloadId:(long long)arg4;
- (void)videoRunner:(id)arg1 didFailToDownloadVideoWithError:(id)arg2 forVideoDownloadRequest:(id)arg3 forDownloadId:(long long)arg4;
- (void)videoRunner:(id)arg1 didFinishWithVideo:(id)arg2 forVideoDownloadRequest:(id)arg3 forDownloadId:(long long)arg4 forURL:(id)arg5;
- (void)cancelDownloadForDownloadId:(id)arg1;
- (id)downloadVideoForVideoDownloadRequest:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAssetDownloader:(id)arg1 session:(id)arg2;
- (id)initWithAssetDownloader:(id)arg1 networkDispatcher:(id)arg2 clientProxy:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
