//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBStickerUpdateService, NSError;

@protocol FBStickerUpdateServiceListener <NSObject>
- (void)stickerUpdateDidFailWithError:(NSError *)arg1;
- (void)stickerUpdateDidFinish:(FBStickerUpdateService *)arg1;
- (void)stickerUpdateWillStart:(FBStickerUpdateService *)arg1;
@end
