//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBDeviceOrientationSensorDelegate.h"

@class FBDeviceOrientationSensor, FBInterpolatedValue, NSString;

@interface FBOrientationState : NSObject <FBDeviceOrientationSensorDelegate>
{
    id <FBOrientationStateDelegate> _delegate;
    id <FBRotatable> _rotatable;
    FBDeviceOrientationSensor *_sensor;
    int _interfaceOrientation;
    int _previousInterfaceOrientation;
    int _lastSupportedDeviceOrientation;
    float _orientationTransitionProgress;
    FBInterpolatedValue *_orientationRotationAngle;
}

@property(readonly, nonatomic) float orientationTransitionProgress; // @synthesize orientationTransitionProgress=_orientationTransitionProgress;
@property(readonly, nonatomic) int previousInterfaceOrientation; // @synthesize previousInterfaceOrientation=_previousInterfaceOrientation;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) __weak id <FBRotatable> rotatable; // @synthesize rotatable=_rotatable;
@property(nonatomic) __weak id <FBOrientationStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_willBeginRotationToOrientation:(int)arg1 fromOrientation:(int)arg2 animationConfig:(CDStruct_4dd922d4)arg3;
- (void)_didFinishRotationToOrientation:(int)arg1 fromOrientation:(int)arg2;
- (int)_interfaceOrientationForDeviceOrientation:(int)arg1;
- (void)_notifyDelegateOfOrientationChange;
- (BOOL)_supportsDeviceOrientation:(int)arg1;
- (BOOL)_shouldBlockChangeToInterfaceOrientation:(int)arg1;
- (void)deviceOrientationDidChange:(int)arg1;
- (id)_orientationTransitionAnimationWithConfig:(CDStruct_4dd922d4)arg1;
- (void)_updateForOrientationTransitionProgress:(float)arg1;
- (void)reset;
- (void)stopOrientationAnimation;
@property(readonly, nonatomic) BOOL isAnimatingOrientationRotation; // @dynamic isAnimatingOrientationRotation;
- (void)_updateRotatableForOrientationState:(id)arg1;
- (float)rotationForInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) int interfaceOrientationForCurrentDeviceOrientation; // @dynamic interfaceOrientationForCurrentDeviceOrientation;
- (void)_updateStatusBarOrientation;
- (void)setInterfaceOrientation:(int)arg1 animationConfig:(CDStruct_4dd922d4)arg2;
- (void)refresh;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 rotatable:(id)arg2 refreshImmediately:(BOOL)arg3 currentOrientation:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
