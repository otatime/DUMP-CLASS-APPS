//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FBTextView, UIView;

@interface FBEventsComposerTextInputCell : UICollectionViewCell
{
    UIView *_separatorView;
    FBTextView *_textView;
    struct UIEdgeInsets _edgeInsets;
}

+ (struct UIEdgeInsets)defaultEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) FBTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
