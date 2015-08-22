//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLPullControl.h"

@class UIImage, UIImageView;

@interface CBLImagePullControl : CBLPullControl
{
    UIImage *_normalImage;
    UIImage *_highlightedImage;
    UIImage *_adornmentImage;
    UIImageView *_imageView;
    UIImageView *_adornmentImageView;
}

@property(retain, nonatomic) UIImageView *adornmentImageView; // @synthesize adornmentImageView=_adornmentImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *adornmentImage; // @synthesize adornmentImage=_adornmentImage;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (id)init;

@end

