//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLSearchResultProviderDelegate.h"
#import "CBLUserMentionsViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class CBLForgotPasswordView, CBLSearchResultProvider, CBLUserMentionsView, NSArray, NSCharacterSet, NSString, UIImageView, UITextView, UIView;

@interface CBLTextInputViewController : CBLBaseViewController <UITextFieldDelegate, UINavigationControllerDelegate, CBLSearchResultProviderDelegate, CBLUserMentionsViewDelegate, UITextViewDelegate>
{
    BOOL _forgotPassword;
    BOOL _email;
    BOOL _modal;
    BOOL _cancelable;
    BOOL _allowsMentions;
    id <CBLTextInputViewControllerDelegate> _delegate;
    UITextView *_textView;
    NSString *_initialText;
    NSCharacterSet *_characterSet;
    int _maxCharacterLength;
    int _autocapitalizationType;
    int _autocorrectionType;
    int _returnKeyType;
    int _keyboardType;
    NSString *_rightBarButtonText;
    CBLSearchResultProvider *_userMentionResultProvider;
    NSArray *_userMentionResults;
    CBLUserMentionsView *_userMentionScrollView;
    UIImageView *_navBarShadow;
    UIView *_userMentionsBackgroundView;
    UIImageView *_textViewBackground;
    CBLForgotPasswordView *_forgotPasswordView;
    struct _NSRange _userMentionRange;
    struct CGRect _textInputFrame;
}

@property(retain, nonatomic) CBLForgotPasswordView *forgotPasswordView; // @synthesize forgotPasswordView=_forgotPasswordView;
@property(retain, nonatomic) UIImageView *textViewBackground; // @synthesize textViewBackground=_textViewBackground;
@property(retain, nonatomic) UIView *userMentionsBackgroundView; // @synthesize userMentionsBackgroundView=_userMentionsBackgroundView;
@property(retain, nonatomic) UIImageView *navBarShadow; // @synthesize navBarShadow=_navBarShadow;
@property(nonatomic) BOOL allowsMentions; // @synthesize allowsMentions=_allowsMentions;
@property(retain, nonatomic) CBLUserMentionsView *userMentionScrollView; // @synthesize userMentionScrollView=_userMentionScrollView;
@property(nonatomic) struct _NSRange userMentionRange; // @synthesize userMentionRange=_userMentionRange;
@property(retain, nonatomic) NSArray *userMentionResults; // @synthesize userMentionResults=_userMentionResults;
@property(retain, nonatomic) CBLSearchResultProvider *userMentionResultProvider; // @synthesize userMentionResultProvider=_userMentionResultProvider;
@property(copy, nonatomic) NSString *rightBarButtonText; // @synthesize rightBarButtonText=_rightBarButtonText;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) int returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic) int autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic) int autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) int maxCharacterLength; // @synthesize maxCharacterLength=_maxCharacterLength;
@property(retain, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
@property(nonatomic) struct CGRect textInputFrame; // @synthesize textInputFrame=_textInputFrame;
@property(copy, nonatomic) NSString *initialText; // @synthesize initialText=_initialText;
@property(nonatomic) BOOL cancelable; // @synthesize cancelable=_cancelable;
@property(nonatomic) BOOL modal; // @synthesize modal=_modal;
@property(nonatomic) BOOL email; // @synthesize email=_email;
@property(nonatomic) BOOL forgotPassword; // @synthesize forgotPassword=_forgotPassword;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <CBLTextInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CBLUserMentionsViewDidTapContact:(id)arg1;
- (void)CBLSearchResultProviderDidClear;
- (void)CBLSearchResultProviderDidSuggest:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)descriptionViewInputDidFinishMention;
- (void)descriptionViewOnMentionWithUsername:(id)arg1 range:(struct _NSRange)arg2;
- (void)keyboardDidAppear:(id)arg1;
- (void)save:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)showKeyboard;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

