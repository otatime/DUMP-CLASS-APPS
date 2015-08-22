//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface FBBrowserPrefetchCoordinator : NSObject
{
    FBUserSession *_session;
    NSMutableDictionary *_prefetchTasksInProgress;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_semaphore> *_downloadConcurrencySema;
}

@property(readonly, retain, nonatomic) NSObject<OS_dispatch_semaphore> *downloadConcurrencySema; // @synthesize downloadConcurrencySema=_downloadConcurrencySema;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(readonly, nonatomic) NSMutableDictionary *prefetchTasksInProgress; // @synthesize prefetchTasksInProgress=_prefetchTasksInProgress;
@property(readonly, nonatomic) __weak FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)_cacheKeyForURL:(id)arg1;
- (id)_decodedURLForURL:(id)arg1;
- (id)_diskCache;
- (id)_getCachedPrefetchDataForMainFrameWithURL:(id)arg1;
- (void)_prefetchMainFrameForURL:(id)arg1;
- (id)_prefetchDataForURL:(id)arg1 applyTransform:(CDUnknownBlockType)arg2 andSetAssumedEncoding:(char *)arg3;
- (id)_getPrefetchDataFromCache:(id)arg1;
- (id)_downloadResponseForURL:(id)arg1;
- (void)getPrefetchedDataForURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)prefetchAndStoreDataForURL:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

