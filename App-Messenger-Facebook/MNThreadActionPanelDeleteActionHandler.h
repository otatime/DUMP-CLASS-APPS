//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNThreadActionPanelActionHandling.h"
#import "UIAlertViewDelegate.h"

@class FBAlertViewCoordinator, FBAnalytics, MNThreadActionPanelActionConfiguration, NSString;

@interface MNThreadActionPanelDeleteActionHandler : NSObject <UIAlertViewDelegate, MNThreadActionPanelActionHandling>
{
    FBAnalytics *_analytics;
    FBAlertViewCoordinator *_alertViewCoordinator;
    id <MNThreadActionPerformer> _threadActionPerformer;
    MNThreadActionPanelActionConfiguration *_config;
    id <MNThreadActionPanelActionHandlingDelegate> _delegate;
}

- (void).cxx_destruct;
- (BOOL)isDeletingChatRequest;
- (void)_abortDeleteAction;
- (void)_archiveThread;
- (void)_deleteThread;
- (void)_finishAction;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dismissActionSheets;
- (void)handleActionWithDelegate:(id)arg1;
- (id)initWithThreadActionPerformer:(id)arg1 analytics:(id)arg2 alertViewCoordinator:(id)arg3 actionConfig:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

