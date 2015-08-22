//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface MNFadingButton : UIButton
{
    UIColor *_normalColor;
    UIColor *_highlightedColor;
}

@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)arg1;

@end
