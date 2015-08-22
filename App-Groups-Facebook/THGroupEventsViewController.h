//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "THAbstractPagedDataViewController.h"

#import "FBGroupsTableViewControllerProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class FBContentInsetTracker, FBUserSession, NSString, THGroupEmptyState, THGroupEventsDataSource;

@interface THGroupEventsViewController : THAbstractPagedDataViewController <UIGestureRecognizerDelegate, FBGroupsTableViewControllerProtocol>
{
    FBUserSession *_session;
    NSString *_groupID;
    FBContentInsetTracker *_contentInsetTracker;
    THGroupEventsDataSource *_eventsDataSource;
    int _eventType;
    THGroupEventsViewController *_pastEventController;
    THGroupEmptyState *_emptyStateView;
    BOOL _hasInitialLoaded;
    BOOL _canViewerSeeGroupContent;
    id <FBIntentHandler> _intentHandler;
}

@property(nonatomic) BOOL canViewerSeeGroupContent; // @synthesize canViewerSeeGroupContent=_canViewerSeeGroupContent;
@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_backButtonPressed:(id)arg1;
- (void)_updateTitle;
- (void)_setupEmptyStateForViewStateManager;
- (void)_reloadEvents;
- (void)scrollToTop;
- (void)fb_didCancelModalDimissGesture;
- (void)fb_willBeginModalDimissGesture;
- (BOOL)fb_shouldDismissModalViewControllerGestureInterveneInDirection:(int)arg1 atTouchLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dataSource:(id)arg1 didEndDownloadForType:(int)arg2 error:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 groupID:(id)arg2 intentHandler:(id)arg3 eventType:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
