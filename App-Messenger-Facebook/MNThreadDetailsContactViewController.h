//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBWebRTCCallabilityAwareCallControllerDelegate.h"
#import "MNPresenceUpdateListening.h"
#import "MNThreadDetailsContactTableViewDataSourceDelegate.h"
#import "MNThreadDetailsHeaderViewDelegate.h"
#import "MNThreadViewModelConfigurable.h"
#import "UITableViewDelegate.h"

@class FBMUser, FBUserSession, FBWebRTCCallabilityAwareCallController, MNPresenceSubscriptionService, MNProfileImageViewController, MNThreadDetailsContactTableViewDataSource, MNThreadDetailsContactView, MNThreadDetailsHeaderView, MNThreadImageManager, MNThreadViewModel, MNUserInfoControllerCoordinator, NSString;

@interface MNThreadDetailsContactViewController : UIViewController <UITableViewDelegate, MNThreadDetailsHeaderViewDelegate, MNThreadDetailsContactTableViewDataSourceDelegate, MNPresenceUpdateListening, FBWebRTCCallabilityAwareCallControllerDelegate, MNThreadViewModelConfigurable>
{
    FBUserSession *_session;
    MNThreadDetailsContactView *_view;
    MNThreadDetailsHeaderView *_threadContactHeaderView;
    FBMUser *_contact;
    MNThreadImageManager *_threadImageManager;
    MNProfileImageViewController *_profileImageViewController;
    MNThreadDetailsContactTableViewDataSource *_tableViewDataSource;
    id <FBClock> _clock;
    MNPresenceSubscriptionService *_presenceService;
    MNThreadViewModel *_threadViewModel;
    FBWebRTCCallabilityAwareCallController *_callController;
    MNUserInfoControllerCoordinator *_userInfoControllerCoordinator;
    id <MNThreadDetailsContactViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNThreadDetailsContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureHeaderView;
- (void)_updateHeaderViewWithSyncPresence:(id)arg1;
- (void)callabilityAwareCallControllerOtherUserCallabilityDidChange:(id)arg1;
- (void)didReceivePresenceUpdate:(id)arg1;
- (BOOL)threadDetailsContactTableViewDataShourceShouldShowRoundedCorners:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)threadDetailsHeaderViewDidPressThreadNameLabel:(id)arg1;
- (BOOL)threadDetailsHeaderViewCanEditThreadName:(id)arg1;
- (void)threadDetailsHeaderViewDidEndEditingThreadName:(id)arg1;
- (void)threadDetailsHeaderViewDidTapEmptySpace:(id)arg1;
- (void)threadDetailsHeaderViewDidPressImageView:(id)arg1;
- (id)threadViewModel;
- (void)tearDownThreadViewModelDependencies;
- (void)configureThreadViewModelDependenciesWith:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithSession:(id)arg1 contact:(id)arg2 threadImageManager:(id)arg3 profileImageViewController:(id)arg4 clock:(id)arg5 presenceSubscriptionService:(id)arg6 callController:(id)arg7 avatarImageDecoration:(id)arg8 userInfoControllerCoordinator:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

