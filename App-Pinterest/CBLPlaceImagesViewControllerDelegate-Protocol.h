//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLPlace, CBLPlaceImage;

@protocol CBLPlaceImagesViewControllerDelegate <NSObject>
- (void)CBLPlaceImagesViewControllerCameraSelectedForPlace:(CBLPlace *)arg1 cameraRect:(struct CGRect)arg2;
- (void)CBLPlaceImagesViewControllerImageSelected:(CBLPlaceImage *)arg1 forPlace:(CBLPlace *)arg2;
@end

