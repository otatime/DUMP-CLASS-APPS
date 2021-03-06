//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate.h"

@class FBLanguageNameFormatFactory, FBMPendingThreadSet, FBMThreadUserMap, MNAttributionAppSupplementaryInfoLoader, MNPageResponsivenessCache, MNThreadContextManager, MNThreadViewModelLoaderForPendingThread, MNThreadViewModelLoaderRequestBehaviorCaller, MNThreadViewModelLoaderStateMachine, MNThreadViewModelLoaderStoreRequestRunner, NSString;

@interface MNThreadViewModelLoader : NSObject <MNThreadViewModelLoaderStateMachineViewModelCreatorDelegate, FBSessionClassProvidable>
{
    FBMThreadUserMap *_threadUserMap;
    id <MNMessageSendQuerying> _messageSendQuerier;
    id <MNAuthenticationManager> _authManager;
    MNThreadViewModelLoaderStateMachine *_stateMachine;
    MNThreadViewModelLoaderRequestBehaviorCaller *_behaviorCaller;
    MNThreadViewModelLoaderStoreRequestRunner *_requester;
    MNThreadViewModelLoaderForPendingThread *_loaderForPendingThread;
    FBLanguageNameFormatFactory *_languageFormatFactory;
    MNAttributionAppSupplementaryInfoLoader *_attributionLoader;
    MNThreadContextManager *_threadContextManager;
    FBMPendingThreadSet *_pendingThreadSet;
    id <MNGlobalDeleteMessagePlaceholderStoreReading> _placeholderStoreReader;
    MNPageResponsivenessCache *_pageResponsivenessCache;
}

- (void).cxx_destruct;
- (id)createViewModelForThread:(id)arg1 usersByUserId:(id)arg2 descriptor:(id)arg3 messagesLoadingConfiguration:(id)arg4;
- (void)cancelRequestWithId:(long long)arg1;
- (long long)beginLoadThreadViewModelForThreadWithLocalDescriptor:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (long long)_beginLoadThreadViewModelForThreadWithDescriptor:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 successBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAnalytics:(id)arg1 userStore:(id)arg2 threadStore:(id)arg3 threadUserMap:(id)arg4 pendingThreadSet:(id)arg5 messageSendQuerier:(id)arg6 threadContextManager:(id)arg7 authenticationManager:(id)arg8 loaderForPendingThread:(id)arg9 pageResponsivenessCache:(id)arg10 languageNameFormatFactory:(id)arg11 attributionAppSupplementaryInfoLoader:(id)arg12 placeholderStoreReader:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

