//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, ZeroStateView;

@interface EmptyView : UIView
{
    UILabel *titleLabel_;
    ZeroStateView *zeroStateView_;
    unsigned int _emptyViewType;
}

+ (id)emptyViewWithFrame:(struct CGRect)arg1;
+ (id)emptyViewWithTitle:(id)arg1 frame:(struct CGRect)arg2;
+ (id)emptyViewWithNavigationType:(unsigned int)arg1 cluster:(id)arg2 showingAlternateItems:(BOOL)arg3 isReward:(BOOL)arg4 frame:(struct CGRect)arg5;
@property(nonatomic) unsigned int emptyViewType; // @synthesize emptyViewType=_emptyViewType;
@property(retain, nonatomic) ZeroStateView *zeroStateView; // @synthesize zeroStateView=zeroStateView_;
- (void).cxx_destruct;
- (void)updateZeroStateViewPositionWithOffsetY:(float)arg1;
- (id)accessibilityLabel;
- (void)hideZeroStateAnimated;
- (void)showZeroStateAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearTitle;
- (void)showTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setCustomView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
