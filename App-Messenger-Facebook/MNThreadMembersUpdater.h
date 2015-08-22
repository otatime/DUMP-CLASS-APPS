//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMLeaveGroupThreadRequesterDelegate.h"
#import "MNThreadViewModelConfigurable.h"

@class MNThreadViewModel, NSMutableArray, NSString;

@interface MNThreadMembersUpdater : NSObject <FBMLeaveGroupThreadRequesterDelegate, MNThreadViewModelConfigurable>
{
    NSMutableArray *_leaveRequests;
    id <FBProvider> _leaveThreadRequesterProvider;
    id <MNThreadMembersUpdaterDelegate> _delegate;
    MNThreadViewModel *_threadViewModel;
}

@property(retain, nonatomic) MNThreadViewModel *threadViewModel; // @synthesize threadViewModel=_threadViewModel;
@property(nonatomic) __weak id <MNThreadMembersUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)currentOtherUsers;
- (void)_notfifyDelegateIfAllRequestsFinished;
- (void)requester:(id)arg1 userId:(id)arg2 couldNotLeaveGroupThreadWithFbId:(id)arg3 error:(id)arg4;
- (void)requester:(id)arg1 userId:(id)arg2 didLeaveGroupThreadWithFbId:(id)arg3;
- (void)sendRemoveRequestForParticipantWithUserId:(id)arg1;
- (void)tearDownThreadViewModelDependencies;
- (void)configureThreadViewModelDependenciesWith:(id)arg1;
- (void)dealloc;
- (id)initWithLeaveThreadRequesterProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

