//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLNavigationControllerBaseTransition.h"

#import "UINavigationControllerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface CBLPinCloseupTransition : CBLNavigationControllerBaseTransition <UINavigationControllerDelegate, UIViewControllerAnimatedTransitioning>
{
}

- (struct CATransform3D)layerTransformForView:(id)arg1 toFrame:(struct CGRect)arg2;
- (struct CGAffineTransform)affineTransformForView:(id)arg1 toFitFrame:(struct CGRect)arg2;
- (id)dimViewForViewForContainer:(id)arg1;
- (id)transitioningViewForViewClasses:(id)arg1 pin:(id)arg2 containerView:(id)arg3 currentHeight:(float)arg4 cellWidth:(float)arg5 offset:(struct CGPoint)arg6;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

