//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIImage;

@interface FBWebRTCTintedImageCache : NSObject
{
    NSMutableDictionary *_tintedImageCache;
    UIImage *_baseImage;
}

@property(readonly, nonatomic) UIImage *baseImage; // @synthesize baseImage=_baseImage;
- (void).cxx_destruct;
- (id)imageWithTintColor:(id)arg1;
- (id)initWithBaseImage:(id)arg1;
- (id)init;

@end

