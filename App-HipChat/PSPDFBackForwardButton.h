//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFButton.h"

@class UILongPressGestureRecognizer, UIView;

@interface PSPDFBackForwardButton : PSPDFButton
{
    unsigned int _buttonStyle;
    int _blurEffectStyle;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_blurView;
}

+ (id)forwardButton;
+ (id)backButton;
+ (id)buttonWithImage:(id)arg1;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic) int blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(nonatomic) unsigned int buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void).cxx_destruct;
- (void)recreateBlurView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
