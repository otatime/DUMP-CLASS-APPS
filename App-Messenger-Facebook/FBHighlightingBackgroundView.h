//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTappableControl.h"

@class UIColor;

@interface FBHighlightingBackgroundView : FBTappableControl
{
    UIColor *_unhighlightedBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *unhighlightedBackgroundColor; // @synthesize unhighlightedBackgroundColor=_unhighlightedBackgroundColor;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;

@end

