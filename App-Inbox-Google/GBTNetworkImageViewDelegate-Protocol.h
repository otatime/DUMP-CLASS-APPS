//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GBTNetworkImageView;

@protocol GBTNetworkImageViewDelegate <NSObject>
- (void)imageViewDidLoadImage:(GBTNetworkImageView *)arg1 isThumbnail:(BOOL)arg2;

@optional
- (void)imageViewDidFailToLoadImage:(GBTNetworkImageView *)arg1;
@end
