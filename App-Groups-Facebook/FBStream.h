//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPollingDelegate.h"
#import "FBStreamAnnouncingInterface.h"
#import "FBStreamLoadDelegate.h"

@class FBScenePath, FBStreamAnalytics, FBStreamConfiguration, FBStreamPagingInfo, FBUserSession, NSError, NSMutableDictionary, NSString;

@interface FBStream : NSObject <FBPollingDelegate, FBStreamLoadDelegate, FBStreamAnnouncingInterface>
{
    FBStreamConfiguration *_configuration;
    BOOL _shouldRestartStreamingOnForeground;
    id <FBStreamScenePathProviding> _scenePathProvider;
    FBStreamPagingInfo *_cachedPagingInfo;
    NSMutableDictionary *_errors;
    NSMutableDictionary *_streamLoads;
    BOOL _canLoadTail;
    BOOL _canLoadHead;
    BOOL _loadingHead;
    BOOL _loadingTail;
    BOOL _lastStreamHeadLoadWasRetried;
    BOOL _streamAsNeckLoad;
    BOOL _enabled;
    FBUserSession *_session;
    NSString *_targetID;
}

+ (BOOL)isTailishLoadType:(unsigned int)arg1;
+ (BOOL)isHeadishLoadType:(unsigned int)arg1;
+ (void)enumerateLoadTypesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) FBStreamConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property(nonatomic) BOOL streamAsNeckLoad; // @synthesize streamAsNeckLoad=_streamAsNeckLoad;
@property(readonly, nonatomic) BOOL lastStreamHeadLoadWasRetried; // @synthesize lastStreamHeadLoadWasRetried=_lastStreamHeadLoadWasRetried;
@property(nonatomic) BOOL loadingTail; // @synthesize loadingTail=_loadingTail;
@property(nonatomic) BOOL loadingHead; // @synthesize loadingHead=_loadingHead;
@property(nonatomic) BOOL canLoadHead; // @synthesize canLoadHead=_canLoadHead;
@property(nonatomic) BOOL canLoadTail; // @synthesize canLoadTail=_canLoadTail;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
@property(readonly) FBStreamAnalytics *analytics;
- (void)_load:(unsigned int)arg1 refreshMode:(unsigned int)arg2 backgroundFetch:(BOOL)arg3;
- (void)_load:(unsigned int)arg1 refreshMode:(unsigned int)arg2;
- (void)_load:(unsigned int)arg1;
- (BOOL)_canLoad:(unsigned int)arg1;
- (void)_cancelRequestsAndResetLoadState;
- (id)_streamLoadForLoadType:(unsigned int)arg1 refreshMode:(unsigned int)arg2 cursor:(id)arg3 backgroundFetch:(BOOL)arg4 networkDispatcher:(id)arg5;
- (id)_streamLoadForLoadType:(unsigned int)arg1 refreshMode:(unsigned int)arg2 cursor:(id)arg3 backgroundFetch:(BOOL)arg4;
- (id)_streamLoadForLoadType:(unsigned int)arg1 refreshMode:(unsigned int)arg2 cursor:(id)arg3;
- (id)resetPagingInfo;
- (void)loadTail;
- (void)loadNeck;
- (void)_loadHeadWithRefreshMode:(unsigned int)arg1 backgroundFetch:(BOOL)arg2;
- (void)loadHead:(BOOL)arg1;
- (void)loadHeadWithRefreshMode:(unsigned int)arg1;
- (void)loadHead;
- (void)stopStreaming;
- (void)startStreaming;
- (void)startStreamingWithImmediateHeadLoadPreparationBlock:(CDUnknownBlockType)arg1;
- (void)streamLoadWillRetry:(id)arg1;
- (void)streamLoadDidFinishLoading:(id)arg1;
- (void)streamLoadResponseHandlerDidProcessResponseWithLoadType:(unsigned int)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 responseChunkResults:(id)arg4 expectedResponseChunks:(unsigned int)arg5 userInfo:(id)arg6;
- (void)streamLoadResponseHandlerWillProcessResponseWithLoadType:(unsigned int)arg1 analyticsUUID:(id)arg2 changesetUUID:(id)arg3 currentResponseChunkIndex:(unsigned int)arg4 expectedResponseChunks:(unsigned int)arg5 userInfo:(id)arg6;
- (void)_loadHeadIfPollingTimerIsOverdueWithLoadPreparationBlock:(CDUnknownBlockType)arg1;
- (BOOL)_nextPollingSourceFireDateIsInFuture;
- (void)pollingSourceDidFire:(id)arg1;
- (BOOL)_automaticNeckLoadEnabled;
- (BOOL)_getHeadPaginationInfo:(id)arg1;
- (void)_setLoadInfo:(id)arg1 streamLoadType:(unsigned int)arg2;
- (id)_sortResults:(id)arg1 streamLoadType:(unsigned int)arg2;
- (void)_resetCachedPagingInfo:(id)arg1;
- (id)_pagingInfo;
@property(readonly, nonatomic) FBScenePath *scenePath;
- (BOOL)_streamLoadExistsForLoadType:(unsigned int)arg1;
- (id)_streamLoadForLoadType:(unsigned int)arg1;
- (void)_setStreamLoad:(id)arg1 forLoadType:(unsigned int)arg2;
@property(readonly, nonatomic) NSError *lastTailLoadError;
@property(readonly, nonatomic) NSError *lastHeadLoadError;
- (id)_lastErrorForLoadType:(unsigned int)arg1;
- (void)_setLastError:(id)arg1 forLoadType:(unsigned int)arg2;
@property(readonly, nonatomic) BOOL loadingInitial;
@property(readonly, nonatomic) BOOL loading;
@property(nonatomic) double refreshInterval;
- (void)setStreaming:(BOOL)arg1;
- (BOOL)streaming;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithStreamConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
