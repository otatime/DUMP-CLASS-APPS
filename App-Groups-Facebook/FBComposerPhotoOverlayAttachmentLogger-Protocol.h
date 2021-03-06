//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCreativeEditingToolsLogger.h"

@class NSString;

@protocol FBComposerPhotoOverlayAttachmentLogger <FBCreativeEditingToolsLogger>
- (void)logSizedPhotoOverlayAttachmentForPhotoWithAssetID:(NSString *)arg1;
- (void)logRotatedPhotoOverlayAttachmentForPhotoWithAssetID:(NSString *)arg1;
- (void)logMovedPhotoOverlayAttachmentForPhotoWithAssetID:(NSString *)arg1;
- (void)logHitDoneFromPhotoOverlayAttachmentsFlowForPhotoWithAssetID:(NSString *)arg1;
- (void)logHitCancelFromPhotoOverlayAttachmentsFlowForPhotoWithAssetID:(NSString *)arg1;
- (void)didRemovePhotoOverlayAttachmentFromPhotoWithAssetID:(NSString *)arg1;
- (void)didRemovePhotoWithAssetID:(NSString *)arg1;
- (void)didHitCancelWithPhotoOverlayAttachmentAmount:(unsigned int)arg1 forAssetID:(NSString *)arg2;
- (void)didEnterEditingForAssetID:(NSString *)arg1;
- (void)didAddPhotoOverlayAttachmentToPhotoWithAssetID:(NSString *)arg1;
- (void)didAddPhotoWithAssetID:(NSString *)arg1;
- (id)initWithCompositionID:(NSString *)arg1 source:(unsigned int)arg2;
@end

