//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UISearchBarDelegate.h"

@class NSString, UICollectionView, UISearchBar;

@interface FBImageSearchView : UIView <UISearchBarDelegate>
{
    UICollectionView *_collectionView;
    UISearchBar *_searchBar;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

