//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

@class FBTabBarContainerView, FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer, UIView, UIViewController;

@interface FBTabBarContainerViewController : FBContainerViewController
{
    FBTabBarContainerView *_containerView;
    FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer *_announcer;
    UIView *_navigationBar;
    UIViewController *_contentViewController;
    UIViewController *_tabBarViewController;
}

@property(retain, nonatomic) UIViewController *tabBarViewController; // @synthesize tabBarViewController=_tabBarViewController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) UIView *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)fb_swipeToOpenLeftNav;
- (BOOL)fb_deferSwipeToOpenLeftNav;
- (BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1;
- (id)analyticsPresentedViewController;
- (BOOL)analyticsAutomaticallyLogContent;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)setTabBarViewOffsetFraction:(float)arg1 alongsideTransition:(id)arg2 animation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setTabBarViewOffsetFraction:(float)arg1 animated:(BOOL)arg2;
@property(nonatomic) float tabBarViewOffsetFraction;
@property(nonatomic) unsigned int tabBarIconSize;
@property(nonatomic) unsigned int tabBarViewControllerPosition;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)_setChildViewController:(id *)arg1 withViewController:(id)arg2 removeViewBlock:(CDUnknownBlockType)arg3 addViewBlock:(CDUnknownBlockType)arg4;
- (void)loadView;
- (id)initWithAnnouncer:(id)arg1;
- (id)init;

@end
