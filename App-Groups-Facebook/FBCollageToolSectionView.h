//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class FBCollageToolPhotoAttachment, FBCollageToolSectionBorderView, NSString, UIImageView, UIScrollView;

@interface FBCollageToolSectionView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    BOOL _offsetChangeable;
    float _minScale;
    FBCollageToolSectionBorderView *_borderView;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    BOOL _leftMost;
    BOOL _rightMost;
    BOOL _topMost;
    BOOL _bottomMost;
    BOOL _selected;
    BOOL _highlighted;
    float _borderWidth;
    FBCollageToolPhotoAttachment *_collageToolPhotoAttachment;
    id <FBCollageToolSectionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCollageToolSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL bottomMost; // @synthesize bottomMost=_bottomMost;
@property(nonatomic) BOOL topMost; // @synthesize topMost=_topMost;
@property(nonatomic) BOOL rightMost; // @synthesize rightMost=_rightMost;
@property(nonatomic) BOOL leftMost; // @synthesize leftMost=_leftMost;
@property(retain, nonatomic) FBCollageToolPhotoAttachment *collageToolPhotoAttachment; // @synthesize collageToolPhotoAttachment=_collageToolPhotoAttachment;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateScrollViewScaleAndOffset;
- (void)_setupScrollView;
- (void)replaceWithAttachment:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithAttachment:(id)arg1;
@property(readonly, copy) NSString *debugDescription;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
