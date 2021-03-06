//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBInlineComposerLifecycleListener.h"

@class FBInlineComposerPrompt;

@protocol FBInlineComposerPromptsProvider <FBInlineComposerLifecycleListener>
@property(readonly, nonatomic) FBInlineComposerPrompt *currentPrompt;
- (void)removeListener:(id <FBInlineComposerPromptsProviderListener>)arg1;
- (void)addListener:(id <FBInlineComposerPromptsProviderListener>)arg1;
- (void)didClosePrompt:(FBInlineComposerPrompt *)arg1;
- (void)didDisplayPrompt;
- (void)reloadPrompt;
@end

