//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSArray, NSString, PagingRequestInfo, Restaurant, UITableView;

@interface ResActionUserListViewController : BaseViewController
{
    NSString *selectedUserFollowId;
    BOOL isFollow;
    UITableView *userListTableView;
    Restaurant *resModel;
    unsigned int actionType;
    NSArray *userActionList;
    PagingRequestInfo *pagingRequest;
    NSString *_reviewId;
    unsigned int _totalLike;
}

@property(nonatomic) unsigned int totalLike; // @synthesize totalLike=_totalLike;
@property(copy, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(retain, nonatomic) PagingRequestInfo *pagingRequest; // @synthesize pagingRequest;
@property(retain, nonatomic) NSArray *userActionList; // @synthesize userActionList;
@property(nonatomic) unsigned int actionType; // @synthesize actionType;
@property(retain, nonatomic) Restaurant *resModel; // @synthesize resModel;
@property(nonatomic) __weak UITableView *userListTableView; // @synthesize userListTableView;
- (void).cxx_destruct;
- (void)refreshFollowTabWithCurrentUser:(id)arg1;
- (void)userFollowWithType:(unsigned int)arg1 userId:(id)arg2;
- (void)userBeginFollow;
- (void)userBeginUnfollow;
- (void)didTouchUserFollowBtn:(id)arg1;
- (void)didTouchUserUnfollowBtn:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)refreshRestaurantSearchList;
- (void)loadMoreDataForScreen;
- (void)loadMoreSearchResultForScreen;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)initializeUIControls:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
