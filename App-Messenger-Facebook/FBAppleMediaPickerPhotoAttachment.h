//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPhotoAttachmentProtocol.h"
#import "NSCoding.h"

@class CLLocation, FBAssetMetadata, FBPhotoAssetEdits, NSArray, NSDate, NSMutableArray, NSString, NSURL, UIImage;

@interface FBAppleMediaPickerPhotoAttachment : NSObject <FBPhotoAttachmentProtocol, NSCoding>
{
    NSMutableArray *_publishedPhotoTags;
    NSURL *_temporaryImageFileName;
    BOOL _allowEditing;
    BOOL _allowRemoval;
    BOOL _showServerProcessingProgress;
    UIImage *_thumbnailImage;
    NSString *_assetID;
    FBAssetMetadata *_metadata;
    NSDate *_creationDate;
    NSArray *_tagsEdges;
    UIImage *_imageBeingWritten;
}

+ (id)propertiesToSkipForCoding;
@property(retain, nonatomic) UIImage *imageBeingWritten; // @synthesize imageBeingWritten=_imageBeingWritten;
@property(nonatomic) BOOL showServerProcessingProgress; // @synthesize showServerProcessingProgress=_showServerProcessingProgress;
@property(copy, nonatomic) NSArray *tagsEdges; // @synthesize tagsEdges=_tagsEdges;
@property(copy, nonatomic) NSArray *publishedPhotoTags; // @synthesize publishedPhotoTags=_publishedPhotoTags;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) FBAssetMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(nonatomic) BOOL allowRemoval; // @synthesize allowRemoval=_allowRemoval;
@property(nonatomic) BOOL allowEditing; // @synthesize allowEditing=_allowEditing;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void).cxx_destruct;
- (BOOL)isPhotoCropped;
@property(readonly, copy, nonatomic) NSString *existingFBID;
@property(readonly, nonatomic) BOOL requiresUpload;
@property(readonly, nonatomic) BOOL selectedFromMultiPicker;
- (BOOL)supportsQualitySampling;
- (void)loadImageDataForUploadWithCompressionRate:(float)arg1 maximumDimension:(int)arg2 specialCasePanoramas:(BOOL)arg3 loggingBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) struct CGSize imageSize;
- (void)updateNewMetadata:(id)arg1;
@property(retain, nonatomic) CLLocation *location;
- (void)saveImage:(id)arg1 forceResave:(BOOL)arg2;
- (void)saveImage:(id)arg1;
- (void)setThumbnailImageFromImage:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
- (unsigned int)attachmentType;
- (void)dealloc;
- (id)visualDedupRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *caption;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIImage *displayImage;
@property(retain, nonatomic) FBPhotoAssetEdits *edits;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSArray *mentions;
@property(readonly) Class superclass;

@end

