//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface PhotoAlbumTableViewCell : UITableViewCell
{
    UIButton *_col1Button;
    UIButton *_col2Button;
    UIButton *_col3Button;
    UILabel *_indexCount1Label;
    UILabel *_indexCount2Label;
    UILabel *_indexCount3Label;
    UIImageView *_indexCount1ImV;
    UIImageView *_indexCount2ImV;
    UIImageView *_indexCount3ImV;
}

@property(retain, nonatomic) UIImageView *indexCount3ImV; // @synthesize indexCount3ImV=_indexCount3ImV;
@property(retain, nonatomic) UIImageView *indexCount2ImV; // @synthesize indexCount2ImV=_indexCount2ImV;
@property(retain, nonatomic) UIImageView *indexCount1ImV; // @synthesize indexCount1ImV=_indexCount1ImV;
@property(retain, nonatomic) UILabel *indexCount3Label; // @synthesize indexCount3Label=_indexCount3Label;
@property(retain, nonatomic) UILabel *indexCount2Label; // @synthesize indexCount2Label=_indexCount2Label;
@property(retain, nonatomic) UILabel *indexCount1Label; // @synthesize indexCount1Label=_indexCount1Label;
@property(retain, nonatomic) UIButton *col3Button; // @synthesize col3Button=_col3Button;
@property(retain, nonatomic) UIButton *col2Button; // @synthesize col2Button=_col2Button;
@property(retain, nonatomic) UIButton *col1Button; // @synthesize col1Button=_col1Button;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
