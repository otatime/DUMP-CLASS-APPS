//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBFlexibleSplitContainerView, UIColor;

@interface FBFlexibleSplitView : UIView
{
    UIView *_statusBarBackground;
    BOOL _headerViewHidden;
    BOOL _slideFlexibleView;
    BOOL _expandFlexibleView;
    BOOL _headerHidden;
    BOOL _hasDivider;
    BOOL _showColoredStatusBar;
    UIColor *_statusBarColor;
    UIView *_dividerView;
    UIView *_headerView;
    FBFlexibleSplitContainerView *_leftContainerView;
    FBFlexibleSplitContainerView *_rightContainerView;
    int _type;
    float _fixedViewWidth;
    float _flexibleViewWidth;
    float _dividerExtensionHeight;
    float _topLayoutGuideLength;
    float _bottomLayoutGuideLength;
    float _dividerPosition;
}

@property(nonatomic) float dividerPosition; // @synthesize dividerPosition=_dividerPosition;
@property(nonatomic) float bottomLayoutGuideLength; // @synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength;
@property(nonatomic) float topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
@property(nonatomic) BOOL showColoredStatusBar; // @synthesize showColoredStatusBar=_showColoredStatusBar;
@property(nonatomic) BOOL hasDivider; // @synthesize hasDivider=_hasDivider;
@property(nonatomic) float dividerExtensionHeight; // @synthesize dividerExtensionHeight=_dividerExtensionHeight;
@property(nonatomic) BOOL headerHidden; // @synthesize headerHidden=_headerHidden;
@property(nonatomic) BOOL expandFlexibleView; // @synthesize expandFlexibleView=_expandFlexibleView;
@property(nonatomic) BOOL slideFlexibleView; // @synthesize slideFlexibleView=_slideFlexibleView;
@property(nonatomic) float flexibleViewWidth; // @synthesize flexibleViewWidth=_flexibleViewWidth;
@property(nonatomic) float fixedViewWidth; // @synthesize fixedViewWidth=_fixedViewWidth;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) FBFlexibleSplitContainerView *rightContainerView; // @synthesize rightContainerView=_rightContainerView;
@property(readonly, nonatomic) FBFlexibleSplitContainerView *leftContainerView; // @synthesize leftContainerView=_leftContainerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
- (void).cxx_destruct;
- (void)_updateDividerPosition;
- (struct CGRect)_contentBounds;
- (void)layoutSubviews;
- (void)_layoutRightContainerView;
- (void)_layoutLeftContainerView;
- (void)_layoutDividerView;
- (void)_layoutHeaderView;
- (struct CGRect)_headerRectForBounds:(struct CGRect)arg1;
- (void)_layoutStatusBarBackground;
@property(retain, nonatomic) UIColor *statusBarColor; // @synthesize statusBarColor=_statusBarColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

