//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImageView, UITouch;

@protocol FVMWTapDetectingImageViewDelegate <NSObject>

@optional
- (void)imageView:(UIImageView *)arg1 tripleTapDetected:(UITouch *)arg2;
- (void)imageView:(UIImageView *)arg1 doubleTapDetected:(UITouch *)arg2;
- (void)imageView:(UIImageView *)arg1 singleTapDetected:(UITouch *)arg2;
@end

