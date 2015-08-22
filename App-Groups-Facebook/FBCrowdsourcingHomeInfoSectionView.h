//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBCrowdsourcingHomeInputFieldView, FBFourRoundedCornerView, FBItemView_DEPRECATED;

@interface FBCrowdsourcingHomeInfoSectionView : UIView
{
    UIView *_cardBackgroundView;
    UIView *_addHomeView;
    UIView *_locationHeaderView;
    FBFourRoundedCornerView *_cornerView;
    id <FBCrowdsourcingHomeInfoSectionViewDelegate> _delegate;
    FBItemView_DEPRECATED *_cityField;
    FBCrowdsourcingHomeInputFieldView *_neighborhoodField;
    FBCrowdsourcingHomeInputFieldView *_addressField;
}

@property(retain, nonatomic) FBCrowdsourcingHomeInputFieldView *addressField; // @synthesize addressField=_addressField;
@property(retain, nonatomic) FBCrowdsourcingHomeInputFieldView *neighborhoodField; // @synthesize neighborhoodField=_neighborhoodField;
@property(readonly, nonatomic) FBItemView_DEPRECATED *cityField; // @synthesize cityField=_cityField;
@property(nonatomic) __weak id <FBCrowdsourcingHomeInfoSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tapOnCity:(id)arg1;
- (struct CGRect)_contentsRect;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
