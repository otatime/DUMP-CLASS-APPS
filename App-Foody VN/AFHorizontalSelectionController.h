//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCollectionViewSelectionController.h"

#import "AFCollectionViewArrayDataSourceDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UICollectionViewFlowLayout;

@interface AFHorizontalSelectionController : AFCollectionViewSelectionController <UICollectionViewDelegateFlowLayout, AFCollectionViewArrayDataSourceDelegate>
{
    UICollectionViewFlowLayout *_flowLayout;
    float _instanceItemWidth;
}

+ (Class)layoutClass;
+ (float)itemWidth;
@property(nonatomic) float instanceItemWidth; // @synthesize instanceItemWidth=_instanceItemWidth;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
@property(nonatomic) float itemWidth; // @dynamic itemWidth;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

