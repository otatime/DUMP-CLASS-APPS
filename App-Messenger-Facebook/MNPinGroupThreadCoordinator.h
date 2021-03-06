//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNPinGroupThreadSenderDelegate.h"
#import "MNPinGroupViewControllerDelegate.h"

@class FBAnalytics, FBMPinnedGroupsManager, FBUserSession, MNNavigationBarController, MNPinGroupThreadSender, MNProgressBarController, NSString;

@interface MNPinGroupThreadCoordinator : NSObject <MNPinGroupThreadSenderDelegate, MNPinGroupViewControllerDelegate, FBClassProvidable>
{
    FBUserSession *_session;
    FBAnalytics *_analytics;
    FBMPinnedGroupsManager *_pinnedGroupsManager;
    MNPinGroupThreadSender *_pinGroupThreadSender;
    id <FBProvider> _navigationCoordinatorProvider;
    id <FBProvider> _pinGroupViewControllerProvider;
    id <FBProvider> _pinGroupThreadSenderProvider;
    id <FBProvider> _groupsViewControllerProvider;
    id <FBGenericThread> _thread;
    MNNavigationBarController *_navigationBarController;
    id _progressTitleId;
    MNProgressBarController *_progressBarController;
    id <MNPinGroupThreadCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPinGroupThreadCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didFinishPinning;
- (void)pinGroupViewControllerDidPinThread:(id)arg1;
- (void)_showErrorAlert;
- (void)_clearPinningRequest;
- (void)pinGroupThreadSender:(id)arg1 didFailWithError:(id)arg2;
- (void)pinGroupThreadSender:(id)arg1 didFetchPinnedGroups:(id)arg2 updateTime:(long long)arg3;
- (void)pinGroupThreadSender:(id)arg1 didFinishPinningThread:(id)arg2;
- (void)_hideProgressInNavigationBar;
- (void)_showProgressInNavigationBar;
- (void)_cancelPinningRequest;
- (void)_startPinningRequest;
- (void)_dismissPinFlow;
- (void)_presentPinFlow;
- (void)_pinInPlace;
- (void)cancelPinning;
- (void)pinGroupThread:(id)arg1 navigationBarController:(id)arg2 progressBarController:(id)arg3;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

