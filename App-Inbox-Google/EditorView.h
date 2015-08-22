//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EditorContentViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextInput.h"

@class EditorHandleView, EditorMagnifier, EditorTextRange, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UILabel, UITextChecker, UITextPosition, UITextRange;

@interface EditorView : UIView <EditorContentViewDelegate, UIScrollViewDelegate, UITextInput>
{
    BOOL animateNextLayout_;
    NSMutableArray *contentSubviews_;
    NSMutableDictionary *contentViewTypeOverrides_;
    BOOL contextMenuHidden_;
    struct CGRect contextMenuTarget_;
    UIView *contextMenuView_;
    UIView *cursor_;
    BOOL cursorBlinkState_;
    BOOL cursorMovedBackwards_;
    NSTimer *cursorTimer_;
    BOOL dragging_;
    EditorHandleView *handleLeft_;
    EditorHandleView *handleRight_;
    EditorMagnifier *magnifier_;
    UILabel *placeholderLabel_;
    EditorTextRange *rangeAtDragStart_;
    BOOL rangeDraggedAtLeft_;
    NSMutableArray *selectionRects_;
    NSMutableArray *spellCheckRects_;
    NSMutableArray *markRects_;
    UITextChecker *textChecker_;
    NSMutableArray *pasteboardHandlers_;
    NSMutableArray *contentTransforms_;
    id <UITextInputDelegate> inputDelegate;
    UITextRange *markedTextRange_;
    UITextRange *selectedTextRange_;
    EditorTextRange *spellCheckRange_;
    id <UITextInputTokenizer> tokenizer_;
    id <EditorViewDelegate> _delegate;
    float _horizontalMargin;
}

+ (id)defaultTextAttributes;
+ (BOOL)isSpellCheckSelector:(SEL)arg1;
+ (void)initialize;
@property(nonatomic) float horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) __weak id <EditorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EditorTextRange *spellCheckRange; // @synthesize spellCheckRange=spellCheckRange_;
@property(copy) UITextRange *selectedTextRange; // @synthesize selectedTextRange=selectedTextRange_;
@property(retain, nonatomic) UITextRange *markedTextRange; // @synthesize markedTextRange=markedTextRange_;
@property(nonatomic) id <UITextInputDelegate> inputDelegate; // @synthesize inputDelegate;
@property(readonly, nonatomic) NSArray *contentTransforms; // @synthesize contentTransforms=contentTransforms_;
- (void).cxx_destruct;
- (void)updateSpellCheckRects;
- (BOOL)isPositionOnSpellingMistake:(id)arg1;
- (void)spellCheckReplace:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)showSpellingCorrectionsForPosition:(id)arg1;
- (id)expandRangeToWordBoundaries:(id)arg1 adjustForPunctuation:(BOOL)arg2;
- (void)removeAttributes:(id)arg1 forRange:(id)arg2;
- (void)addAttributes:(id)arg1 forRange:(id)arg2;
- (void)removeSpellCheckInRange:(struct _NSRange)arg1;
- (void)updateSpellCheckInRange:(struct _NSRange)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)clearMenuViewAndTarget;
- (void)saveMenuView:(id)arg1 andTarget:(struct CGRect)arg2;
- (BOOL)contextMenuVisible;
- (void)hideContextMenuAndKeepSettings:(BOOL)arg1;
- (void)showContextMenu;
- (void)clearAndShowContextMenu;
- (void)updatePlaceholderLabelVisibility;
- (void)performBlock:(CDUnknownBlockType)arg1 forRange:(id)arg2;
- (void)updateHighlightRectsWithRange:(id)arg1 rectStore:(id)arg2 backgroundColor:(id)arg3 showHandles:(BOOL)arg4;
- (void)updateSelectionRects;
- (void)notifyDelegateOfTextDidChange;
- (void)toggleCursor;
- (void)updateCursor;
- (id)transformedAndPrunedContent:(id)arg1;
- (id)transformContentIfNeeded:(id)arg1;
- (Class)contentViewClassForContent:(id)arg1;
- (id)contentViewForContent:(id)arg1;
- (void)mergeSubviews;
- (int)insertContent:(id)arg1 atPosition:(id)arg2;
- (void)deleteContentInRange:(id)arg1;
- (id)contentInRange:(id)arg1;
- (id)viewAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)adjustPointForMargins:(struct CGPoint)arg1;
- (id)clipRange:(id)arg1 toView:(id)arg2;
- (id)convertRange:(id)arg1 fromView:(id)arg2;
- (id)convertRange:(id)arg1 toView:(id)arg2;
- (id)rangeForContentView:(id)arg1;
- (id)convertTextPosition:(id)arg1 toView:(id)arg2;
- (id)viewAtPosition:(id)arg1;
- (void)didDoubleTap:(id)arg1;
- (void)didLongPress:(id)arg1;
- (void)didDragHandle:(id)arg1;
- (void)didTap:(id)arg1;
- (void)createSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSDictionary *markedTextStyle; // @dynamic markedTextStyle;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (void)replaceRange:(id)arg1 withContent:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument; // @dynamic endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument; // @dynamic beginningOfDocument;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)textInRange:(id)arg1;
- (void)reshowHiddenMenu:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)canPaste;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)hasText;
- (void)deleteBackward;
- (void)removeContentViewAtIndex:(unsigned int)arg1;
- (void)insertText:(id)arg1;
- (id)insertContent:(id)arg1;
- (void)removeContentView:(id)arg1;
- (void)contentViewLoadedContent:(id)arg1;
- (void)contentViewAttachedToDraft:(id)arg1;
- (void)contentViewRemoved:(id)arg1;
- (void)contentView:(id)arg1 willShowMenuWithTarget:(struct CGRect)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer; // @synthesize tokenizer=tokenizer_;
@property(readonly, nonatomic) UIView *textInputView;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSString *placeholder; // @dynamic placeholder;
@property(readonly, nonatomic) int contentLength;
@property(retain, nonatomic) NSArray *content; // @dynamic content;
- (void)addContentTransform:(id)arg1;
- (void)setContentViewClass:(Class)arg1 forContentTypeClass:(Class)arg2;
- (id)contentViewAtIndex:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int selectionAffinity;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end
