//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBBugReportContainerViewControllerChildViewControllerDelegate.h"
#import "UITableViewDelegate.h"

@class FBBugReportCategoryDataSource, FBBugReportChooseFeatureView, FBBugReportCoordinator, NSString;

@interface FBBugReportChooseFeatureViewController : UIViewController <UITableViewDelegate, FBBugReportContainerViewControllerChildViewControllerDelegate>
{
    FBBugReportChooseFeatureView *_chooseFeatureView;
    FBBugReportCategoryDataSource *_categoryDataSource;
    float _horizontalMargin;
    FBBugReportCoordinator *_coordinator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)postTransitionAnimation;
- (void)postTransitionAnimationPart2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)personDidChooseCancel;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setNavigationItem;
- (void)initializeLayoutParameters;
- (id)initWithCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

