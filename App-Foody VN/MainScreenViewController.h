//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CLLocation, NSArray, NSMutableDictionary, NSString, Property, UIImageView, UIScrollView, UITableView, UIView;

@interface MainScreenViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    struct CGSize resImageSize;
    int nextSortIndex;
    int previousSortIndex;
    int targetRestaurantIndex;
    unsigned int targetActionType;
    UIView *sortBackground;
    UIScrollView *sortScrollView;
    UIImageView *moreRight;
    UIImageView *moreLeft;
    UIView *contentView;
    UITableView *resListTableView;
    CLLocation *currentLoc;
    NSArray *resTypes;
    NSArray *sortTypes;
    NSMutableDictionary *resultDict;
    NSMutableDictionary *pagingRequest;
    NSString *selectedSortId;
    NSString *selectedFilterId;
    NSString *selectedCityId;
    Property *selectedSortType;
}

@property(retain, nonatomic) Property *selectedSortType; // @synthesize selectedSortType;
@property(copy, nonatomic) NSString *selectedCityId; // @synthesize selectedCityId;
@property(copy, nonatomic) NSString *selectedFilterId; // @synthesize selectedFilterId;
@property(copy, nonatomic) NSString *selectedSortId; // @synthesize selectedSortId;
@property(retain, nonatomic) NSMutableDictionary *pagingRequest; // @synthesize pagingRequest;
@property(retain, nonatomic) NSMutableDictionary *resultDict; // @synthesize resultDict;
@property(retain, nonatomic) NSArray *sortTypes; // @synthesize sortTypes;
@property(retain, nonatomic) NSArray *resTypes; // @synthesize resTypes;
@property(retain, nonatomic) CLLocation *currentLoc; // @synthesize currentLoc;
@property(nonatomic) __weak UITableView *resListTableView; // @synthesize resListTableView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;
@property(nonatomic) __weak UIImageView *moreLeft; // @synthesize moreLeft;
@property(nonatomic) __weak UIImageView *moreRight; // @synthesize moreRight;
@property(nonatomic) __weak UIScrollView *sortScrollView; // @synthesize sortScrollView;
@property(nonatomic) __weak UIView *sortBackground; // @synthesize sortBackground;
- (void).cxx_destruct;
- (void)didTouchAvgRatingButton:(id)arg1;
- (void)didReceivedCityChangedEvent:(id)arg1;
- (void)didReceivedRestaurantUpdateEvent:(id)arg1;
- (void)userDidLikeRestaurant;
- (void)didTouchLoveButton:(id)arg1;
- (void)didTouchReviewButton:(id)arg1;
- (void)didTouchTakePicture:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)transitionToNextSortType;
- (void)adjustTableCellSeparatorStyle;
- (void)gotoNextSortType;
- (void)showSlideTransitionEffect:(BOOL)arg1;
- (void)gotoPreviousSortType;
- (void)didSwipeOnScreen:(id)arg1;
- (void)didSelectResTypeAtIndex:(unsigned int)arg1;
- (void)didSelectRestaurant:(unsigned int)arg1;
- (void)didTouchMapButton:(id)arg1;
- (void)setSortButtonSelectedWithTag:(unsigned int)arg1;
- (void)didTouchSortButton:(id)arg1;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)loadMoreDataForScreen;
- (void)loadMoreResForCurrentScreen;
- (void)refreshCurrentResList;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)loadMetaDataForScreen;
- (void)initializeUIControls:(BOOL)arg1;
- (void)resetAllSortButton;
- (void)initilizeSortTypes;
- (void)addSwipeGuestures;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
