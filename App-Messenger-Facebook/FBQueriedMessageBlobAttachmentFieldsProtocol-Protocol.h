//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemImage, FBMemPlatformApplication, FBMemVect2, NSArray, NSNumber, NSString;

@protocol FBQueriedMessageBlobAttachmentFieldsProtocol <FBModelObjectProtocol>
- (int)video_filesizeValue;
- (NSNumber *)video_filesize;
- (NSString *)videoType;
- (NSString *)urlString;
- (BOOL)renderAsStickerValue;
- (NSNumber *)renderAsSticker;
- (FBMemImage *)preview_thumbnail;
- (int)playableDurationValue;
- (NSNumber *)playableDuration;
- (FBMemVect2 *)originalDimensions;
- (NSString *)mimetype;
- (NSString *)legacyAttachmentId;
- (NSString *)imageType;
- (int)filesizeValue;
- (NSNumber *)filesize;
- (NSString *)filename;
- (FBMemImage *)custom_preview_image;
- (FBMemImage *)custom_full_screen_image;
- (FBMemImage *)custom_animated_preview_image;
- (FBMemImage *)custom_animated_full_screen_image;
- (NSString *)attributionMetadata;
- (NSArray *)attributionAppScopedIds;
- (FBMemPlatformApplication *)attributionApp;
@end

