//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMMessageSenderListener.h"
#import "FBSessionClassProvidable.h"
#import "MNComposeViewControllerListener.h"

@class MNComposerExtensionUsageDataStore, NSString;

@interface MNComposerExtensionUsageDataUpdater : NSObject <FBSessionClassProvidable, MNComposeViewControllerListener, FBMMessageSenderListener>
{
    MNComposerExtensionUsageDataStore *_composerExtensionUsageDataStore;
    NSString *_lastTappedExtensionIdentifier;
    int _lastTappedExtensionSource;
}

- (void).cxx_destruct;
- (void)thread:(id)arg1 didEnqueueMessage:(id)arg2;
- (void)didCommitSendingContentFromComposerExtension:(id)arg1;
- (void)didSelectExtension:(id)arg1 source:(int)arg2;
- (void)didTransitionToExtension:(id)arg1;
- (void)_logSendContentWithExtensionIdentifier:(id)arg1;
- (void)_didSendContentFromComposerExtensionWithIdentifier:(id)arg1;
- (void)_didOpenComposerExtensionWithIdentifier:(id)arg1;
- (void)_didTapComposerExtensionWithIdentifier:(id)arg1 source:(int)arg2;
- (id)initWithComposerExtensionUsageDataStore:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

