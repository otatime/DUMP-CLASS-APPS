//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class NSString, UILabel, UIView;

@interface CBLTrayHeaderView : CBLTraitCollectionView
{
    NSString *_text;
    UILabel *_headerLabel;
    UIView *_divider;
}

@property(retain, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

