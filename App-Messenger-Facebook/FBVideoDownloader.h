//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"
#import "FBVideoDownloaderThrottlerDelegate.h"

@class FBClientProxyLogger, FBMobileTraceAsyncTokenPtr, FBNetworkerRangeRequest, FBQueuePerformer, FBScenePath, FBVideoDownloaderThrottler, FBVideoPrefetchManager, NSMutableArray, NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface FBVideoDownloader : NSObject <FBNetworkerRequestDelegate, FBVideoDownloaderThrottlerDelegate>
{
    id <FBBlockDataCache> _blockDataCache;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBNetworkDispatch> _networker;
    FBQueuePerformer *_performer;
    FBClientProxyLogger *_logger;
    unsigned int _offset;
    FBScenePath *_scenePath;
    int _priority;
    FBMobileTraceAsyncTokenPtr *_mobileTraceAsyncToken;
    FBVideoPrefetchManager *_prefetchManager;
    double _requestStartTime;
    unsigned int _bytesDownloaded;
    unsigned int _requestStartOffset;
    unsigned int _requestLastOffsetWithThrottling;
    FBVideoDownloaderThrottler *_throttler;
    NSMutableData *_bufferedDataForBlock;
    unsigned int _blockSize;
    unsigned int _bufferedDataBlockIndex;
    BOOL _cancelNetworkOnDirectCancel;
    BOOL _truncateCacheOnContinuation;
    unsigned int _cancelTimeout;
    int _definition;
    BOOL _prefetchedFirstChunk;
    BOOL _passthruPrefetchCancel;
    double _shutdownRequestTimestamp;
    CDStruct_facbd6cb _videoBasicData;
    BOOL _enableCDNCacheStatusQuery;
    id <FBVideoDownloaderDelegate> _delegate;
    NSURL *_URL;
    NSURL *_prefetchURL;
    NSString *_dataKey;
    NSString *_videoID;
    NSMutableArray *_listeners;
    FBNetworkerRangeRequest *_request;
    unsigned int _totalLength;
}

@property(nonatomic) unsigned int totalLength; // @synthesize totalLength=_totalLength;
@property(retain, nonatomic) FBNetworkerRangeRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property(readonly, nonatomic) int definition; // @synthesize definition=_definition;
@property(nonatomic) BOOL enableCDNCacheStatusQuery; // @synthesize enableCDNCacheStatusQuery=_enableCDNCacheStatusQuery;
@property(readonly, copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(readonly, nonatomic) NSURL *prefetchURL; // @synthesize prefetchURL=_prefetchURL;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <FBVideoDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldRefreshParialRequest;
- (void)refreshOutgoingNetworkRequestRestartIfNeeded;
- (_Bool)shouldForwardDataToListener:(id)arg1;
- (void)resetRequestAndFlushBufferIfNeededWithOffset:(unsigned int)arg1;
- (unsigned int)calculateMinimalOffsetToFetch;
- (unsigned int)calculateThrottlingOffsetForOffset:(unsigned int)arg1;
- (id)generateNewRangeRequestWithURL:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (unsigned int)totalLengthForListener:(id)arg1;
@property(readonly, nonatomic) unsigned int totalVideoByteLength;
- (id)videoURLForListener:(id)arg1;
- (id)videoURL;
- (id)videoDataKeyForListener:(id)arg1;
- (id)videoDataKey;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)_processVideoLength:(unsigned int)arg1;
- (void)networkerRequest:(id)arg1 didReceiveResponseWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didReceiveData:(id)arg2;
- (void)networkerRequest:(id)arg1 didStartWithStatus:(id)arg2;
- (id)_readDataFromCache:(struct _NSRange)arg1 expectedContentLength:(unsigned int)arg2 dataKey:(id)arg3;
- (id)_readDataFromBuffer:(struct _NSRange)arg1 dataKey:(id)arg2;
- (void)_handleBufferingToCache:(id)arg1 offset:(unsigned int)arg2;
- (unsigned int)_truncateOffsetForAlignment:(unsigned int)arg1;
- (void)_flushBufferedDataToCacheAndReset:(BOOL)arg1;
- (void)_finishListeners;
- (void)_shutdownDownloaderWithError:(id)arg1;
- (void)_startShutdownWithError:(id)arg1 delayNetworkCancel:(BOOL)arg2;
- (void)_redirectURLIfPossible;
- (void)cancelGracefullyAndKeepDownloader;
- (void)_forwardDataToAllListeners:(id)arg1 range:(struct _NSRange)arg2;
- (void)_refreshOutgoingNetworkRequestRestartIfNeeded;
@property(readonly, nonatomic, getter=isCurrentlyDownloading) BOOL downloading;
@property(readonly, nonatomic) unsigned int bytesDownloadedInLastRequest;
- (void)pauseDownloadFromThrottler:(id)arg1;
- (void)resumeDownloadFromThrottler:(id)arg1;
- (void)removeRangedDataListener:(id)arg1;
- (void)_updateIfEmptyListener:(id)arg1;
- (void)addRangedDataListener:(id)arg1;
- (id)_getPrefetchDataAndPossiblyCancelInProgressPrefetchWithListener:(id)arg1;
- (void)cancelWithoutRedirect;
- (void)cancelGracefully;
- (void)throttleTrafficWithVideoThrottler:(id)arg1;
- (void)assignThrottlingDelegate:(id)arg1;
- (void)playRequested;
- (void)updateScenePath:(id)arg1 priority:(int)arg2;
- (id)initWithURL:(id)arg1 prefetchURL:(id)arg2 dataKey:(id)arg3 videoID:(id)arg4 blockDataCache:(id)arg5 queue:(id)arg6 networker:(id)arg7 logger:(id)arg8 scenePath:(id)arg9 priority:(int)arg10 experimentManager:(id)arg11 prefetchManager:(id)arg12 definition:(int)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
