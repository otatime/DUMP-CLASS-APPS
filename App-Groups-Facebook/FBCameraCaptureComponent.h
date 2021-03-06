//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@interface FBCameraCaptureComponent : CKCompositeComponent
{
    id <FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
    id <FBCameraGenericEvent> _captureStateChangedToVideoEvent;
}

+ (id)newWithCaptureState:(unsigned int)arg1 captureStateChangedToPhotoEvent:(id)arg2 captureStateChangedToVideoEvent:(id)arg3 toolbox:(id)arg4;
- (void).cxx_destruct;
- (void)didTapCameraVideoButton;
- (void)didTapCameraPhotoButton;

@end

