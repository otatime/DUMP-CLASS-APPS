//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"

@class FBClientProxyLogger, FBMobileTraceAsyncTokenPtr, FBQueuePerformer, FBScenePath, FBSimpleNetworkerRequest, NSData, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface FBPlaylistDownloader : NSObject <FBNetworkerRequestDelegate>
{
    NSURL *_URL;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBNetworkDispatch> _networker;
    FBClientProxyLogger *_logger;
    NSData *_playlist;
    FBQueuePerformer *_performer;
    FBSimpleNetworkerRequest *_networkRequest;
    NSMutableArray *_playlistRequests;
    FBScenePath *_scenePath;
    int _priority;
    FBMobileTraceAsyncTokenPtr *_mobileTraceAsyncToken;
    double _requestStartTime;
    BOOL _cacheAllowed;
    BOOL _shouldFallbackOnError;
    long long _fallbackDelay;
    NSString *_videoID;
    id <FBPlaylistDownloaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPlaylistDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)_setFallbackDelayForTest:(int)arg1;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didReceiveData:(id)arg2;
- (void)networkerRequest:(id)arg1 didReceiveResponseWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didStartWithStatus:(id)arg2;
- (void)_respondWithFallbackDataOnError:(id)arg1;
- (void)_makeNetworkRequest;
- (void)addRequest:(id)arg1;
- (void)updateScenePath:(id)arg1 priority:(int)arg2;
- (id)initWithURL:(id)arg1 videoID:(id)arg2 queue:(id)arg3 networker:(id)arg4 logger:(id)arg5 scenePath:(id)arg6 priority:(int)arg7 fallbackOnError:(BOOL)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

