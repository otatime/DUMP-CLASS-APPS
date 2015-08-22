//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNSelfieCamEnhancementsExperimentContext : FBExperimentContext
{
    BOOL _fasterCamera;
    BOOL _useAutoEnhance;
    BOOL _combinedPhotoCamTray;
    BOOL _combinedPhotoTrayIcon;
    BOOL _defaultToFullScreen;
    BOOL _shouldShowPreviewStep;
    BOOL _shouldAllowDrawAndTextPhotoEditing;
}

+ (id)experimentName;
+ (id)parameterConfigurations;
@property(readonly, nonatomic) BOOL shouldAllowDrawAndTextPhotoEditing; // @synthesize shouldAllowDrawAndTextPhotoEditing=_shouldAllowDrawAndTextPhotoEditing;
@property(readonly, nonatomic) BOOL shouldShowPreviewStep; // @synthesize shouldShowPreviewStep=_shouldShowPreviewStep;
@property(readonly, nonatomic) BOOL defaultToFullScreen; // @synthesize defaultToFullScreen=_defaultToFullScreen;
@property(readonly, nonatomic) BOOL combinedPhotoTrayIcon; // @synthesize combinedPhotoTrayIcon=_combinedPhotoTrayIcon;
@property(readonly, nonatomic) BOOL combinedPhotoCamTray; // @synthesize combinedPhotoCamTray=_combinedPhotoCamTray;
@property(readonly, nonatomic) BOOL useAutoEnhance; // @synthesize useAutoEnhance=_useAutoEnhance;
@property(readonly, nonatomic) BOOL fasterCamera; // @synthesize fasterCamera=_fasterCamera;

@end

