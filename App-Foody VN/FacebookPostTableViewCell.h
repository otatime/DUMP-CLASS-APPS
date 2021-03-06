//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, UIButton, UILabel, UIView;

@interface FacebookPostTableViewCell : UITableViewCell
{
    float cellHeight;
    int _tags;
    UIButton *_facebookThumbButton;
    UIView *_facebookContentImage;
    UILabel *_facebookTitle;
    UIView *_facebookContainerView;
    UILabel *_facebookDateLabel;
    UILabel *_facebookContentText;
    NSArray *_photoLists;
}

@property(retain, nonatomic) NSArray *photoLists; // @synthesize photoLists=_photoLists;
@property(retain, nonatomic) UILabel *facebookContentText; // @synthesize facebookContentText=_facebookContentText;
@property(retain, nonatomic) UILabel *facebookDateLabel; // @synthesize facebookDateLabel=_facebookDateLabel;
@property(retain, nonatomic) UIView *facebookContainerView; // @synthesize facebookContainerView=_facebookContainerView;
@property(retain, nonatomic) UILabel *facebookTitle; // @synthesize facebookTitle=_facebookTitle;
@property(retain, nonatomic) UIView *facebookContentImage; // @synthesize facebookContentImage=_facebookContentImage;
@property(retain, nonatomic) UIButton *facebookThumbButton; // @synthesize facebookThumbButton=_facebookThumbButton;
@property(nonatomic) int tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didTouchImageAlbum:(id)arg1;
- (void)setPhotoFacebook:(id)arg1;
- (void)setFacebookPostContent:(id)arg1;
- (void)setFacebookPostDate:(id)arg1;
- (void)setFacebookPostTitle:(id)arg1;
- (void)setFacebookUserThumb:(id)arg1;
- (void)setCellHeight:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;

@end

