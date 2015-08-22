//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView, UIImageView;

@interface FBItemContentSummaryDisclosureView : UIView
{
    FBRichTextView *_disclosureTextView;
    UIImageView *_disclosureImageView;
    struct UIEdgeInsets _labelInsets;
    BOOL _hasDisclosureIcon;
    unsigned int _disclosureIconViewPosition;
    unsigned int _glyphName;
    unsigned int _glyphSize;
    unsigned int _glyphShading;
}

+ (float)widthConstrainedToSize:(struct CGSize)arg1 disclosureTextView:(id)arg2 hasDisclosureIcon:(BOOL)arg3 glyphSize:(unsigned int)arg4;
+ (struct CGSize)viewSizeConstrainedToSize:(struct CGSize)arg1 disclosureTextView:(id)arg2 hasDisclosureIcon:(BOOL)arg3 contentSizes:(id *)arg4 glyphSize:(unsigned int)arg5;
+ (struct UIEdgeInsets)disclosureLabelInsets;
+ (void)initialize;
@property(nonatomic) unsigned int glyphShading; // @synthesize glyphShading=_glyphShading;
@property(nonatomic) unsigned int glyphSize; // @synthesize glyphSize=_glyphSize;
@property(nonatomic) unsigned int glyphName; // @synthesize glyphName=_glyphName;
@property(nonatomic) BOOL hasDisclosureIcon; // @synthesize hasDisclosureIcon=_hasDisclosureIcon;
@property(nonatomic) unsigned int disclosureIconViewPosition; // @synthesize disclosureIconViewPosition=_disclosureIconViewPosition;
- (void).cxx_destruct;
- (void)_glyphParametersDidChange;
- (BOOL)isAccessibilityElement;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) FBRichTextView *disclosureTextView;
- (void)setDisclosureIconViewPosition:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
