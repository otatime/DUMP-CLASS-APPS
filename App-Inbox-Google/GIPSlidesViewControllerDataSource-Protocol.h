//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIViewController<GIPSlide>;

@protocol GIPSlidesViewControllerDataSource <NSObject>
- (struct CGRect)thumbnailCropRectForImage:(UIImage *)arg1 thumbnailSize:(struct CGSize)arg2;
- (BOOL)thumbnailShouldCropForImage:(UIImage *)arg1;
- (struct CGRect)slideThumbnailFrameAtIndex:(unsigned int)arg1;
- (int)slideCount;
- (UIViewController<GIPSlide> *)slideViewControllerAtIndex:(unsigned int)arg1;
@end
