//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class MNPaymentsAmountCollectionViewLayout, NSIndexPath, UICollectionView;

@protocol MNPaymentsAmountCollectionViewLayoutDelegate <UICollectionViewDelegateFlowLayout>
- (int)collectionView:(UICollectionView *)arg1 layout:(MNPaymentsAmountCollectionViewLayout *)arg2 deleteAnimationDirectionForItemAtIndexPath:(NSIndexPath *)arg3;
- (int)collectionView:(UICollectionView *)arg1 layout:(MNPaymentsAmountCollectionViewLayout *)arg2 insertAnimationDirectionForItemAtIndexPath:(NSIndexPath *)arg3;
- (struct CGPoint)collectionView:(UICollectionView *)arg1 layout:(MNPaymentsAmountCollectionViewLayout *)arg2 scaleForItemAtIndexPath:(NSIndexPath *)arg3;
@end

