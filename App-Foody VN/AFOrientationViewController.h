//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

#import "AFStraightenOverlayDelegate.h"

@class AFOrientationProcessor, NSString;

@interface AFOrientationViewController : AFToolViewController <AFStraightenOverlayDelegate>
{
    BOOL _requiresApply;
    BOOL _rotateReversed;
    BOOL _flipReversed;
    AFOrientationProcessor *_orientationProcessor;
    float _currentStraightenRotation;
    float _currentStraightenScale;
    struct CGAffineTransform _transform;
    struct CGAffineTransform _originalTransform;
    struct CGAffineTransform _straightenBaselineTransform;
    struct CGAffineTransform _currentImageViewTransform;
}

+ (BOOL)needsFullScreenOverlay;
+ (Class)staticOverlayViewClass;
+ (BOOL)requiresZoom;
@property(nonatomic) struct CGAffineTransform currentImageViewTransform; // @synthesize currentImageViewTransform=_currentImageViewTransform;
@property(nonatomic) struct CGAffineTransform straightenBaselineTransform; // @synthesize straightenBaselineTransform=_straightenBaselineTransform;
@property(nonatomic) float currentStraightenScale; // @synthesize currentStraightenScale=_currentStraightenScale;
@property(nonatomic) float currentStraightenRotation; // @synthesize currentStraightenRotation=_currentStraightenRotation;
@property(nonatomic) BOOL flipReversed; // @synthesize flipReversed=_flipReversed;
@property(nonatomic) BOOL rotateReversed; // @synthesize rotateReversed=_rotateReversed;
@property(nonatomic) struct CGAffineTransform originalTransform; // @synthesize originalTransform=_originalTransform;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(retain, nonatomic) AFOrientationProcessor *orientationProcessor; // @synthesize orientationProcessor=_orientationProcessor;
@property(nonatomic) BOOL requiresApply; // @synthesize requiresApply=_requiresApply;
- (void).cxx_destruct;
- (void)reportApplied;
- (void)finishApplying;
- (id)outputProcessor;
- (BOOL)isEmptyApply;
- (void)setOverlayImageFrame;
- (void)resetStraighten;
- (void)straightenOverlay:(id)arg1 didStraightenWithValue:(float)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)flipHorizontal:(BOOL)arg1;
- (void)rotateClockwise:(BOOL)arg1;
- (struct CGAffineTransform)imageViewTransformForRotation;
- (struct CGAffineTransform)rotatingImageViewTransform;
- (struct CGAffineTransform)imageViewTransform;
- (struct CGSize)preferredScrollingViewSize;
- (void)setSliderHandle:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)applyButtonPressed:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willDismissToolViewControllerAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithRenderInstance:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
