//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

#import "CBLKeyboardToolbarDelegate.h"
#import "UITextFieldDelegate.h"

@class CBLCommerceTextField, CBLKeyboardToolbar, NSArray, NSString, PTKCard, PTKCardCVC, PTKCardExpiry, PTKCardNumber, UIButton, UIImageView;

@interface CBLCreditCardForm : CBLTraitCollectionView <UITextFieldDelegate, CBLKeyboardToolbarDelegate>
{
    id <CBLCreditCardFormDelegate> _delegate;
    UIImageView *_cardImageView;
    CBLCommerceTextField *_cardNumberField;
    CBLCommerceTextField *_cardExpirationField;
    CBLCommerceTextField *_cardCVVField;
    UIButton *_cameraButton;
    CBLKeyboardToolbar *_keyboardToolbar;
}

+ (float)totalHeight;
@property(readonly, nonatomic) CBLKeyboardToolbar *keyboardToolbar; // @synthesize keyboardToolbar=_keyboardToolbar;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) CBLCommerceTextField *cardCVVField; // @synthesize cardCVVField=_cardCVVField;
@property(retain, nonatomic) CBLCommerceTextField *cardExpirationField; // @synthesize cardExpirationField=_cardExpirationField;
@property(retain, nonatomic) CBLCommerceTextField *cardNumberField; // @synthesize cardNumberField=_cardNumberField;
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(nonatomic) __weak id <CBLCreditCardFormDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)createCameraButton;
- (void)updateCardImage;
- (void)setCameraButtonHidden:(BOOL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (id)firstResponderField;
- (id)nextFirstResponder;
- (id)firstInvalidField;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)checkValid;
- (void)configureKeyboardToolbar;
- (void)configureValidators;
- (void)configureDefaultPlaceholders;
- (void)cameraButtonTapped:(id)arg1;
- (void)CBLKeyboardToolbarDoneTapped:(id)arg1;
- (void)refreshCameraForPermissions;
- (void)highlightInvalidFields;
- (void)removeValidators;
- (BOOL)isValid;
- (BOOL)cardCVCShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)cardExpirationShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)cardNumberFieldShouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) PTKCardCVC *cardCVC;
@property(readonly, nonatomic) PTKCardExpiry *cardExpiry;
@property(retain, nonatomic) PTKCardNumber *cardNumber;
@property(readonly, nonatomic) PTKCard *card;
@property(readonly, nonatomic) NSArray *editableFields;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 existingCard:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
