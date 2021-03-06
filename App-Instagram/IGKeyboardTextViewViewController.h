//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGAutocompleteControllerTextInput.h"
#import "UITextViewDelegate.h"

@class IGButton, NSString, UIControl, UILabel, UITextView, UIView;

@interface IGKeyboardTextViewViewController : UIViewController <UITextViewDelegate, IGAutocompleteControllerTextInput>
{
    BOOL _heartIsRed;
    id <IGKeyboardTextViewViewController> _delegate;
    float _textContentLayoutHeight;
    UITextView *_textView;
    IGButton *_sendButton;
    IGButton *_doneButton;
    IGButton *_dotDotDotButton;
    IGButton *_likeButton;
    UIView *_keyboard;
    UIControl *_textViewContainer;
    UILabel *_placeholderLabel;
}

+ (float)maxHeight;
+ (float)defaultHeight;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIControl *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain, nonatomic) UIView *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) IGButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) IGButton *dotDotDotButton; // @synthesize dotDotDotButton=_dotDotDotButton;
@property(retain, nonatomic) IGButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) IGButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) float textContentLayoutHeight; // @synthesize textContentLayoutHeight=_textContentLayoutHeight;
@property(nonatomic, getter=isHeartRed) BOOL heartIsRed; // @synthesize heartIsRed=_heartIsRed;
@property(nonatomic) __weak id <IGKeyboardTextViewViewController> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)beginningOfDocument;
- (id)accessibilityValue;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)lineCount;
- (float)textHeight;
- (void)likeAction:(id)arg1;
- (void)otherAction:(id)arg1;
- (void)sendAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)beginEditing;
@property(nonatomic) struct _NSRange selectedRange;
@property(copy, nonatomic) NSString *text;
- (void)clearText;
@property(readonly, nonatomic) BOOL isEditingText;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

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
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end

