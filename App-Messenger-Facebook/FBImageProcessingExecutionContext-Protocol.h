//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBFilterer, NSURL, UIImage;

@protocol FBImageProcessingExecutionContext <NSObject>
@property(retain) NSURL *canvasAssetURL;
@property(retain) FBFilterer *standardCanvas;
@property(retain) FBFilterer *thumbnailCanvas;
- (void)prepareThumbnailCanvas:(UIImage *)arg1;
- (void)prepareStandardCanvas:(UIImage *)arg1;
@end

