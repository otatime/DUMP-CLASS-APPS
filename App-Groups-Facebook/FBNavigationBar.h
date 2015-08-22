//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

@class UIView;

@interface FBNavigationBar : UINavigationBar
{
    UIView *_shadowView;
    float _shadowViewOverlap;
    int _preferredStatusBarStyle;
    id <FBNavigationBarLayoutDelegate> _layoutDelegate;
}

+ (id)defaultShadowImage;
@property(nonatomic) __weak id <FBNavigationBarLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) int preferredStatusBarStyle; // @synthesize preferredStatusBarStyle=_preferredStatusBarStyle;
@property(nonatomic) float shadowViewOverlap; // @synthesize shadowViewOverlap=_shadowViewOverlap;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)setShadowImage:(id)arg1;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
