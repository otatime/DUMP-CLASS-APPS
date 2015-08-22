//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIKeyInput.h"
#import "UITextInputTraits.h"

@class NSMutableString, NSString;

@interface FBMPaymentPasscodeInputView : UIView <UIKeyInput, UITextInputTraits>
{
    NSMutableString *_storage;
    id <FBMPaymentPasscodeInputViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMPaymentPasscodeInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) int keyboardType;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)canBecomeFirstResponder;
@property(readonly, copy, nonatomic) NSString *inputText;
- (void)reset;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end
