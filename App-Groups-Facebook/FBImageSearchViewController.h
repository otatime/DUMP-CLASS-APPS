//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBImageSearcherDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UISearchBarDelegate.h"

@class FBImageSearchCollectionFooterView, FBImageSearchImageDownloader, FBImageSearchView, FBImageSearcher, NSArray, NSMutableArray, NSString, UIActionSheet, UIAlertController, UIImage;

@interface FBImageSearchViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIActionSheetDelegate, UISearchBarDelegate, FBImageSearcherDelegate>
{
    UIAlertController *_confirmSaveAlertController;
    FBImageSearchView *_imageSearchView;
    FBImageSearcher *_imageSearcher;
    FBImageSearchImageDownloader *_imageSearchImageDownloader;
    NSMutableArray *_imageDownloads;
    NSString *_currentQuery;
    FBImageSearchCollectionFooterView *_imageSearchCollectionFooterView;
    int _currentPage;
    BOOL _lastPageReached;
    BOOL _isLoadingSearchResults;
    id <FBImageSearchViewControllerDelegate> _delegate;
    UIActionSheet *_confirmSaveActionSheet;
    NSArray *_thumbnailURLs;
    NSArray *_fullImageURLs;
    NSString *_serviceProvider;
    NSArray *_resultIDs;
    UIImage *_pickedThumbnail;
    NSString *_pickedFullImageURL;
    NSString *_pickedResultID;
}

@property(copy, nonatomic) NSString *pickedResultID; // @synthesize pickedResultID=_pickedResultID;
@property(copy, nonatomic) NSString *pickedFullImageURL; // @synthesize pickedFullImageURL=_pickedFullImageURL;
@property(retain, nonatomic) UIImage *pickedThumbnail; // @synthesize pickedThumbnail=_pickedThumbnail;
@property(copy, nonatomic) NSArray *resultIDs; // @synthesize resultIDs=_resultIDs;
@property(copy, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(copy, nonatomic) NSArray *fullImageURLs; // @synthesize fullImageURLs=_fullImageURLs;
@property(copy, nonatomic) NSArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(retain, nonatomic) UIActionSheet *confirmSaveActionSheet; // @synthesize confirmSaveActionSheet=_confirmSaveActionSheet;
@property(nonatomic) __weak id <FBImageSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isLoadingSearchResults; // @synthesize isLoadingSearchResults=_isLoadingSearchResults;
@property(readonly, nonatomic) FBImageSearchView *imageSearchView; // @synthesize imageSearchView=_imageSearchView;
- (void).cxx_destruct;
- (void)_showUnableToSearchAlert;
- (void)_showNoImagesFoundAlert;
- (void)_cancelPressed;
- (void)_setupNavItems;
- (void)_resetPaginationStates;
- (void)_imageDownloadCompleted:(id)arg1 image:(struct CGImage *)arg2 download:(id)arg3 error:(id)arg4;
- (void)_loadNextPage;
- (void)_search:(id)arg1 page:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)imageSearcherDidSearch:(id)arg1 thumbnailURLs:(id)arg2 fullImageURLs:(id)arg3 serviceProvider:(id)arg4 resultIDs:(id)arg5;
- (void)imageSearcherCouldNotSearch:(id)arg1 error:(id)arg2;
- (void)imageSearcherDidStartSearch:(id)arg1;
- (void)search:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithImageSearcher:(id)arg1 imageSearchImageDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

