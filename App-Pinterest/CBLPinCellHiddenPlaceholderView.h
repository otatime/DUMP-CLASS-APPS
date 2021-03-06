//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CBLPinCellLayoutAttributes, UILabel, UITapGestureRecognizer;

@interface CBLPinCellHiddenPlaceholderView : UIView
{
    UILabel *_label;
    UITapGestureRecognizer *_tapRecognizer;
    id <CBLPinCellHiddenPlaceholderViewTapDelegate> _delegate;
    int _hiddenState;
    CBLPinCellLayoutAttributes *_layoutAttributes;
}

+ (float)heightForHiddenState:(int)arg1 withLayoutAttributes:(id)arg2;
+ (id)attributedStringForHiddenState:(int)arg1 withLayoutAttributes:(id)arg2;
@property(retain, nonatomic) CBLPinCellLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) int hiddenState; // @synthesize hiddenState=_hiddenState;
@property(nonatomic) __weak id <CBLPinCellHiddenPlaceholderViewTapDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)wasTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

