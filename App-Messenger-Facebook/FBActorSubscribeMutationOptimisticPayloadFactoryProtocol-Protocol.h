//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol.h"

@class FBActorSubscribeInputData, FBMemActorSubscribeResponsePayload;

@protocol FBActorSubscribeMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemActorSubscribeResponsePayload *)rollbackOptimisticPayload:(FBActorSubscribeInputData *)arg1;
- (FBMemActorSubscribeResponsePayload *)optimisticPayload:(FBActorSubscribeInputData *)arg1;
@end

