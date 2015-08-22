//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HPGrowingTextViewDelegate.h"

@class HPGrowingTextView, NSString, UIColor, UIFont, UIImageView;

@interface CBLGrowingTextView : UIView <HPGrowingTextViewDelegate>
{
    id <CBLGrowingTextViewDelegate> _delegate;
    int _maxCharacterLimit;
    HPGrowingTextView *_inputField;
    UIImageView *_backgroundImageView;
    UIView *_inputFieldContainer;
}

+ (float)growingTextViewHeightForInternalHeight:(float)arg1;
+ (struct UIEdgeInsets)backgroundPadding;
+ (struct UIEdgeInsets)newContentInsets;
+ (struct UIEdgeInsets)oldContentInsets;
@property(retain, nonatomic) UIView *inputFieldContainer; // @synthesize inputFieldContainer=_inputFieldContainer;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) HPGrowingTextView *inputField; // @synthesize inputField=_inputField;
@property(nonatomic) int maxCharacterLimit; // @synthesize maxCharacterLimit=_maxCharacterLimit;
@property(nonatomic) __weak id <CBLGrowingTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text;
- (float)naturalHeight;
- (float)inputFieldWidth;
- (float)coreHeight;
- (float)coreWidth;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (BOOL)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 didChangeHeight:(float)arg2;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (BOOL)endEditing:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsWithinputFieldHeight:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
