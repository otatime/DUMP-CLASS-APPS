//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

#import "UINavigationBarDelegate.h"

@class IGPassthroughView, NSString;

@interface IGNavigationBar : UINavigationBar <UINavigationBarDelegate>
{
    BOOL _overlaysStatusBar;
    float _contentAlpha;
    IGPassthroughView *_overlayView;
    IGPassthroughView *_contentAlphaView;
}

@property(retain, nonatomic) IGPassthroughView *contentAlphaView; // @synthesize contentAlphaView=_contentAlphaView;
@property(retain, nonatomic) IGPassthroughView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) float contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(nonatomic) BOOL overlaysStatusBar; // @synthesize overlaysStatusBar=_overlaysStatusBar;
- (void).cxx_destruct;
- (id)findShadowViewInView:(id)arg1;
- (void)removeShadowView;
- (void)layoutSubviews;
- (void)onStatusBarFrameChange:(id)arg1;
- (void)setDisplaysShadow:(BOOL)arg1 animated:(BOOL)arg2;
- (id)preferedBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
