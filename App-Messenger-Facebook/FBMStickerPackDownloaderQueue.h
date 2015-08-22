//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMStickerPackDownloadObserver.h"
#import "FBReachabilityListener.h"

@class FBMStickerPackDownloaderPriorityQueue, NSMutableDictionary, NSMutableSet, NSString;

@interface FBMStickerPackDownloaderQueue : NSObject <FBReachabilityListener, FBMStickerPackDownloadObserver>
{
    NSMutableDictionary *_activeDownloaderMap;
    NSMutableDictionary *_allDownloadersMap;
    FBMStickerPackDownloaderPriorityQueue *_downloaderPriorityQueue;
    unsigned int _reachabilityState;
    unsigned int _maxConcurrentActiveDownloads;
    BOOL _observingReachability;
    NSMutableSet *_observers;
}

- (void).cxx_destruct;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)stickerPackDownloaderDidCancel:(id)arg1;
- (void)stickerPackDownloaderDidFinish:(id)arg1;
- (void)stickerPackDownloader:(id)arg1 didFailWithError:(id)arg2;
- (void)_removeDownloader:(id)arg1;
- (void)_pauseDownloader:(id)arg1;
- (void)_startOrResumeDownloader:(id)arg1;
- (unsigned int)_activeDownloaderCount;
- (void)_enqueueStickerPackDownloader:(id)arg1;
- (BOOL)_canStartDownloader:(id)arg1;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)_reachabilityChanged;
- (BOOL)tryPreemptDownloader:(id)arg1;
- (void)_startOrResumeNextDownloadersIfPossible;
- (void)_pauseAllDownloaders;
- (void)_notifyObserversDidQueueDownloader:(id)arg1;
- (void)_performBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)removeStickerPackDownloaderQueueObserver:(id)arg1;
- (void)addStickerPackDownloaderQueueObserver:(id)arg1;
- (void)cancelDownloader:(id)arg1;
- (void)queueDownloader:(id)arg1;
- (id)downloaderForStickerPackWithFbId:(unsigned long long)arg1;
- (void)cancelAllDownloaders;
- (void)dealloc;
- (id)initWithMaxConcurrentDownloads:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

