//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMagicStoryComposition, FBMediaPickerViewController, FBNavigationInfo, FBPhotoAsset, NSArray, NSURL;

@protocol FBMediaPickerViewControllerDelegate <NSObject>
- (void)mediaPicker:(FBMediaPickerViewController *)arg1 didSelectMediaAssetAttachments:(NSArray *)arg2 fromSource:(int)arg3 currentPhotoAssetShown:(FBPhotoAsset *)arg4;
- (void)mediaPicker:(FBMediaPickerViewController *)arg1 openURL:(NSURL *)arg2;
- (void)mediaPickerPermissionDenied:(FBMediaPickerViewController *)arg1;

@optional
- (void)mediaPicker:(FBMediaPickerViewController *)arg1 presentWithNavigationInfo:(FBNavigationInfo *)arg2;
- (void)mediaPicker:(FBMediaPickerViewController *)arg1 didFailToOpenInvalidAttachment:(id <FBMediaAttachmentProtocol>)arg2;
- (void)mediaPicker:(FBMediaPickerViewController *)arg1 needsFullscreen:(BOOL)arg2;
- (void)mediaPickerDidClearMedia:(FBMediaPickerViewController *)arg1;
- (void)mediaPickerDidCancel:(FBMediaPickerViewController *)arg1;
- (void)mediaPickerDidReturn:(FBMediaPickerViewController *)arg1;
- (void)mediaPicker:(FBMediaPickerViewController *)arg1 navigateToMultiPhotoCreationTool:(unsigned int)arg2 withPhotoAttachments:(NSArray *)arg3;
- (void)mediaPicker:(FBMediaPickerViewController *)arg1 didSelectMagicStoryComposition:(FBMagicStoryComposition *)arg2;
@end
