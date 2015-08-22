//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIPSlidesViewControllerDataSource.h"
#import "GIPSlidesViewControllerDelegate.h"

@class GIPSlidesViewController, MPMoviePlayerController, MediaData, MediaSectionDataSource, NSArray, NSString, UIButton;

@interface MediaPreviewManager : NSObject <GIPSlidesViewControllerDataSource, GIPSlidesViewControllerDelegate>
{
    MediaData *currentMediaData_;
    MediaSectionDataSource *dataSource_;
    NSArray *indexesOfMediaData_;
    MPMoviePlayerController *moviePlayer_;
    GIPSlidesViewController *photoVC_;
    UIButton *selectButton_;
    id <MediaPreviewManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <MediaPreviewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectButtonTapped:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)previewVideoForMediaData:(id)arg1 withThumbnailView:(id)arg2;
- (void)previewPhotoForMediaDataAtIndex:(int)arg1 withDataSource:(id)arg2;
- (struct CGRect)thumbnailCropRectForImage:(id)arg1 thumbnailSize:(struct CGSize)arg2;
- (BOOL)thumbnailShouldCropForImage:(id)arg1;
- (struct CGRect)slideThumbnailFrameAtIndex:(unsigned int)arg1;
- (int)slideCount;
- (id)slideViewControllerAtIndex:(unsigned int)arg1;
- (BOOL)shouldHideStatusBar;
- (void)slidesViewController:(id)arg1 didChangeToSlideAtIndex:(int)arg2;
- (id)slidesViewControllerActionButton:(id)arg1;
- (void)slidesViewControllerWillClose:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)previewMediaDataAtIndex:(int)arg1 withDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
