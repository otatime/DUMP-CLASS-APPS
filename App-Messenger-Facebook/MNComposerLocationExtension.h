//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNAbstractComposerTrayExtension.h"

#import "FBClassProvidable.h"
#import "MNLocationPickerPresenterDelegate.h"

@class FBUserSession, MNComposerExtensionTrayPresentationStrategy, MNComposerIconColourExperimentContext, MNLocationPickerPresenter, NSString;

@interface MNComposerLocationExtension : MNAbstractComposerTrayExtension <MNLocationPickerPresenterDelegate, FBClassProvidable>
{
    MNComposerExtensionTrayPresentationStrategy *_presentationStrategy;
    MNLocationPickerPresenter *_locationPickerPresenter;
    MNComposerIconColourExperimentContext *_iconColorExperimentContext;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (id)_composerIcon;
- (void)_initComposerIconExperimentContextIfNecessary;
- (void)_presentLocationPicker;
- (void)locationPickerPresenter:(id)arg1 didDismissAlertView:(id)arg2;
- (void)locationPickerPresenter:(id)arg1 didSendWithLocationAttachmentData:(id)arg2;
- (id)presentationStrategy;
- (BOOL)shouldPresent:(BOOL)arg1 source:(int)arg2;
- (void)didSelect:(BOOL)arg1 source:(int)arg2;
- (id)extensionIdentifier;
- (int)category;
- (id)tabBarItem;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

