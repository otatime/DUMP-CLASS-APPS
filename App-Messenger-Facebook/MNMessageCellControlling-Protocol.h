//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MNExtensibleMessageView, MNMessageCollectionViewCell, MNMessageRow, NSArray, NSIndexPath, UICollectionView, UICollectionViewCell;

@protocol MNMessageCellControlling
- (void)setCellFrameLayoutForMessageView:(MNExtensibleMessageView *)arg1 animated:(BOOL)arg2;
- (void)setCellFrameLayoutForMessageCell:(MNMessageCollectionViewCell *)arg1 animated:(BOOL)arg2;
- (NSArray *)layoutElementsForMessageRow:(MNMessageRow *)arg1;
- (UICollectionViewCell *)cellForMessageRow:(MNMessageRow *)arg1 withIndexPath:(NSIndexPath *)arg2 inCollectionView:(UICollectionView *)arg3 withDelegate:(id <MNMessageCollectionViewCellDelegate>)arg4;
- (void)awakeWithCollectionView:(UICollectionView *)arg1 registrar:(id <MNMessageCellRegistration>)arg2;
@end

