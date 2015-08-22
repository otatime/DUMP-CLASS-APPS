//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class MNObjectReusePool, NSMapTable, NSMutableSet, NSString;

@interface MNSeenHeadListViewController : NSObject <FBClassProvidable>
{
    id <FBProvider> _singleSeenHeadControllerProvider;
    MNObjectReusePool *_seenHeadViewReusePool;
    NSMutableSet *_aggregatedSeenHeadReusePool;
    id <FBMessengerRequestManager> _requestManager;
    NSMapTable *_singleSeenHeadControllerByView;
}

- (void).cxx_destruct;
- (void)updateSeenHeadListView:(id)arg1 withSortedReadUsers:(id)arg2;
- (id)_seenHeadViewsForUsersToShow:(id)arg1 numberOfAggregatedSeenHeads:(unsigned int)arg2 seenHeadSize:(unsigned int)arg3;
- (void)_recycleSeenHeadViewsForListView:(id)arg1;
- (id)_aggregatedSeenHeadViewUsingCacheIfPossible;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

