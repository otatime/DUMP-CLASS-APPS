//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFBaseViewController.h"

#import "PSPDFPopoverControllerDismissable.h"
#import "PSPDFStyleable.h"
#import "UITextViewDelegate.h"

@class NSArray, NSString, PSPDFAnnotation, PSPDFGradientView, PSPDFKeyboardTracker, UIBarButtonItem, UIColor, UIPopoverController, UITapGestureRecognizer, UITextView, UIView;

@interface PSPDFNoteAnnotationViewController : PSPDFBaseViewController <UITextViewDelegate, PSPDFPopoverControllerDismissable, PSPDFStyleable>
{
    struct {
        unsigned int textViewIsDestroyed:1;
    } _flags;
    BOOL _isInPopover;
    BOOL _allowEditing;
    BOOL _showColorAndIconOptions;
    BOOL _showCopyButton;
    BOOL _shouldBeginEditModeWhenPresented;
    PSPDFAnnotation *_annotation;
    UITextView *_textView;
    NSArray *_iconButtons;
    PSPDFGradientView *_backgroundView;
    UIView *_optionsView;
    UIColor *_borderColor;
    UITapGestureRecognizer *_tapGesture;
    UIBarButtonItem *_trashBarButtonItem;
    id <PSPDFNoteAnnotationViewControllerDelegate> _delegateProxy;
    PSPDFKeyboardTracker *_keyboardTracker;
}

@property(retain, nonatomic) PSPDFKeyboardTracker *keyboardTracker; // @synthesize keyboardTracker=_keyboardTracker;
@property(retain, nonatomic) id <PSPDFNoteAnnotationViewControllerDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) UIBarButtonItem *trashBarButtonItem; // @synthesize trashBarButtonItem=_trashBarButtonItem;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) PSPDFGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSArray *iconButtons; // @synthesize iconButtons=_iconButtons;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL shouldBeginEditModeWhenPresented; // @synthesize shouldBeginEditModeWhenPresented=_shouldBeginEditModeWhenPresented;
@property(nonatomic) BOOL showCopyButton; // @synthesize showCopyButton=_showCopyButton;
@property(nonatomic) BOOL showColorAndIconOptions; // @synthesize showColorAndIconOptions=_showColorAndIconOptions;
@property(nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
@property(nonatomic) BOOL isInPopover; // @synthesize isInPopover=_isInPopover;
@property(retain, nonatomic) PSPDFAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)willDismissPopover:(id)arg1 animated:(BOOL)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)contentSizeDidChange;
- (void)documentWillSave:(id)arg1;
- (void)annotationChangedNotification:(id)arg1;
- (void)saveTextChanges;
- (BOOL)beginEditing;
- (void)tapped:(id)arg1;
- (void)updateTextView;
- (void)updateIconButtonColors;
- (void)changeIcon:(id)arg1;
- (void)updateBackgroundColorsAnimated:(BOOL)arg1;
- (void)changeColor:(id)arg1;
- (void)callDelegateDidChangeWithProperties:(id)arg1;
- (void)copyToClipboard;
- (void)toggleOptions:(id)arg1;
- (void)showOptions:(BOOL)arg1;
- (BOOL)isOptionsViewVisible;
- (id)iconNames;
- (void)deleteOrClearAnnotationWithoutConfirmation;
- (void)deleteAnnotation:(id)arg1;
- (BOOL)shouldDeleteCurrentAnnotation;
- (id)deleteAnnotationActionTitle;
- (id)policy;
- (void)updateTextViewContentInset;
- (void)viewDidLayoutSubviews;
- (void)updateToolbar;
- (void)setupToolbar;
- (id)customRightBarButtonItems;
- (id)customLeftBarButtonItems;
- (id)filterOwnBarButtonItemsForArray:(id)arg1;
- (void)destroyTextView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupBackgroundView;
- (void)setupOptionView;
- (void)setupTextView;
- (void)setupKeyboardTracker;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) __weak id <PSPDFNoteAnnotationViewControllerDelegate> delegate;

// Remaining properties
@property(nonatomic) int barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL isBarTranslucent;
@property(nonatomic) __weak UIPopoverController *parentPopoverController;
@property(nonatomic) BOOL prefersStatusBarHidden;
@property(readonly) Class superclass;

@end

