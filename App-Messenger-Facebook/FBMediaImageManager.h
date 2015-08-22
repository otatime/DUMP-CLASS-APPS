//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession;

@interface FBMediaImageManager : NSObject
{
    FBUserSession *_session;
    id <FBMediaImageManagerListener> _listener;
}

- (void).cxx_destruct;
- (id)getBestDisplayImageForPhotoAsset:(id)arg1;
- (id)getDisplayThumbnailForPhotoAsset:(id)arg1;
- (void)updateThumbnailImage:(id)arg1 forPhotoAsset:(id)arg2;
- (void)updateImagesWithPhotosOverlaysLayer:(id)arg1 imageWithPhotoOverlayApplied:(id)arg2 forPhotoAsset:(id)arg3;
- (void)updateImagesFromEditsWithFilterer:(id)arg1 shouldReapplyCrop:(BOOL)arg2 forPhotoAsset:(id)arg3;
- (void)prepareImageForEditingFromPhotoAsset:(id)arg1 useCroppedPhoto:(BOOL)arg2 applyStickers:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadImageOnlyWithFilterFromPhotoAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareImageWithoutPhotoOverlayLayerForPhotoAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preFilterThumbnailForPhotoAsset:(id)arg1;
- (void)applyEditsToThumbForPhotoAsset:(id)arg1 preparer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyGPUFilters:(id)arg1 cpuFilterState:(id)arg2 toImage:(id)arg3 withCpuFilterMetadata:(id)arg4 withPhotoOverlayLayer:(id)arg5 withDerivedContext:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)applyGPUFilters:(id)arg1 cpuFilterState:(id)arg2 toImage:(id)arg3 withCpuFilterMetadata:(id)arg4 withDerivedContext:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)applyGPUFilters:(id)arg1 cpuFilterState:(id)arg2 toPhotoAsset:(id)arg3 withPreview:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_getPreFilterImageForPhotoAsset:(id)arg1;
- (void)_removeAllGPUFiltersFromPhotoAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyPhotoOverlayAttachmentsLayer:(id)arg1 photoOverlayAttachmentsInformation:(id)arg2 imageWithPhotoOverlayApplied:(id)arg3 toPhotoAsset:(id)arg4;
- (void)applyCropInfo:(id)arg1 toPhotoAsset:(id)arg2;
- (void)applyCPUFilter:(id)arg1 withPreview:(id)arg2 toPhotoAsset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeLuxFromPhotoAsset:(id)arg1 withPreview:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyLuxToPhotoAsset:(id)arg1 withPreview:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeRegularFilterFromPhotoAsset:(id)arg1 withPreview:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyRegularFilter:(id)arg1 withPreview:(id)arg2 toPhotoAsset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applyRegularFilterOnly:(id)arg1 withPreview:(id)arg2 toPhotoAsset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithSession:(id)arg1 listener:(id)arg2;
- (id)init;

@end

