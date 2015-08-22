//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSyncPersonsFetchDelegate.h"

@class NSString;

@interface FBImportedContactsSyncPersonOptimisticUpdater : NSObject <FBSyncPersonsFetchDelegate>
{
    id <FBClock> _clock;
    id <FBSyncPersonsFetchDelegate> _delegate;
}

@property(nonatomic) id <FBSyncPersonsFetchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncPersonsFetchFailed;
- (void)didFetchSyncPersons:(id)arg1;
- (id)initWithClock:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

