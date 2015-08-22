//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "FBClassProvidable.h"
#import "MNInboxPendingRequestsViewControllerDelegate.h"

@class MNInboxPendingRequestsViewController, MNInboxTopBarView, MNPendingRequestsFolderThreadsQueryPolicy, NSString;

@interface MNInboxTopBarViewController : FBContainerViewController <MNInboxPendingRequestsViewControllerDelegate, FBClassProvidable>
{
    MNInboxTopBarView *_topBarView;
    MNInboxPendingRequestsViewController *_pendingRequestViewController;
    id <FBProvider> _pendingRequestViewControllerProvider;
    MNPendingRequestsFolderThreadsQueryPolicy *_pendingRequestsFolderThreadsQueryPolicy;
    id <MNInboxTopBarViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNInboxTopBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pendingRequestsViewControllerDidChangeHeight:(id)arg1;
- (void)pendingRequestsViewControllerDidTap:(id)arg1;
- (float)contentHeight;
- (void)loadView;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

