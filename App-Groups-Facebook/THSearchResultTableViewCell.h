//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBItemTableViewCell_DEPRECATED.h"

@class FBImageDownloader, FBUserSession, NSString, UIImage;

@interface THSearchResultTableViewCell : FBItemTableViewCell_DEPRECATED
{
    FBImageDownloader *_imageDownloader;
    FBUserSession *_session;
    NSString *_title;
    NSString *_subtitle;
    NSString *_pogImageURI;
    UIImage *_blankPogImage;
}

@property(nonatomic) UIImage *blankPogImage; // @synthesize blankPogImage=_blankPogImage;
@property(copy, nonatomic) NSString *pogImageURI; // @synthesize pogImageURI=_pogImageURI;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
