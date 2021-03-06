//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBMInAppNotificationBadgeCounterObservingAnnouncer, NSMutableSet, NSString;

@interface InAppNotificationBadgeCounter : NSObject <FBSessionClassProvidable>
{
    NSMutableSet *_unreadThreadFbKeySet;
    FBMInAppNotificationBadgeCounterObservingAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (BOOL)_isBadgeableThreadSummary:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (unsigned int)getCount;
- (void)resetCount;
- (void)decrementCountIfNeededWithThreadSummaries:(id)arg1;
- (void)decrementCountIfNeededWithThreadSummary:(id)arg1;
- (void)incrementCountIfNeededWithThreadSummaries:(id)arg1;
- (void)incrementCountIfNeededWithThreadSummary:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

