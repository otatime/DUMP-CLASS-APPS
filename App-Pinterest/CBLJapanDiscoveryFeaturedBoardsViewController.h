//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

#import "CBLDiscoveryChildControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLFeaturedBoardDiscoveryViewDisplayOptions, CBLRefreshControl, CBLRemoteModelCollection, CBLScrollViewPullToolbar, NSString, UITableView;

@interface CBLJapanDiscoveryFeaturedBoardsViewController : CBLTraitCollectionViewController <UITableViewDelegate, UITableViewDataSource, CBLDiscoveryChildControllerProtocol>
{
    UITableView *_tableView;
    CBLRemoteModelCollection *_featuredBoardCollection;
    CBLFeaturedBoardDiscoveryViewDisplayOptions *_boardDisplayOptions;
    CBLRefreshControl *_refreshControl;
    CBLScrollViewPullToolbar *_scrollPullBar;
}

@property(retain, nonatomic) CBLScrollViewPullToolbar *scrollPullBar; // @synthesize scrollPullBar=_scrollPullBar;
@property(retain, nonatomic) CBLRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) CBLFeaturedBoardDiscoveryViewDisplayOptions *boardDisplayOptions; // @synthesize boardDisplayOptions=_boardDisplayOptions;
@property(retain, nonatomic) CBLRemoteModelCollection *featuredBoardCollection; // @synthesize featuredBoardCollection=_featuredBoardCollection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)discoveryChildControllerScrollToTop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)refreshControlDidStartLoading:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

