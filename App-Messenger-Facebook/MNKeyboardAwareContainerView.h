//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface MNKeyboardAwareContainerView : UIView
{
    UIView *_contentView;
    struct CGRect _keyboardFrame;
}

@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
- (void).cxx_destruct;
- (float)_keyboardHeightInView;
- (void)setFrame:(struct CGRect)arg1;
- (void)_layoutContentView;
- (void)layoutSubviews;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

