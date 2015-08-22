//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegate.h"

@class MNMessagesCollectionViewLayout, NSArray, NSIndexPath, NSString, UICollectionView;

@protocol MNMessagesCollectionViewDelegate <UICollectionViewDelegate>
- (id <MNCollectionViewLayoutAttributesTransforming>)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 disappearingTransformerForElementWithCategory:(unsigned int)arg3 kind:(NSString *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (id <MNCollectionViewLayoutAttributesTransforming>)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 appearingTransformerForElementWithCategory:(unsigned int)arg3 kind:(NSString *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (id <MNCollectionViewElementAppearanceTransitioning>)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 appearanceTransitioningForElementWithCategory:(unsigned int)arg3 kind:(NSString *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (NSArray *)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 layoutElementsForItemAtIndexPath:(NSIndexPath *)arg3;
@end
