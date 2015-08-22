//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBBugReportContainerViewControllerDelegate.h"
#import "FBBugReportInitialCoordinatorDelegateProtocol.h"

@class FBBugReportCategory, FBBugReportConfiguration, FBBugReportContainerViewController, FBBugReportCoordinator, FBBugReportShakeHandler, NSString, UIWindow;

@interface FBBugReportInitialCoordinator : NSObject <FBBugReportContainerViewControllerDelegate, FBBugReportInitialCoordinatorDelegateProtocol>
{
    FBBugReportCoordinator *_coordinator;
    UIWindow *_fbWindow;
    UIWindow *_bugReportWindow;
    FBBugReportConfiguration *_configuration;
    FBBugReportContainerViewController *_containerViewController;
    FBBugReportShakeHandler *_shakeHandler;
    NSString *_persistedDescription;
    FBBugReportCategory *_category;
    BOOL _shouldPersistDescription;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1;
- (void)showWithPreselectedCategory:(id)arg1;
- (void)didResumeBugReporting;
- (void)resetNumReportAfterShakeOn;
- (void)incrementNumReportIfShakeOff;
- (void)resetNumCancelAfterShakeOff;
- (void)incrementNumCancelIfShakeOn;
- (void)resetCategoryAndDescription;
- (void)dismissBugComposerAndStartVideoRecording;
- (void)dismissBugComposerAndAllowUserToTakeScreenshot;
- (void)presentPhotoPermissionsRequest;
- (void)willChangeCategory;
- (id)bugDescription;
- (void)setBugDescription:(id)arg1;
- (void)sendGeneralFeedback:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)sendBugWithDescription:(id)arg1 category:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (id)chosenCategory;
- (void)setChosenCategory:(id)arg1;
- (void)presentHelpCenterForPrivacy;
- (void)presentHelpCenterForGeneralFeedback;
- (void)presentHelpCenterForAbusiveContent;
- (void)incrementUsersSeenNuxCount;
- (void)setShakeToReportDisabled;
- (void)setShakeToReportEnabled;
- (void)didDismissBugReportingFlow;
- (void)show:(int)arg1;
- (void)statusBarOrientationChange:(id)arg1;
- (BOOL)viewHierarchyContainsQuickPromotion:(id)arg1;
- (void)dealloc;
- (id)initWithShakeHandler:(id)arg1 source:(id)arg2 coordinator:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

