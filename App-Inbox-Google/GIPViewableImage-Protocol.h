//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURL, UIImage;

@protocol GIPViewableImage <NSObject>
- (int)index;
- (NSURL *)contextURL;
- (NSString *)subtitle;
- (NSString *)title;
- (BOOL)fetchFullImage;
- (BOOL)fetchThumbnail;
- (NSData *)rawImageData;
- (UIImage *)fullImage;
- (UIImage *)thumbnail;
@end
