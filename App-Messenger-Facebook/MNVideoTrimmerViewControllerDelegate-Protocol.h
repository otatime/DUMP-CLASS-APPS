//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAssetMetadata, FBVideoAsset, MNVideoTrimmerViewController;

@protocol MNVideoTrimmerViewControllerDelegate <NSObject>
- (void)videoTrimmerVideoControllerDidCancel:(MNVideoTrimmerViewController *)arg1;
- (void)videoTrimmerViewController:(MNVideoTrimmerViewController *)arg1 didFinishWithVideoAsset:(FBVideoAsset *)arg2 metadata:(FBAssetMetadata *)arg3 forTimeRange:(CDStruct_e83c9415)arg4;
@end

