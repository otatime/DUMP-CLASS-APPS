//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBLibraryThumbnailView, FBMagicStoryComposition, FBMediaPickerLibraryController, FBNavigationInfo;

@protocol FBMediaPickerLibraryControllerDelegate <NSObject>
- (void)libraryController:(FBMediaPickerLibraryController *)arg1 presentWithNavigationInfo:(FBNavigationInfo *)arg2;
- (void)libraryController:(FBMediaPickerLibraryController *)arg1 didSelectMagicStoryComposition:(FBMagicStoryComposition *)arg2;
- (BOOL)libraryControllerShouldShowNux:(FBMediaPickerLibraryController *)arg1;
- (void)libraryController:(FBMediaPickerLibraryController *)arg1 didToggleCheckmarkForThumbnailView:(FBLibraryThumbnailView *)arg2 atGridIndex:(unsigned int)arg3 wasSelected:(BOOL)arg4 quality:(unsigned int)arg5;
- (void)libraryController:(FBMediaPickerLibraryController *)arg1 needsToPresentMediaAtGridIndex:(unsigned int)arg2;
- (void)libraryControllerDidTapCameraInGrid:(FBMediaPickerLibraryController *)arg1;
@end

