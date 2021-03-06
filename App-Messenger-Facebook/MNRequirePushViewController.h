//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MNPushPermissionRequestControllerDelegate.h"
#import "MNRequirePushViewDelegate.h"
#import "MNUserSetUpStepViewController.h"

@class FBUserSession, MNPrimerAlertViewExperimentContext, MNPushPermissionRequestController, MNRequirePushView, MNUserSettings, NSString;

@interface MNRequirePushViewController : UIViewController <MNRequirePushViewDelegate, MNPushPermissionRequestControllerDelegate, MNUserSetUpStepViewController>
{
    MNPrimerAlertViewExperimentContext *_primerAlertViewExperimentContext;
    MNPushPermissionRequestController *_pushPermissionRequestController;
    MNRequirePushView *_requirePushView;
    MNUserSettings *_userSettings;
    FBUserSession *_session;
    id <MNUserSetUpStepCompletion> completionDelegate;
}

@property(nonatomic) __weak id <MNUserSetUpStepCompletion> completionDelegate; // @synthesize completionDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_completeRequirePushStep;
- (void)_presentRequirePushView;
- (unsigned int)preferredTransitionType;
- (void)requirePushViewDidClickOK:(id)arg1;
- (void)requirePushViewDidClickCancel:(id)arg1;
- (void)pushPermissionRequestControllerDidCompleteRequest:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithPushPermissionRequestController:(id)arg1 primerAlertViewExperimentContext:(id)arg2 userSettings:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

