//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMediaPickerBaseTraits.h"

@interface FBMediaPickerForMagicStoryTraits : FBMediaPickerBaseTraits
{
    unsigned int _maximumPhotosSelected;
}

+ (id)traitsWithMaximumPhotosSelected:(unsigned int)arg1;
- (BOOL)canSelectMultiplePhotosAndVideos;
- (BOOL)textOnPhotosAllowed;
- (BOOL)stickersAllowed;
- (BOOL)allowPhotoEditing;
- (BOOL)allowFullScreenPhotoViewing;
- (BOOL)requireSquarePhoto;
- (unsigned int)maxPhotosSelected;
- (BOOL)allowFaceDetection;
- (BOOL)allowTagging;
- (id)initWithMaximumPhotosSelected:(unsigned int)arg1;
- (id)init;

@end

