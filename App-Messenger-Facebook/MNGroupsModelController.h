//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBMMQTTPinnedGroupsEventListener.h"
#import "FBMPinnedThreadsFetcherDelegate.h"

@class FBMMQTTPinnedGroupsUpdateHandler, FBMPinnedGroupsManager, FBMPinnedThreadsFetcher, FBMThreadSet, MNPinnedGroupsEditManager, MNUserStore, NSArray, NSOrderedSet, NSString;

@interface MNGroupsModelController : NSObject <FBMPinnedThreadsFetcherDelegate, FBMMQTTPinnedGroupsEventListener, FBClassProvidable>
{
    FBMThreadSet *_threadSet;
    FBMMQTTPinnedGroupsUpdateHandler *_pinnedGroupsUpdateHandler;
    FBMPinnedGroupsManager *_pinnedGroupsManager;
    MNPinnedGroupsEditManager *_editGroupsManager;
    FBMPinnedThreadsFetcher *_fetcher;
    id <FBMPinnedThreadsRestoring> _backgroundRestorer;
    MNUserStore *_userStore;
    long long _userRequestId;
    BOOL _hasFetchedThreads;
    NSOrderedSet *_groupThreadKeysInView;
    BOOL _hasLoadedGroupThreadViewModels;
    id <MNGroupsModelControllerDelegate> _delegate;
    NSArray *_groupThreadViewModels;
}

@property(readonly, nonatomic) BOOL hasLoadedGroupThreadViewModels; // @synthesize hasLoadedGroupThreadViewModels=_hasLoadedGroupThreadViewModels;
@property(readonly, copy, nonatomic) NSArray *groupThreadViewModels; // @synthesize groupThreadViewModels=_groupThreadViewModels;
@property(nonatomic) __weak id <MNGroupsModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleUserFetchError:(id)arg1;
- (void)_completeViewModelPreparationWithThreads:(id)arg1 users:(id)arg2;
- (void)_beginLoadViewModelsForThreadKeys;
- (void)_handlePinnedThreadsRestorerFailureWithError:(id)arg1;
- (void)_handlePinnedThreadsRestorerSuccessWithThreads:(id)arg1;
- (void)didReceivePinnedGroupsUpdate:(id)arg1;
- (void)pinnedThreadsFetcher:(id)arg1 didFailToFetchPinnedThreads:(id)arg2;
- (void)pinnedThreadsFetcher:(id)arg1 didFetchPinnedThreads:(id)arg2 updateTime:(long long)arg3;
- (void)_fetchGroups;
- (void)moveGroupWithKey:(id)arg1 toIndex:(unsigned int)arg2;
- (void)removeGroupWithKey:(id)arg1;
- (void)beginReloadGroupThreadViewModels;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

