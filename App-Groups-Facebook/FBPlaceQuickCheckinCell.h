//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBItemTableViewCell_DEPRECATED.h"

@class FBNearbyPlace;

@interface FBPlaceQuickCheckinCell : FBItemTableViewCell_DEPRECATED
{
    FBNearbyPlace *_place;
    unsigned int _iconStyle;
    unsigned int _cellType;
}

+ (float)defaultRowHeightForIconStyle:(unsigned int)arg1;
@property(nonatomic) unsigned int cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithPlace:(id)arg1 cellType:(unsigned int)arg2 iconStyle:(unsigned int)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
