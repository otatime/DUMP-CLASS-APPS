//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBActorSubscribeMutationOptimisticPayloadFactoryProtocol.h"

@class NSString;

@interface FBActorSubscribeCoreMutationOptimisticPayloadFactory : NSObject <FBActorSubscribeMutationOptimisticPayloadFactoryProtocol>
{
    id <FBQueriedActorFieldsProtocol> _subscribee;
    NSString *_optimisticSecondarySubscribeStatus;
}

- (void).cxx_destruct;
- (id)rollbackOptimisticPayload:(id)arg1;
- (id)optimisticPayload:(id)arg1;
- (id)buildPageFromInput:(id)arg1 withSubscribeStatus:(id)arg2 secondarySubscribeStatus:(id)arg3;
- (id)buildPersonFromInput:(id)arg1 withSubscribeStatus:(id)arg2 secondarySubscribeStatus:(id)arg3 subscriberCount:(id)arg4;
- (id)initWithSubscribee:(id)arg1 optimisticSecondarySubscribeStatus:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

