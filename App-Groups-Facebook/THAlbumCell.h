//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBItemTableViewCell_DEPRECATED.h"

@class FBMemAlbum, FBUserSession, FBWebPhotoView;

@interface THAlbumCell : FBItemTableViewCell_DEPRECATED
{
    FBUserSession *_session;
    FBWebPhotoView *_photoView;
    FBMemAlbum *_album;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setAlbum:(id)arg1;
- (id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
