//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectGenericShareContentCell.h"

@class IGProfilePictureImageView;

@interface IGDirectShareProfileCell : IGDirectGenericShareContentCell
{
    IGProfilePictureImageView *_sharedUserProfilePicture;
}

+ (float)sideImageWidth;
+ (float)heightForProfile:(id)arg1 withWidth:(float)arg2;
@property(retain, nonatomic) IGProfilePictureImageView *sharedUserProfilePicture; // @synthesize sharedUserProfilePicture=_sharedUserProfilePicture;
- (void).cxx_destruct;
- (id)sideImageView;
- (id)previewMedia;
- (id)subtitleText;
- (id)titleText;
- (void)setContent:(id)arg1;

@end

