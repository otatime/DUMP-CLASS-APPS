//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBStreamingCachedImage, NSURL;

@protocol FBStreamingImageResponseHandlerDelegate <NSObject>
- (void)reachedMaxDesiredFlagForURL:(NSURL *)arg1 result:(FBStreamingCachedImage *)arg2 isLastFlag:(BOOL)arg3;
- (unsigned int)maxDesiredFlagForURL:(NSURL *)arg1;
@end
