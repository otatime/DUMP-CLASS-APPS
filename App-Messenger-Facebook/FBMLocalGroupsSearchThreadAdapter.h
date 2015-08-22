//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBLocalGroupsSearchModelAdapter.h"

@class FBMThreadSet, MNUserStore, NSString;

@interface FBMLocalGroupsSearchThreadAdapter : NSObject <FBClassProvidable, FBLocalGroupsSearchModelAdapter>
{
    FBMThreadSet *_threadSet;
    MNUserStore *_userStore;
}

- (void).cxx_destruct;
- (void)_convertThreadsToGroupResultsWithUsers:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_allUserIdsInThreadSet;
- (void)fetchAllPossibleGroupResults:(CDUnknownBlockType)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithThreadSet:(id)arg1 userStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

