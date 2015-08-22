//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CBLContentPlaceholderProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CBLCommerceSearchTopicCell, NSArray, NSString, UICollectionView, UILabel;

@interface CBLOrderHistoryEmptyView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CBLContentPlaceholderProtocol>
{
    id <CBLOrderHistoryEmptyViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UILabel *_placeholderLabel;
    UILabel *_searchForLabel;
    NSArray *_searchTopics;
    CBLCommerceSearchTopicCell *_sizingCell;
}

@property(retain, nonatomic) CBLCommerceSearchTopicCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) NSArray *searchTopics; // @synthesize searchTopics=_searchTopics;
@property(retain, nonatomic) UILabel *searchForLabel; // @synthesize searchForLabel=_searchForLabel;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <CBLOrderHistoryEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)showCollectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

