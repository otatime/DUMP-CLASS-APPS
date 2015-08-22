//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNUserRequestHandling.h"

@class MNSyncStoreCache, NSString;

@interface MNSyncStoreUserHandler : NSObject <MNUserRequestHandling>
{
    id <MNUserRequestHandling> _nextHandler;
    MNSyncStoreCache *_syncStoreCache;
}

- (void).cxx_destruct;
- (void)handleMultipleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3;
- (void)handleSingleUserRequest:(id)arg1 currentPendingResult:(id)arg2 listener:(id)arg3;
- (void)configureWithNextHandler:(id)arg1;
- (id)initWithSyncStoreCache:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

