//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNGroupsLoadEventListener.h"
#import "MNNavigationListener.h"

@class FBAnalyticsPerfLogger, MNNavigationCoordinator, NSString;

@interface MNGroupsLoadPerfLogger : NSObject <FBSessionClassProvidable, MNGroupsLoadEventListener, MNNavigationListener>
{
    BOOL _isFromStartup;
    FBAnalyticsPerfLogger *_perfLogger;
    MNNavigationCoordinator *_navigationCoordinator;
}

- (void).cxx_destruct;
- (void)tabBarControllerDidSelectViewController:(id)arg1;
- (void)didDisplayMessagesViewControllerForThread:(id)arg1;
- (void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)willNavigateFromViewController:(id)arg1 toViewController:(id)arg2 navigationController:(id)arg3 isSelectedNavigationController:(BOOL)arg4;
- (void)groupsDidFailToLoadFromFetch;
- (void)groupsDidLoadFromFetch;
- (void)groupsTabDidAppearWillFetchMore:(BOOL)arg1;
- (void)_stopNetworkEventsWithStatus:(id)arg1;
- (void)_stopTapEvent:(BOOL)arg1;
- (void)_stopStartupEvent:(BOOL)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithAnalyticsPerfLogger:(id)arg1 navigationCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

