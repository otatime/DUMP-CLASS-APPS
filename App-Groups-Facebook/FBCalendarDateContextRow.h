//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView, UIButton;

@interface FBCalendarDateContextRow : UIView
{
    struct UIOffset _edgeInset;
    UIView *_contentView;
    UIView *_bottomSeparatorView;
    FBRichTextView *_titleLabel;
    UIButton *_accessoryButton;
}

@property(readonly, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(readonly, nonatomic) FBRichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

