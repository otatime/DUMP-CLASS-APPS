//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePagingListTableViewController.h"

#import "ResReviewTableCellDelegate.h"

@class NSString, UIView;

@interface ReviewListViewController : BasePagingListTableViewController <ResReviewTableCellDelegate>
{
    int selectedIndex;
    BOOL _shouldAddHomeButton;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) BOOL shouldAddHomeButton; // @synthesize shouldAddHomeButton=_shouldAddHomeButton;
- (void).cxx_destruct;
- (void)ResReviewTableCell:(id)arg1 clickShowAllPhoto:(id)arg2;
- (void)didReceivedRestaurantUpdateEvent:(id)arg1;
- (void)tapOnResNameButton:(id)arg1;
- (void)didTouchSortButton:(id)arg1;
- (void)didTouchUserThumbnail:(id)arg1;
- (void)didTouchReviewRatingLabel:(id)arg1;
- (void)didTouchResHeaderView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)setTableViewEmptyMessage;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)downloadThumbnailForDataList:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initHeaderView;
- (void)trackPageView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
