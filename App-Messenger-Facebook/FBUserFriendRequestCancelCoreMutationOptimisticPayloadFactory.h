//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFriendRequestCancelMutationOptimisticPayloadFactoryProtocol.h"

@class FBMemPerson, NSString;

@interface FBUserFriendRequestCancelCoreMutationOptimisticPayloadFactory : NSObject <FBFriendRequestCancelMutationOptimisticPayloadFactoryProtocol>
{
    FBMemPerson *_cancelledFriendRequestee;
}

- (void).cxx_destruct;
- (id)rollbackOptimisticPayload:(id)arg1;
- (id)optimisticPayload:(id)arg1;
- (id)initWithCancelledFriendRequestee:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

