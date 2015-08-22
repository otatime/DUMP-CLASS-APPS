//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EditorImageView.h"

#import "GBTNetworkImageViewDelegate.h"

@class GBTNetworkImageView, NSString;

@interface EditorNetworkImageView : EditorImageView <GBTNetworkImageViewDelegate>
{
    GBTNetworkImageView *contentView_;
}

- (void).cxx_destruct;
- (void)imageViewDidLoadImage:(id)arg1 isThumbnail:(BOOL)arg2;
- (id)image;
- (id)imageViewForContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
