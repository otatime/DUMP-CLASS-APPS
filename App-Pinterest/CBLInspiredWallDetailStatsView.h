//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class UILabel, UIView;

@interface CBLInspiredWallDetailStatsView : CBLTraitCollectionView
{
    UILabel *_pinsNumberLabel;
    UILabel *_pinsDetailLabel;
    UILabel *_secondsNumberLabel;
    UILabel *_secondsDetailLabel;
    UIView *_separatorView;
}

@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *secondsDetailLabel; // @synthesize secondsDetailLabel=_secondsDetailLabel;
@property(retain, nonatomic) UILabel *secondsNumberLabel; // @synthesize secondsNumberLabel=_secondsNumberLabel;
@property(retain, nonatomic) UILabel *pinsDetailLabel; // @synthesize pinsDetailLabel=_pinsDetailLabel;
@property(retain, nonatomic) UILabel *pinsNumberLabel; // @synthesize pinsNumberLabel=_pinsNumberLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

