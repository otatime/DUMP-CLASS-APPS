//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBBugReportContainerViewControllerChildViewControllerDelegate.h"
#import "FBBugReportReportAProblemViewDelegate.h"
#import "FBBugReportReportAProblemViewTinesInfoDelegate.h"

@class FBBugReportCoordinator, FBBugReportReportAProblemView, FBBugReportReportAProblemViewTinesInfo, NSString;

@interface FBBugReportReportAProblemViewController : UIViewController <FBBugReportReportAProblemViewDelegate, FBBugReportReportAProblemViewTinesInfoDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate>
{
    FBBugReportReportAProblemViewTinesInfo *_tinesInfo;
    FBBugReportReportAProblemView *_reportAProblemView;
    FBBugReportCoordinator *_coordinator;
}

- (void).cxx_destruct;
- (void)showCancelButtonUnpressedState;
- (void)showCancelButtonPressedState;
- (void)personDidChooseSettings;
- (void)didPressGravityDemo;
- (void)didPressMemorySentinel;
- (void)didPressGeneralFeedback;
- (void)didPressAbusiveContent;
- (void)didPressSomethingIsntWorking;
- (void)transitionToChooseFeatureOrReportViewControllerWithContainerVC:(id)arg1;
- (void)personDidChooseCancel;
- (void)loadView;
- (void)setNavigationItem;
- (int)desiredTinesTableViewHeight;
- (id)initWithCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

