//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOpenableAttachmentNode.h"

#import "FBDirectionalPanGestureRecognizerDelegate.h"
#import "FBRotatable.h"

@class FBDirectionalPanGestureRecognizer, FBInterpolatedValue, FBOrientationState, FBPinchGestureRecognizer, NSString, POPSpringAnimation, UIPanGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface FBPickUpAttachmentNode : FBOpenableAttachmentNode <FBDirectionalPanGestureRecognizerDelegate, FBRotatable>
{
    struct {
        struct CGPoint anchorPoint;
        struct CGRect bounds;
        struct CGPoint position;
    } _originalViewGeometry;
    unsigned int _supportedGestures;
    int _dismissalAxis;
    unsigned int _dismissalDirection;
    FBPinchGestureRecognizer *_pinchGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    FBDirectionalPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    float _lastInteractiveInteractionProgress;
    float _baseRotation;
    float _baseScale;
    POPSpringAnimation *_dropShadowOpacityAnimation;
    BOOL _supportsOrientationRotation;
    FBOrientationState *_orientationState;
    FBInterpolatedValue *_orientationSize;
    int _openedOrientation;
    BOOL _configuredForOpenedOrientation;
}

@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) BOOL supportsOrientationRotation; // @synthesize supportsOrientationRotation=_supportsOrientationRotation;
@property(nonatomic) unsigned int supportedGestures; // @synthesize supportedGestures=_supportedGestures;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setAnchorPointForTouchCentroid:(struct CGPoint)arg1;
- (void)_applyGestureComponentsToTransform;
- (BOOL)_gestureRecognizerIsPickupRecognizer:(id)arg1;
- (BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(int)arg2;
- (BOOL)orientationState:(id)arg1 supportsDeviceOrientation:(int)arg2;
- (BOOL)orientationState:(id)arg1 shouldBlockChangeToInterfaceOrientation:(int)arg2;
- (int)initialOpenedOrientation;
- (struct CGSize)openedHostSizeUnderOrientationRotation;
- (struct CGSize)rotatedSizeForOrientation:(int)arg1;
@property(readonly, nonatomic) int previousInterfaceOrientation; // @dynamic previousInterfaceOrientation;
@property(readonly, nonatomic) int interfaceOrientationForCurrentDeviceOrientation; // @dynamic interfaceOrientationForCurrentDeviceOrientation;
@property(readonly, nonatomic) int interfaceOrientation; // @dynamic interfaceOrientation;
@property(readonly, nonatomic) BOOL isAnimatingOrientationRotation; // @dynamic isAnimatingOrientationRotation;
- (void)_updateInteractionProgress:(float)arg1;
- (void)animationDidApply:(id)arg1;
- (float)pickUpFriction;
- (float)pickUpTension;
- (void)_animateFadeDropShadowToAlpha:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateToFrame:(struct CGRect)arg1 velocity:(struct _FBPickUpVelocity)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_stopAllAnimations;
- (BOOL)_anyAnimationsAreActive;
- (void)_updateCurrentAndStartDropShadowAnimationValues;
- (void)_putDownClosedWithVelocity:(struct _FBPickUpVelocity)arg1 animate:(BOOL)arg2;
- (void)_pickUpOpenWithVelocity:(struct _FBPickUpVelocity)arg1 animate:(BOOL)arg2;
- (void)_cancelPickUpGestureWithVelocity:(struct _FBPickUpVelocity)arg1;
- (void)_updatePickUpGesture;
- (void)_beginPickUpGesture;
- (void)mayClose;
- (void)mayOpen;
- (void)didOpen;
- (void)willOpen;
- (void)didClose;
- (struct CGPoint)initialDismissalCenterOffset;
- (void)applyOrientationRotation:(float)arg1 withProgress:(float)arg2;
- (void)willBeginRotationToOrientation:(int)arg1 fromOrientation:(int)arg2;
@property(readonly, nonatomic) float currentRotation; // @dynamic currentRotation;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handleTap:(id)arg1;
- (void)_handleGesture:(id)arg1;
- (void)_resetBaseGestureComponents;
@property(nonatomic) int dismissalAxis; // @dynamic dismissalAxis;
@property(nonatomic) unsigned int dismissalDirections; // @dynamic dismissalDirections;
- (void)_supportedGesturesChanged;
- (struct CGSize)pageableDimensionsForOrientation:(int)arg1;
- (id)dropShadowCastingLayers;
- (void)setGesturesEnabled:(BOOL)arg1;
- (void)closeAnimated:(BOOL)arg1;
- (void)openAnimated:(BOOL)arg1;
- (struct CGRect)closedFrameInView:(id)arg1;
- (void)didLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <FBPickUpAttachmentNodeDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
