//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface FBCalendarDateCollectionViewCell : UICollectionViewCell
{
    UILabel *_dateLabel;
    unsigned int _style;
}

@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;
- (id)_textLabelColorForStyle:(unsigned int)arg1;
- (id)_fontForStyle:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

