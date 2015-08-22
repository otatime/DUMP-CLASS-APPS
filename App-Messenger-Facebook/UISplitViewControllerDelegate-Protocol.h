//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class UIBarButtonItem, UIPopoverController, UISplitViewController, UIViewController;

@protocol UISplitViewControllerDelegate

@optional
- (BOOL)splitViewController:(UISplitViewController *)arg1 shouldHideViewController:(UIViewController *)arg2 inOrientation:(int)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 popoverController:(UIPopoverController *)arg2 willPresentViewController:(UIViewController *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willShowViewController:(UIViewController *)arg2 invalidatingBarButtonItem:(UIBarButtonItem *)arg3;
- (void)splitViewController:(UISplitViewController *)arg1 willHideViewController:(UIViewController *)arg2 withBarButtonItem:(UIBarButtonItem *)arg3 forPopoverController:(UIPopoverController *)arg4;
- (int)splitViewControllerPreferredInterfaceOrientationForPresentation:(UISplitViewController *)arg1;
- (unsigned int)splitViewControllerSupportedInterfaceOrientations:(UISplitViewController *)arg1;
- (UIViewController *)splitViewController:(UISplitViewController *)arg1 separateSecondaryViewControllerFromPrimaryViewController:(UIViewController *)arg2;
- (BOOL)splitViewController:(UISplitViewController *)arg1 collapseSecondaryViewController:(UIViewController *)arg2 ontoPrimaryViewController:(UIViewController *)arg3;
- (UIViewController *)primaryViewControllerForExpandingSplitViewController:(UISplitViewController *)arg1;
- (UIViewController *)primaryViewControllerForCollapsingSplitViewController:(UISplitViewController *)arg1;
- (BOOL)splitViewController:(UISplitViewController *)arg1 showDetailViewController:(UIViewController *)arg2 sender:(id)arg3;
- (BOOL)splitViewController:(UISplitViewController *)arg1 showViewController:(UIViewController *)arg2 sender:(id)arg3;
- (int)targetDisplayModeForActionInSplitViewController:(UISplitViewController *)arg1;
- (void)splitViewController:(UISplitViewController *)arg1 willChangeToDisplayMode:(int)arg2;
@end

