//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class FBUserSession, NSArray, NSDictionary, NSString, UICollectionView;

@interface MNPhotoEditingTabController : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, FBClassProvidable>
{
    UICollectionView *_tabBarCollectionView;
    NSArray *_tabList;
    NSDictionary *_tabPropertiesByTab;
    FBUserSession *_session;
    int _selectedTab;
    id <MNPhotoEditingTabControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPhotoEditingTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int selectedTab; // @synthesize selectedTab=_selectedTab;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_loadCellImages:(id)arg1 tab:(int)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_handleTabSelection:(id)arg1;
- (void)_deselectMutuallyExclusiveTabs;
- (void)_refreshTabBarIcon:(int)arg1;
- (unsigned int)indexOfTab:(int)arg1;
- (void)configureWithTabBarCollectionView:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

