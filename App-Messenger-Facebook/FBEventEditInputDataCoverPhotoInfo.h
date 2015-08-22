//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBEventEditInputDataCoverPhotoInfoFocus, FBEventEditInputDataCoverPhotoInfoOffset, FBEventEditInputDataCoverPhotoInfoZoomScale, NSString;

@interface FBEventEditInputDataCoverPhotoInfo : FBGraphQLInput
{
    NSString *_photoId;
    NSString *_photoURLString;
    NSString *_themePhotoId;
    FBEventEditInputDataCoverPhotoInfoOffset *_offset;
    FBEventEditInputDataCoverPhotoInfoFocus *_focus;
    FBEventEditInputDataCoverPhotoInfoZoomScale *_zoomScale;
}

@property(copy, nonatomic) FBEventEditInputDataCoverPhotoInfoZoomScale *zoomScale; // @synthesize zoomScale=_zoomScale;
@property(copy, nonatomic) FBEventEditInputDataCoverPhotoInfoFocus *focus; // @synthesize focus=_focus;
@property(copy, nonatomic) FBEventEditInputDataCoverPhotoInfoOffset *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *themePhotoId; // @synthesize themePhotoId=_themePhotoId;
@property(copy, nonatomic) NSString *photoURLString; // @synthesize photoURLString=_photoURLString;
@property(copy, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

