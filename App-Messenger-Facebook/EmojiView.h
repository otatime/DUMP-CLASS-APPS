//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIGestureRecognizer, UILabel;

@interface EmojiView : UIView
{
    id <EmojiViewDelegate> _delegate;
    UILabel *_label;
    UIGestureRecognizer *_singleTap;
}

@property(retain, nonatomic) UIGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) id <EmojiViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setEmojiCharacter:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

