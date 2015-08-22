//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerAudiencePickerControllerDelegate.h"
#import "FBComposerBottomAudienceSelectorViewControllerDelegate.h"
#import "FBComposerCompositionStateChangedListener.h"
#import "FBComposerFixedAudienceExplainerViewControllerDelegate.h"
#import "FBComposerPickerController.h"
#import "FBPopoverControllerDelegate.h"
#import "FBTokenizerContainingDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBComposerAudienceButton, FBComposerAudienceTokenizerView, FBComposerBottomAudienceSelectorViewController, FBComposerCompositionState, FBComposerFixedAudienceExplainerViewController, FBComposerFixedPrivacy, FBComposerMutableTaggableCollectionProvider, FBComposerSelectablePrivacy, FBComposerToolTipCoordinator, FBPopoverController, FBTaggableActivityEventObject, FBUserSession, NSSet, NSString, UIView, UIViewController<FBComposerAudiencePickerController>;

@interface FBComposerAudienceSelectionFlowController : NSObject <FBComposerAudiencePickerControllerDelegate, FBComposerBottomAudienceSelectorViewControllerDelegate, FBComposerFixedAudienceExplainerViewControllerDelegate, FBTokenizerContainingDelegate, FBPopoverControllerDelegate, UIGestureRecognizerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener>
{
    FBComposerCompositionState *_currentCompositionState;
    UIViewController<FBComposerAudiencePickerController> *_pickerController;
    FBComposerAudienceButton *_audienceButton;
    FBComposerToolTipCoordinator *_toolTipCoordinator;
    FBComposerAudienceTokenizerView *_tokenizerView;
    FBComposerBottomAudienceSelectorViewController *_bottomAudienceSelectorViewController;
    id <FBComposerAudienceSelectionListener> _listener;
    BOOL _explainFixedPrivacyActionButtonState;
    BOOL _explainFixedPrivacyWithTokenizedExplanation;
    FBComposerFixedAudienceExplainerViewController *_fixedAudienceExplainerController;
    FBPopoverController *_fixedAudienceExplainerPopoverController;
    NSString *_fixedAudienceExplanation;
    FBComposerMutableTaggableCollectionProvider *_mutableTaggableCollectionProvider;
    FBComposerFixedPrivacy *_renderedFixedPrivacy;
    FBComposerSelectablePrivacy *_selectablePrivacy;
    FBUserSession *_userSession;
    FBComposerSelectablePrivacy *_renderedSelectablePrivacy;
    NSSet *_graphQLIDsOfTaggedAndMentionedUsersForTagExpansion;
    FBTaggableActivityEventObject *_taggedEvent;
    BOOL _presentAnimated;
    BOOL _isCanceled;
    id <FBComposerAudienceSelectionFlowControllerDelegate> _delegate;
    UIView *_audienceContentView;
}

@property(readonly, nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(readonly, nonatomic) BOOL presentAnimated; // @synthesize presentAnimated=_presentAnimated;
@property(readonly, nonatomic) UIView *audienceContentView; // @synthesize audienceContentView=_audienceContentView;
@property(nonatomic) __weak id <FBComposerAudienceSelectionFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (void)selectorViewController:(id)arg1 didSelectPrivacySetting:(id)arg2 fromAvailablePrivacySettings:(id)arg3;
- (void)selectorViewController:(id)arg1 didUpdateAudienceContentView:(id)arg2;
- (void)_updateAudienceTokenizerViewForSelectablePrivacy:(id)arg1;
- (void)nonInteractiveAudienceViewWasTapped;
- (void)textFieldDidReceiveTap:(id)arg1;
- (BOOL)textFieldSupportsEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)accessoryViewWasTappedForTokenizer:(id)arg1;
- (void)tokenizer:(id)arg1 willChangeHeight:(float)arg2;
- (void)dismissFixedAudiencePopover;
@property(readonly, nonatomic) BOOL IsFixedAudiencePopoverShown;
- (void)explanationWasTapped;
- (void)_showCannotChangePrivacyMessageFromSourceView:(id)arg1;
- (void)_didTapAudienceButton;
- (void)audiencePickerControllerDidTapCancelNavigationButton:(id)arg1;
- (void)audiencePickerControllerDidTapDoneNavigationButton:(id)arg1 finishedWithAvailablePrivacySettings:(id)arg2 selectedAudience:(id)arg3;
- (id)_createPickerController;
- (void)willPresentViewControllerAnimated:(BOOL)arg1;
- (void)dismissPopoverController;
- (id)presentableViewController;
- (struct CGSize)popoverContentSizeForOrientation:(int)arg1;
- (unsigned int)popoverStyle;
- (void)_updateFixedAudienceViewForFixedPrivacyTokenizedExplanation:(id)arg1;
- (void)_updateFixedAudienceButtonForFixedPrivacyExplanation:(id)arg1;
- (void)_updateAudienceViewForPrivacy:(id)arg1;
- (void)_setupFixedTokenizedPrivacyHostView;
- (void)_setupFixedPrivacyHostView;
- (void)_setupBottomSelectablePrivacyHostViewForSelectablePrivacy:(id)arg1;
- (void)_setupSelectablePrivacyHostView;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 listener:(id)arg2 mutableTaggableCollectionProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
