//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBFetchedTableViewController.h"

#import "FBAvatarTaggingSectionDataSourceDelegate.h"
#import "FBEntityPickerTextFieldDelegate.h"

@class FBAvatarPickerControllerDataSource, FBAvatarPickerView, FBEntityPickerTextField, FBKVOController, FBLoadingIndicatorView, FBUserSession, NSArray, NSMutableArray, NSMutableSet, NSPredicate, NSSet, NSString, NSTimer;

@interface FBAvatarPickerController : FBFetchedTableViewController <FBAvatarTaggingSectionDataSourceDelegate, FBEntityPickerTextFieldDelegate>
{
    NSMutableArray *_selectedAvatars;
    NSArray *_taggableCollections;
    NSArray *_sortDescriptors;
    FBAvatarPickerControllerDataSource *_searchDataSource;
    NSSet *_forcedSelectionAvatarGraphQLIDs;
    NSSet *_disabledAvatarGraphQLIDs;
    NSMutableSet *_selectedAvatarGraphQLIDs;
    BOOL _multiSelect;
    BOOL _showClearButton;
    BOOL _requireSelection;
    BOOL _collectionIsLoading;
    BOOL _viewAppeared;
    BOOL _pagedDisplay;
    BOOL _hideListWhenNotFocused;
    BOOL _hideListWhenEmpty;
    BOOL _dataSourceSet;
    BOOL _keepSearchTextOnDone;
    BOOL _tableViewDataSourceFetched;
    BOOL _boldSectionTitle;
    BOOL _forceBlackEntityTokenText;
    BOOL _shouldShowSearchField;
    BOOL _presentEmbedded;
    BOOL _presentEmbeddedWithStatusBar;
    FBKVOController *_KVOController;
    NSString *_searchBarPlaceHolder;
    NSTimer *_searchCommitTimer;
    FBUserSession *_session;
    BOOL _useOwningViewControllersBackButton;
    BOOL _searchFieldIsDefaultResponder;
    BOOL _delayActive;
    NSString *_doneButtonTitle;
    id <FBAvatarPickerControllerDelegate> _delegate;
    id <FBAvatarTaggingSearchProviderProtocol> _searchProvider;
    FBEntityPickerTextField *_searchField;
    NSPredicate *_allPredicate;
    unsigned int _cellStyle;
    FBAvatarPickerView *_avatarPickerView;
    int _state;
    FBLoadingIndicatorView *_loadingIndicatorView;
    int _pushToLoadMoreState;
    struct UIEdgeInsets _searchFieldSeparatorInsets;
}

@property(retain, nonatomic) NSTimer *searchCommitTimer; // @synthesize searchCommitTimer=_searchCommitTimer;
@property(nonatomic) int pushToLoadMoreState; // @synthesize pushToLoadMoreState=_pushToLoadMoreState;
@property(retain, nonatomic) FBLoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) FBAvatarPickerView *avatarPickerView; // @synthesize avatarPickerView=_avatarPickerView;
@property(nonatomic) unsigned int cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) BOOL delayActive; // @synthesize delayActive=_delayActive;
@property(retain, nonatomic) NSPredicate *allPredicate; // @synthesize allPredicate=_allPredicate;
@property(nonatomic) struct UIEdgeInsets searchFieldSeparatorInsets; // @synthesize searchFieldSeparatorInsets=_searchFieldSeparatorInsets;
@property(retain, nonatomic) FBEntityPickerTextField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) BOOL searchFieldIsDefaultResponder; // @synthesize searchFieldIsDefaultResponder=_searchFieldIsDefaultResponder;
@property(readonly, copy, nonatomic) NSSet *disabledAvatarGraphQLIDs; // @synthesize disabledAvatarGraphQLIDs=_disabledAvatarGraphQLIDs;
@property(readonly, copy, nonatomic) NSSet *forcedSelectionAvatarGraphQLIDs; // @synthesize forcedSelectionAvatarGraphQLIDs=_forcedSelectionAvatarGraphQLIDs;
@property(copy, nonatomic) NSArray *selectedAvatars; // @synthesize selectedAvatars=_selectedAvatars;
@property(readonly, nonatomic) id <FBAvatarTaggingSearchProviderProtocol> searchProvider; // @synthesize searchProvider=_searchProvider;
@property(nonatomic) __weak id <FBAvatarPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL useOwningViewControllersBackButton; // @synthesize useOwningViewControllersBackButton=_useOwningViewControllersBackButton;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)dataSourceDidFinishFetchingResults:(id)arg1;
- (void)dataSource:(id)arg1 didSearchAvatars:(id)arg2 forText:(id)arg3;
- (void)fetchedResultsDataSourceDidFetch:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)_applySubtleStyleToCell:(id)arg1;
- (BOOL)isAvatarSelected:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)indexPathsForObject:(id)arg1;
- (void)_collectionPageLoaded;
- (BOOL)_hasMoreToSync;
- (void)clearSearchField;
- (id)avatarPickerFooterView;
- (void)setAvatarPickerFooterView:(id)arg1 hidden:(BOOL)arg2;
- (void)didTapCancel;
- (void)didTapDone:(id)arg1;
- (void)didTapDone;
- (void)_updateFromTimer:(id)arg1;
- (void)_updatePushToLoadFooterState;
- (void)_setPushToLoadMoreState:(int)arg1;
- (id)_standardLeftNavigationBarButton;
- (void)_updateClearButton;
- (BOOL)_taggableCollectionsFinishedFetching;
- (void)clearButtonPressed;
- (void)hideResults;
- (void)showResults;
- (void)_updateRightBarButtonEnabled;
- (void)textFieldHeightDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textField:(id)arg1 willRemoveObject_DEPRECATED:(id)arg2;
- (void)textField:(id)arg1 didAddObject_DEPRECATED:(id)arg2;
- (void)textField:(id)arg1 searchTextChanged:(id)arg2;
- (BOOL)shouldAddSeparatorInIndexPath:(id)arg1;
- (void)addSeparatorToCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (void)addPredicate:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)newCellWithIdentifier:(id)arg1;
- (id)cellIdentifierAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)didUnselectAvatar:(id)arg1 atIndexPath:(id)arg2;
- (void)didSelectAvatar:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillLayoutSubviews;
- (BOOL)fb_showNavigationJewels;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFetchedResultsDataSource:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 configuration:(id)arg2;
- (id)initWithSession:(id)arg1 configuration:(id)arg2 searchProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

