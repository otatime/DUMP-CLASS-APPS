//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "FBSecondaryNavigationControl.h"

@class FBHighlightTabBar, NSDictionary, NSString, UIScrollView, UISegmentedControl;

@interface FBSecondaryNavigationControl : UIControl <FBSecondaryNavigationControl>
{
    UISegmentedControl *_segmentedControl;
    UIScrollView *_scrollView;
    FBHighlightTabBar *_highlightBar;
    BOOL _apportionsSegmentWidthsByContent;
    NSDictionary *_titlesToShortTitles;
}

+ (id)secondaryNavigationControlWithItems:(id)arg1;
@property(nonatomic) BOOL apportionsSegmentWidthsByContent; // @synthesize apportionsSegmentWidthsByContent=_apportionsSegmentWidthsByContent;
@property(copy, nonatomic) NSDictionary *titlesToShortTitles; // @synthesize titlesToShortTitles=_titlesToShortTitles;
- (void).cxx_destruct;
- (id)_fontForSegmentedControl;
- (void)_segmentedControlValueChanged:(id)arg1;
- (void)removeAllSegments;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setPagingProgress:(float)arg1;
@property(nonatomic) int selectedSegmentIndex;
- (float)widthForSegmentAtIndex:(int)arg1;
- (void)_scrollIfNecessary;
- (void)_configureWithFlatDesign;
- (void)customizeTitleTextAttributes:(id)arg1 state:(unsigned int)arg2;
- (void)_setupScrollingSegments;
- (void)shortenTitlesIfNeeded;
- (float)apportionSegmentWidthsByContent;
- (float)maximumWidthForSegmentAtIndex:(unsigned int)arg1;
- (float)minimumWidthForSegmentAtIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
