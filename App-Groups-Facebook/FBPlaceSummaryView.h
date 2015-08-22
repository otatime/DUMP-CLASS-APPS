//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBMemPage, FBUserSession, UIImageView, UILabel;

@interface FBPlaceSummaryView : UIView
{
    UIImageView *_photoImageView;
    UILabel *_nameLabel;
    UILabel *_addressLabel;
    UILabel *_socialContextLabel;
    BOOL _photoDownloaded;
    id _photoDownloadHandle;
    FBUserSession *_session;
    FBMemPage *_place;
}

@property(nonatomic) __weak FBMemPage *place; // @synthesize place=_place;
- (void).cxx_destruct;
- (void)fetchPhoto;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@end
