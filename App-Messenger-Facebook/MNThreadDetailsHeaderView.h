//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class FBMStringWithRedactedDescription, MNProfileImageView, NSString, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UITextField;

@interface MNThreadDetailsHeaderView : UIView <UITextFieldDelegate>
{
    UILabel *_threadNameLabel;
    UILabel *_threadTimeLabel;
    UITextField *_editThreadNameTextField;
    UIImageView *_threadImageMaskView;
    UIButton *_changePictureButton;
    UIButton *_changeNameButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <MNAvatarImageDecorating> _avatarImageDecoration;
    BOOL _isThreadNameCustom;
    BOOL _isEditing;
    MNProfileImageView *_threadImageView;
    NSString *_presenceText;
    FBMStringWithRedactedDescription *_threadNameText;
    unsigned int _badgeType;
    id <MNThreadDetailsHeaderViewDelegate> _delegate;
}

@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak id <MNThreadDetailsHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int badgeType; // @synthesize badgeType=_badgeType;
@property(nonatomic) BOOL isThreadNameCustom; // @synthesize isThreadNameCustom=_isThreadNameCustom;
@property(copy, nonatomic) FBMStringWithRedactedDescription *threadNameText; // @synthesize threadNameText=_threadNameText;
@property(copy, nonatomic) NSString *presenceText; // @synthesize presenceText=_presenceText;
@property(readonly, nonatomic) MNProfileImageView *threadImageView; // @synthesize threadImageView=_threadImageView;
- (void).cxx_destruct;
- (void)_setThreadNameHighlighted:(BOOL)arg1;
- (void)_didTapHeaderView:(id)arg1;
- (void)_changeNameButtonTouchCancel:(id)arg1;
- (void)_changeNameButtonTouchUpOutside:(id)arg1;
- (void)_changeNameButtonTouchDown:(id)arg1;
- (void)_changeNameButtonPressed:(id)arg1;
- (void)_changePictureButtonPressed:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutSubviewsWithBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isImageViewButtonEnabled) BOOL imageViewButtonEnabled;
- (void)showKeyboard:(BOOL)arg1;
- (void)setIsEditing:(BOOL)arg1 showKeyboard:(BOOL)arg2;
- (id)threadNameTextFieldText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 avatarImageDecoration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

