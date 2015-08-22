//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNThreadActionPanelActionHandling.h"
#import "MNThreadMutePickerDelegate.h"

@class FBAnalytics, MNThreadActionPanelActionConfiguration, MNThreadMutePicker, NSString, UIView;

@interface MNThreadActionPanelMuteActionHandler : NSObject <MNThreadMutePickerDelegate, MNThreadActionPanelActionHandling>
{
    FBAnalytics *_analytics;
    MNThreadMutePicker *_mutePicker;
    id <MNThreadActionPerformer> _threadActionPerformer;
    UIView *_viewToShowActionSheet;
    MNThreadActionPanelActionConfiguration *_config;
    id <MNThreadActionPanelActionHandlingDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_finishEvent;
- (void)_promptMuteOptions;
- (void)threadMutePickerDidCancel:(id)arg1;
- (void)threadMutePicker:(id)arg1 didSelectMuteType:(long long)arg2;
- (void)dismissActionSheets;
- (void)handleActionWithDelegate:(id)arg1;
- (id)initWithAnalytics:(id)arg1 mutePicker:(id)arg2 threadActionPerformer:(id)arg3 presentingView:(id)arg4 actionConfig:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

