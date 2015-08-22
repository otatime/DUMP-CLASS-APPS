//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLNotificationNagDelegate.h"
#import "CBLSlidingSegmentedControlDelegate.h"

@class CBLNotificationPaneNag, CBLSlidingSegmentedControl, NSArray, NSString, UIViewController<CBLTopTabChildController>;

@interface CBLTopTabController : CBLBaseViewController <CBLSlidingSegmentedControlDelegate, CBLNotificationNagDelegate>
{
    id <CBLTopTabControllerDelegate> _delegate;
    id <CBLTopTabControllerSettingsDelegate> _settingsDelegate;
    CBLSlidingSegmentedControl *_control;
    UIViewController<CBLTopTabChildController> *_currentController;
    unsigned int _selectedIndex;
    unsigned int _controllerCount;
    NSArray *_names;
    NSArray *_controllers;
    CBLNotificationPaneNag *_nagView;
}

@property(retain, nonatomic) CBLNotificationPaneNag *nagView; // @synthesize nagView=_nagView;
@property(retain, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) NSArray *names; // @synthesize names=_names;
@property(nonatomic) unsigned int controllerCount; // @synthesize controllerCount=_controllerCount;
@property(nonatomic) unsigned int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIViewController<CBLTopTabChildController> *currentController; // @synthesize currentController=_currentController;
@property(retain, nonatomic) CBLSlidingSegmentedControl *control; // @synthesize control=_control;
@property(nonatomic) __weak id <CBLTopTabControllerSettingsDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
@property(nonatomic) __weak id <CBLTopTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewControllerAtIndex:(unsigned int)arg1;
- (void)handleScrollViewShouldScrollToTop:(id)arg1;
- (void)updateDisplayForSelectedIndex;
- (void)removeBadgeAtIndex:(unsigned int)arg1;
- (void)addIndicatorForIndex:(unsigned int)arg1;
- (void)setBadgeValue:(id)arg1 forIndex:(unsigned int)arg2;
- (void)slidingSegmentedControlDidSelectIndex:(unsigned int)arg1;
- (void)removeNotificationPermissionNag;
- (void)maybeShowNotificationPermissionNag;
- (void)settingsButtonPressed:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNames:(id)arg1 andControllers:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

