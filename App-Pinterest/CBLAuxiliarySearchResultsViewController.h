//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionCollectionViewController.h"

#import "CBLSearchResultsDataSourceDelegate.h"

@class CBLSearchResultsDataSource, CBLSeparatorWithText, NSString, UIView;

@interface CBLAuxiliarySearchResultsViewController : CBLTraitCollectionCollectionViewController <CBLSearchResultsDataSourceDelegate>
{
    CBLSearchResultsDataSource *_resultsDataSource;
    id <CBLAuxiliarySearchResultsParent> _parent;
    int _searchType;
    int _searchTypeShownByParent;
    UIView *_viewForRepresentationAsHeader;
    float _intercellSpacing;
    unsigned int _previousResultsCount;
    CBLSeparatorWithText *_parentContentSeparator;
    CBLSeparatorWithText *_myContentSeparator;
    struct UIEdgeInsets _guttersWhenDisplayedAsHeader;
}

+ (id)auxiliarySearchResultsControllerWithDataSource:(id)arg1;
@property(retain, nonatomic) CBLSeparatorWithText *myContentSeparator; // @synthesize myContentSeparator=_myContentSeparator;
@property(retain, nonatomic) CBLSeparatorWithText *parentContentSeparator; // @synthesize parentContentSeparator=_parentContentSeparator;
@property(nonatomic) unsigned int previousResultsCount; // @synthesize previousResultsCount=_previousResultsCount;
@property(nonatomic) float intercellSpacing; // @synthesize intercellSpacing=_intercellSpacing;
@property(nonatomic) struct UIEdgeInsets guttersWhenDisplayedAsHeader; // @synthesize guttersWhenDisplayedAsHeader=_guttersWhenDisplayedAsHeader;
@property(retain, nonatomic) UIView *viewForRepresentationAsHeader; // @synthesize viewForRepresentationAsHeader=_viewForRepresentationAsHeader;
@property(nonatomic) int searchTypeShownByParent; // @synthesize searchTypeShownByParent=_searchTypeShownByParent;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(nonatomic) __weak id <CBLAuxiliarySearchResultsParent> parent; // @synthesize parent=_parent;
@property(retain, nonatomic) CBLSearchResultsDataSource *resultsDataSource; // @synthesize resultsDataSource=_resultsDataSource;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (id)boardCellDisplayOptions;
- (BOOL)shouldUseCompactCellsForDisplay;
- (void)searchResultsDataSourceWasUpdated:(id)arg1;
- (void)searchResultsDataSourceWillUpdate:(id)arg1;
- (void)loadContentWithSuccess:(CDUnknownBlockType)arg1 andFailure:(CDUnknownBlockType)arg2;
- (unsigned int)resultsCount;
- (void)configureViewForHeaderRepresentation;
- (float)headerContentRepresentationHeight;
- (void)reloadContent;
- (float)heightForSingleCell;
- (float)widthForSingleCell;
- (void)viewDidLoad;
- (void)configureLayout;
- (void)viewWillLayoutSubviews;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

