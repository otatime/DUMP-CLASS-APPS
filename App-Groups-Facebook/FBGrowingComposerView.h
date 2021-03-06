//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAccessibilityInvalidationEventsListener.h"
#import "UITextViewDelegate.h"

@class FBGrowingTextView, NSString, UIButton, UIImageView, UILabel, UITextView, _FBGrowingComposerBackgroundView;

@interface FBGrowingComposerView : UIView <UITextViewDelegate, FBAccessibilityInvalidationEventsListener>
{
    float _heightOfEmptyComposer;
    struct UIEdgeInsets _layoutInsets;
    _FBGrowingComposerBackgroundView *_backgroundView;
    UIImageView *_textViewBackgroundView;
    UILabel *_placeholderLabel;
    FBGrowingTextView *_textView;
    unsigned int _placeholderLabelStyle;
    struct {
        char delegateShouldEnableSendButton;
        char delegateShouldChangeTextInRange;
        char delegateShouldBeginEditing;
        char delegateDidChange;
        char delegateDidBeginEditing;
        char delegateDidEndEditing;
        char delegateShouldReturn;
        char editable;
    } _flags;
    BOOL _shouldToggleSendButton;
    BOOL _shouldToggleLeftAccessoryView;
    BOOL _shouldHideTopBorder;
    BOOL _shouldHideTextViewBackground;
    UIButton *_sendButton;
    UIView *_leftAccessoryView;
    UIView *_rightAccessoryView;
    UIView *_topAccessoryView;
    UIView *_textViewAccessoryView;
    id <FBGrowingComposerViewDelegate> _delegate;
    unsigned int _style;
    NSString *_placeholderText;
    unsigned int _dividerStyle;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (void)_scrollCaretToVisible:(id)arg1;
+ (unsigned int)deviceScaledMaximumNumberOfLinesWithAttachment:(BOOL)arg1;
+ (void)initialize;
@property(nonatomic) BOOL shouldHideTextViewBackground; // @synthesize shouldHideTextViewBackground=_shouldHideTextViewBackground;
@property(nonatomic) BOOL shouldHideTopBorder; // @synthesize shouldHideTopBorder=_shouldHideTopBorder;
@property(nonatomic) BOOL shouldToggleLeftAccessoryView; // @synthesize shouldToggleLeftAccessoryView=_shouldToggleLeftAccessoryView;
@property(nonatomic) BOOL shouldToggleSendButton; // @synthesize shouldToggleSendButton=_shouldToggleSendButton;
@property(nonatomic) unsigned int dividerStyle; // @synthesize dividerStyle=_dividerStyle;
@property(nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(readonly, nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) __weak id <FBGrowingComposerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) UIView *textViewAccessoryView; // @synthesize textViewAccessoryView=_textViewAccessoryView;
@property(retain, nonatomic) UIView *topAccessoryView; // @synthesize topAccessoryView=_topAccessoryView;
@property(copy, nonatomic) UIView *rightAccessoryView; // @synthesize rightAccessoryView=_rightAccessoryView;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_hack_cancelScrollCaretToVisibleAfterDelay;
- (void)_hack_scrollCaretToVisibleAfterDelay;
- (void)_textViewBackgroundViewTapped:(id)arg1;
- (BOOL)_hitTestExtendedButton:(id)arg1 point:(struct CGPoint)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)textViewShouldReturn:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (struct CGRect)_textViewAccessoryFrameForContentRect:(struct CGRect)arg1 topAccessoryFrame:(struct CGRect)arg2;
- (struct CGRect)_textViewFrameForContentRect:(struct CGRect)arg1 topAccessoryFrame:(struct CGRect)arg2;
- (struct CGRect)_textContentRectForContentRect:(struct CGRect)arg1 topAccessoryFrame:(struct CGRect)arg2;
- (struct CGRect)_placeholderFrameForContentRect:(struct CGRect)arg1 topAccessoryFrame:(struct CGRect)arg2;
- (struct CGRect)_topAccessoryFrameForTextViewBackgroundRect:(struct CGRect)arg1;
- (struct UIEdgeInsets)_textViewBackgroundContentEdgeInsets;
- (struct CGRect)_textViewBackgroundFrameForContentRect:(struct CGRect)arg1;
- (struct CGRect)_sendButtonFrameForContentRect:(struct CGRect)arg1;
- (struct CGRect)_rightAccessoryViewFrameForContentRect:(struct CGRect)arg1;
- (struct CGRect)_leftAccessoryViewFrameForContentRect:(struct CGRect)arg1;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)_textViewBackgroundPadding;
- (float)_viewXSpacing;
- (float)_viewYSpacing;
- (void)_checkNeedsResize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didReceiveAccessibilityInvalidation;
- (BOOL)_shouldHideLeftAccessoryView;
- (BOOL)_shouldHideRightAccessoryView;
- (BOOL)_shouldHideSendButton;
- (BOOL)_shouldHidePlaceholder;
- (BOOL)_shouldUseSendButtonGlyph;
@property(readonly, copy, nonatomic) NSString *text;
@property(readonly, nonatomic) UITextView *textView;
@property(nonatomic) BOOL dividerHidden;
@property(nonatomic) BOOL shouldHideCaret;
@property(nonatomic) unsigned int maximumNumberOfLines;
@property(nonatomic, getter=isEditable) BOOL editable;
- (void)_updateToggleAccessoryViewsAndSendButtonAnimated:(BOOL)arg1 force:(BOOL)arg2;
- (void)updateSendButtonEnabledAnimated:(BOOL)arg1;
- (void)_prepareWithBubbleWithCameraComposerStyle;
- (void)_prepareWithDefaultWithCameraComposerStyle;
- (void)_prepareWithPopoverOverlayStyle;
- (void)_prepareWithMinimalStyle;
- (void)_prepareForFullWidthContainerStyle;
- (void)_prepareWithBlackStyle;
- (void)_prepareWithNormalStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

