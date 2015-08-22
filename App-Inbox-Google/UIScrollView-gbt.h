//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface UIScrollView (gbt)
- (void)gbt_updateDropShadow:(id)arg1;
- (id)gbt_addDropShadow;
- (BOOL)gbt_shouldHideDropShadowWithOffset:(float)arg1;
- (BOOL)gbt_shouldHideDropShadow;
- (float)gbt_normalizedContentOffsetY;
- (struct CGRect)gbt_visibleContentRect;
- (float)gbt_constrainedHorizontalOffsetForOffset:(float)arg1;
- (float)gbt_constrainedVerticalOffsetForOffset:(float)arg1;
- (void)gbt_updateContentSizeWidth:(float)arg1;
- (void)gbt_updateContentSizeHeight:(float)arg1;
- (void)gbt_scrollToBottom;
- (void)gbt_scrollToTop;
- (float)gbt_maxHorizontalScrollOffset;
- (float)gbt_maxVerticalScrollOffset;
- (struct CGSize)gbt_contentSizeWithInset;
- (struct CGPoint)gbt_verticalBoundaryBaseContentOffset;
- (float)gbt_bottomOffset;
- (BOOL)gbt_isNearBottomHeight:(float)arg1;
- (BOOL)gbt_isNearBottom;
- (BOOL)gbt_isPastScrollBoundary;
- (BOOL)gbt_canScrollHorizontally;
- (BOOL)gbt_canScrollVertically;
@end
