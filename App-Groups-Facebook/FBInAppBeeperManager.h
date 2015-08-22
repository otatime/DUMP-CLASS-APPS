//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInAppBeeperContainerViewDelegate.h"

@class FBInAppBeeperContainerViewController, FBTransparentWindow, NSString;

@interface FBInAppBeeperManager : NSObject <FBInAppBeeperContainerViewDelegate>
{
    FBTransparentWindow *_beeperWindow;
    FBInAppBeeperContainerViewController *_inAppBeeperContainerViewController;
    int _currentContentViewPriority;
}

+ (id)sharedInstance;
@property(nonatomic) int currentContentViewPriority; // @synthesize currentContentViewPriority=_currentContentViewPriority;
@property(retain, nonatomic) FBInAppBeeperContainerViewController *inAppBeeperContainerViewController; // @synthesize inAppBeeperContainerViewController=_inAppBeeperContainerViewController;
@property(retain, nonatomic) FBTransparentWindow *beeperWindow; // @synthesize beeperWindow=_beeperWindow;
- (void).cxx_destruct;
- (void)hideBeeperForInAppContentView:(id)arg1;
- (BOOL)canShowBeeper;
- (BOOL)canShowBeeperWithPriority:(int)arg1;
- (BOOL)showBeeperForInAppContentView:(id)arg1 config:(id)arg2;
- (void)_actionSheetOrAlertViewWillAppear:(id)arg1;
- (void)inAppBeeperContainerViewDidDisappear:(id)arg1 withDismissalAction:(int)arg2;
- (void)_observeViewWillAppearNotificationNames:(id)arg1;
- (BOOL)_isBeeperShowing;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
