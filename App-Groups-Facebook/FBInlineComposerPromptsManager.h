//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInlineComposerPromptsProvider.h"
#import "FBInlineComposerPromptsProviderListener.h"

@class FBInlineComposerPrompt, FBInlineComposerPromptsProviderListenerAnnouncer, FBTimer, NSArray, NSString;

@interface FBInlineComposerPromptsManager : NSObject <FBInlineComposerPromptsProviderListener, FBInlineComposerPromptsProvider>
{
    NSArray *_providers;
    id <FBInlineComposerPromptsProvider> _currentProvider;
    FBInlineComposerPromptsProviderListenerAnnouncer *_announcer;
    BOOL _currentPromptIsClosed;
    FBTimer *_needsUpdateTimer;
    FBInlineComposerPrompt *_currentPrompt;
    id <FBInlineComposerPromptsManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBInlineComposerPromptsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBInlineComposerPrompt *currentPrompt; // @synthesize currentPrompt=_currentPrompt;
- (void).cxx_destruct;
- (void)_updatePromptIfPossible;
- (void)_updateCurrentPromptProvider:(id)arg1;
- (void)_setupNeedsUpdateTimer;
- (id)_selectNewCurrentProvider;
- (void)promptsProviderDidUpdatePrompt:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didClosePrompt:(id)arg1;
- (void)didDisplayPrompt;
- (void)reloadPrompt;
- (void)dealloc;
- (id)initWithProviders:(id)arg1 lifecycleStatusAnnouncer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

