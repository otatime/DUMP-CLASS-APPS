//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (Resize)
- (struct CGAffineTransform)transformForOrientation:(struct CGSize)arg1;
- (id)resizedImage:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 drawTransposed:(BOOL)arg3 interpolationQuality:(int)arg4;
- (id)resizedImageWithContentMode:(int)arg1 bounds:(struct CGSize)arg2 interpolationQuality:(int)arg3;
- (id)resizedImage:(struct CGSize)arg1 interpolationQuality:(int)arg2;
- (id)thumbnailImage:(int)arg1 transparentBorder:(unsigned int)arg2 cornerRadius:(unsigned int)arg3 interpolationQuality:(int)arg4;
- (id)cropImageToWidth:(int)arg1 height:(int)arg2;
- (id)cropImageToWidth:(int)arg1 height:(int)arg2 transparentBorder:(unsigned int)arg3 cornerRadius:(unsigned int)arg4 interpolationQuality:(int)arg5;
- (id)cropToSquare;
- (id)croppedImageFromCenterWithHeight:(float)arg1;
- (id)croppedImage:(struct CGRect)arg1;
@end

