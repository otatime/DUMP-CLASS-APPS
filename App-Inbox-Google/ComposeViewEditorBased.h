//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ComposeViewHeaderDelegate.h"
#import "DraftAttachmentsManagerDelegate.h"
#import "EditorViewDelegate.h"
#import "SmartMailInteractionSupport.h"

@class ComposeViewHeader, DraftAttachmentsManager, EditorView, EmailToSelfPromoView, InterceptView, NSString, RecipientEmailCardView;

@interface ComposeViewEditorBased : UIView <ComposeViewHeaderDelegate, DraftAttachmentsManagerDelegate, EditorViewDelegate, SmartMailInteractionSupport>
{
    BOOL autocompleteShown_;
    EditorView *bodyView_;
    BOOL contentsInitializedFromDraft_;
    ComposeViewHeader *header_;
    InterceptView *interceptView_;
    EmailToSelfPromoView *promoView_;
    BOOL promoViewHidden_;
    RecipientEmailCardView *recipientEmailCard_;
    struct CGRect rectForFieldShowingAutocomplete_;
    id <UIViewControllerTransitionCoordinatorContext> transitionContext_;
    BOOL sending_;
    DraftAttachmentsManager *attachmentsManager_;
    id <ComposeViewDelegate> delegate_;
    id <JBTConversationMessageDraft> draft_;
}

@property(nonatomic, getter=isSending) BOOL sending; // @synthesize sending=sending_;
@property(retain, nonatomic) id <JBTConversationMessageDraft> draft; // @synthesize draft=draft_;
@property(nonatomic) __weak id <ComposeViewDelegate> delegate; // @synthesize delegate=delegate_;
@property(readonly, nonatomic) DraftAttachmentsManager *attachmentsManager; // @synthesize attachmentsManager=attachmentsManager_;
- (void).cxx_destruct;
- (unsigned int)animationOptionforAnimationCurve:(int)arg1;
- (float)emailToSelfPromoViewOriginYWithKeyboardHeight:(float)arg1 hidden:(BOOL)arg2;
- (void)moveEmailToSelfPromoViewWithOriginY:(float)arg1 animated:(BOOL)arg2 duration:(float)arg3 curve:(int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)adjustEmailToSelfWithKeyboardHeight:(float)arg1 animtionDuration:(float)arg2 animationCurve:(int)arg3;
- (void)updateSendButton;
- (void)updateBodyAndWebviewText;
- (void)updateAttachmentsManager;
- (void)setRecipientEmailCardHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)scrollToTop;
- (void)scrollToCursor:(id)arg1;
- (float)promoViewHeight;
- (void)notifyDelegateOfContentsChanged;
- (void)createSubviews;
- (void)editorViewDidChange:(id)arg1;
- (BOOL)editorViewShouldBeginEditing:(id)arg1;
- (BOOL)attachmentsManager:(id)arg1 canMakeEditorFirstResponder:(id)arg2;
- (void)attachmentsManagerDidChangeAttachmentsViewVisibility:(id)arg1;
- (void)composeViewHeaderDidPressReturnInSubject:(id)arg1;
- (void)composeViewHeader:(id)arg1 didLongPressContact:(id)arg2 atRect:(struct CGRect)arg3;
- (void)composeViewHeaderDidToggleSummaryShown:(id)arg1;
- (void)composeViewHeader:(id)arg1 didUpdateText:(id)arg2 onInputFieldWithRect:(struct CGRect)arg3;
- (void)composeViewHeaderHasInvalidInput:(id)arg1;
- (void)composeViewHeaderDidTapResponseSelector:(id)arg1;
- (void)composeViewHeaderDidUpdateAvailableFromAddresses:(id)arg1;
- (void)composeViewHeaderDidUpdateData:(id)arg1;
- (void)composeViewHeader:(id)arg1 didChangeExpandedState:(BOOL)arg2;
- (void)willRotateWithContext:(id)arg1;
- (void)updateRecipientsWithResponseType:(id)arg1;
- (void)setEmailToSelfPromoViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)persistContents;
- (void)focusBody;
- (void)didRotate;
- (void)dealloc;
- (id)initWithDraft:(id)arg1 frame:(struct CGRect)arg2 header:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
