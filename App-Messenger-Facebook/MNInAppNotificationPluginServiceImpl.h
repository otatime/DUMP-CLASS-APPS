//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNInAppNotificationPluginService.h"
#import "MNInAppNotificationPluginViewCloseActionHandler.h"
#import "MNInAppNotificationViewControllerDelegate.h"

@class MNInAppNotificationPluginServiceListenerAnnouncer, MNInAppNotificationPluginView, MNInAppNotificationViewController, NSMutableDictionary, NSString;

@interface MNInAppNotificationPluginServiceImpl : NSObject <MNInAppNotificationViewControllerDelegate, MNInAppNotificationPluginViewCloseActionHandler, MNInAppNotificationPluginService>
{
    MNInAppNotificationPluginServiceListenerAnnouncer *_announcer;
    NSMutableDictionary *_notificationViewsByToken;
    MNInAppNotificationViewController *_inAppNotificationViewController;
    MNInAppNotificationPluginView *_inAppNotificationPlugInView;
}

- (void).cxx_destruct;
- (void)_initInAppNotificationViewIfNecessary;
- (void)_initInAppNotificationViewControllerIfNecessary;
- (void)inAppNotificationPluginViewUserDidPerformCloseAction:(id)arg1;
- (void)inAppNotificationViewControllerDidPullDownNotificationView:(id)arg1;
- (void)inAppNotificationViewControllerDidDismissNotificationView:(id)arg1;
- (void)inAppNotificationViewControllerDidTapNotificationView:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dismissBanner:(id)arg1;
- (id)presentBannerWithContentView:(id)arg1 andDismissAutomatically:(BOOL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

