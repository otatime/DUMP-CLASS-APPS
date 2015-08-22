//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView, UIButton, UILabel;

@interface MNMainTabNullStateView : UIView
{
    UILabel *_titleLabel;
    FBRichTextView *_subtitleLabel;
    UIButton *_callToActionButton;
    id <MNMainTabNullStateViewDelegate> _delegate;
}

+ (id)subtitleStyle;
+ (id)titleStyle;
@property(nonatomic) __weak id <MNMainTabNullStateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_handleLinkTapAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)attributedLabelAction:(id)arg1 withEvent:(id)arg2;
- (void)didTapCallToAction:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 callToAction:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
